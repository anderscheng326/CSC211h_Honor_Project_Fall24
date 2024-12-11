#ifndef GAME_H
#define GAME_H

#include <QDialog>
#include <vector>             //for vector of falling objects
#include <QTimer>             //for game frame refresh rate
#include <QKeyEvent>          //for keyboard movement
#include <QElapsedTimer>      //for game time
#include <QFile>              //for file output


namespace Ui {
    class Game;
}

class Game : public QDialog{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    ~Game();

    int getScore() const; //to get the score


public slots:
    void increaseScore();  //score system
    void startGame();      //start game timers

protected:
    void paintEvent(QPaintEvent *event) override;   //for drawing the game
    void keyPressEvent(QKeyEvent *event) override;  //for keyboard movement

private slots:
    void updateGame();     //update game instance (frames)


private:
    struct Object {     //5 objects each with location(x,y) and symbol
        int x, y;
        char symbol;
    };

    Object player;     //user
    std::vector<Object> fallingObjects;  //falling waste
    Object caughtObject;                 //check for catching waste
    Object binRecycle;                   //bin for recycle
    Object binTrash;                     //bin for trash
    int score=0;                         //intial score is 0
    QTimer *timer;                       //timer for frames
    QElapsedTimer elapsedTimer;          //timer for game time

    void moveObjects();                  //movement for waste
    void generateObjects();              //creating objects
    void checkCollisions();              //check if touching
    void logScore();                     //for outputting scores into file
};

#endif // GAME_H
