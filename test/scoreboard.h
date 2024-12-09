#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include <QDialog>

namespace Ui {
    class Scoreboard;
}

class Scoreboard : public QDialog{
    Q_OBJECT

public:
    explicit Scoreboard(QWidget *parent = nullptr);
    ~Scoreboard();

    void updateScore(int score);                  //updating total score on scoreboard
    void updateHighScore(int highScore);          //updating new highscore on scoreboard


private slots:
    void on_backButton_clicked();                 //close scoreboard window

private:
    Ui::Scoreboard *ui;

    int currentHS;                                //for checking new highscore
};

#endif // SCOREBOARD_H
