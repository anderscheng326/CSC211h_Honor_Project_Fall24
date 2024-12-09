#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "newwindow.h"   //infowindow
#include "scoreboard.h"
#include "game.h"


QT_BEGIN_NAMESPACE
namespace Ui {
    class Honor2Recycle;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    int getTotalScore();           //to get score for scoreboard

//added for newwindow
public slots:
    void openNewWindow();          //signals for when buttons are pressed
    void openScoreboard();

private:
    NewWindow *myNewWindow;
    Scoreboard *myScoreboard;
    Ui::Honor2Recycle *ui;
    Game *game;

    int plasticScore=0, glassScore=0, paperScore=0, elecScore=0, clothScore=0, battScore=0; //intialize scores all 0
    int highScore=0;

    //void updateScores(int score);

private slots:
    //buttons for page navigation
    void on_tbtnPlastic_clicked();
    void on_tbtnGlass_clicked();
    void on_tbtnPaper_clicked();
    void on_tbtnElectronics_clicked();
    void on_tbtnClothing_clicked();
    void on_tbtnBatteries_clicked();

    //return to main page buttons for each page
    void on_pbtnBack_clicked();
    void on_pbtnBack_2_clicked();
    void on_pbtnBack_3_clicked();
    void on_pbtnBack_4_clicked();
    void on_pbtnBack_5_clicked();
    void on_pbtnBack_6_clicked();

    //close program
    void on_pbtnExit_clicked();

    //open new window for info and scorboard
    void on_tbtnInfo_clicked();
    void on_tbtnScoreboard_clicked();

    //start game
    void on_tbtnPlayGame_clicked();


    //scoring points for recycling on each page
    void on_tbtnRecyclePlastic_clicked();
    void on_tbtnRecycleGlass_clicked();
    void on_tbtnRecyclePaper_clicked();
    void on_tbtnRecycleElec_clicked();
    void on_tbtnRecycleCloth_clicked();
    void on_tbtnRecycleBatt_clicked();

    //link to web browser on each page
    void on_pbtnLink_clicked();
    void on_pbtnLink_2_clicked();
    void on_pbtnLink_3_clicked();
    void on_pbtnLink_4_clicked();
    void on_pbtnLink_5_clicked();
    void on_pbtnLink_6_clicked();
};
#endif // MAINWINDOW_H
