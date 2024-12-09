#include "game.h"
#include <QPainter>       //for drawing the board
#include <QTimer>         //for game frame refresh rate
#include <QElapsedTimer>  //for game time
#include <cstdlib>
#include <QmessageBox>    //for score message after game
#include <QFont>

const int WIDTH = 30;                //board size
const int HEIGHT = 30;

Game::Game(QWidget *parent)                 //intializing starting param
    : QDialog(parent), player({WIDTH / 2, HEIGHT - 2, 'U'}), score(0), caughtObject({-1, -1, ' '}) {
    setFixedSize(WIDTH * 20, HEIGHT * 20);

    binRecycle = {0, HEIGHT - 1, 'R'};
    binTrash = {WIDTH - 1, HEIGHT - 1, 'T'};

    timer = new QTimer(this);                                     //creating new timer
    connect(timer, &QTimer::timeout, this, &Game::updateGame);    //connecting timer to game update (refresh frames)


}

Game::~Game() {
    delete timer;
}

//starting game timers
void Game::startGame() {
    elapsedTimer.start(); //start elapse timer for game time
    timer->start(100);   //time for frame refresh (lower for faster)
}

//drawing the game
void Game::paintEvent(QPaintEvent *event) {
    QPainter painter(this);

    for (int i = 0; i < HEIGHT; ++i) {                         //grid creation
        for (int j = 0; j < WIDTH; ++j) {
            QRect rect(j * 20, i * 20, 20, 20);
            QPainter painter(this);
            painter.setFont(QFont("Calibri", 20)); //using QFont to adjust sizing
            if (i == player.y && j == player.x) {
                painter.drawText(rect, Qt::AlignCenter, QString(player.symbol));     //draw player
                if (caughtObject.symbol != ' ') {
                    if (caughtObject.symbol == 'r'){  //col
                        painter.setPen(Qt::cyan);
                    } else if (caughtObject.symbol == 't'){
                        painter.setPen(Qt::green);
                    }
                    QRect caughtRect(j * 20, (i - 1) * 20, 20, 20);
                    painter.drawText(caughtRect, Qt::AlignCenter, QString(caughtObject.symbol));  //draw player holding waste
                }
            } else if (i == binRecycle.y && j == binRecycle.x) {
                painter.setPen(Qt::cyan);
                painter.drawText(rect, Qt::AlignCenter, QString(binRecycle.symbol));              //draw recycle bin
            } else if (i == binTrash.y && j == binTrash.x) {
                painter.setPen(Qt::green);
                painter.drawText(rect, Qt::AlignCenter, QString(binTrash.symbol));                //draw trash bin
            } else {
                bool drawn = false;
                for (const auto& obj : fallingObjects) {
                    if (obj.x == j && obj.y == i) {
                        if (obj.symbol == 'r'){
                            painter.setPen(Qt::cyan);
                        } else if (obj.symbol == 't'){
                            painter.setPen(Qt::green);
                            }
                        painter.drawText(rect, Qt::AlignCenter, QString(obj.symbol));              //draw falling waste
                        drawn = true;
                        break;
                    }
                }
                if (!drawn) {
                    painter.drawText(rect, Qt::AlignCenter, " ");                                  //draw blank space for rest of board
                }
            }
        }
    }
}

//assigning key inputs to player movement
void Game::keyPressEvent(QKeyEvent *event) {
    switch (event->key()) {
    case Qt::Key_Left:              //move left
    case Qt::Key_A:
        if (player.x > 0) player.x--;
        break;
    case Qt::Key_Right:             //move right
    case Qt::Key_D:
        if (player.x < WIDTH - 1) player.x++;
        break;
    case Qt::Key_Down:              //dipose waste/score points
    case Qt::Key_S:
        if (caughtObject.symbol != ' ' &&
            ((player.x == binRecycle.x && caughtObject.symbol == 'r') ||
             (player.x == binTrash.x && caughtObject.symbol == 't'))) {
            caughtObject = {-1, -1, ' '}; // dropping waste in bin
            increaseScore();              // adding score
        }
        break;
    }
    update();
}

//update game frames
void Game::updateGame() {
    if(elapsedTimer.elapsed() >= 20000) { //stop elapsedtimer - game ends after miliseconds passed
        timer->stop();
        update();

        QMessageBox::information(this, "Game Over!", QString("The game is over! Your score was %1").arg(score));
        logScore();
        close();
        return;
    }

    generateObjects();    //game update
    moveObjects();
    checkCollisions();
    update();
}

//simulate gravity for waste
void Game::moveObjects() {
    for (auto& obj : fallingObjects) {
        obj.y++;
    }
}

//randomly creating 2 different types of waste(recycable or trash)
void Game::generateObjects() {
    if (rand() % 50 == 0) {             //change number to increase or decrease generation chance (lower is more)
        fallingObjects.push_back({(rand() % (WIDTH - 2) + 1), 0, 'r'});
    }
    if (rand() % 50 == 1) {
        fallingObjects.push_back({(rand() % (WIDTH - 2) + 1), 0, 't'});
    }
}

//checking for if player and waste touch
void Game::checkCollisions() {
    for (auto it = fallingObjects.begin(); it != fallingObjects.end();) {
        if (it->x == player.x && it->y == player.y && caughtObject.symbol == ' ') {
            caughtObject = *it; // Catch the object
            it = fallingObjects.erase(it);
        } else if (it->y >= HEIGHT) {
            it = fallingObjects.erase(it);
        } else {
            ++it;
        }
    }
}

//file output for game log of score
void Game::logScore() {
    QFile file("C:/Users/ander/OneDrive/Documents/Honor2Recycle/scoreLog.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out <<" - Score: "<<score<<"\n";
        file.close();
    }
}

//getting score for scoreboard
int Game::getScore() const{
    return score;
}

//increase score in game loop
void Game::increaseScore(){
    score++;
}

