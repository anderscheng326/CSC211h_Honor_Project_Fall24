#include "scoreboard.h"
#include "ui_scoreboard.h"

Scoreboard::Scoreboard(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Scoreboard){
    ui->setupUi(this);
}

Scoreboard::~Scoreboard(){
    delete ui;
}

//closing scoreboard window
void Scoreboard::on_backButton_clicked(){
    close();
}

//updating total score label for display
void Scoreboard::updateScore(int score){
    ui->labelTotalScore->setText("Total Score: " + QString::number(score));
}

//updating high score label for display
void Scoreboard::updateHighScore(int highScore){
    if (highScore > currentHS){
    ui->labelHighScore->setText("High Score: " + QString::number(highScore));
        currentHS = highScore;
    }
}
