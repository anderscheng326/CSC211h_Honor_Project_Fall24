#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QUrl>
#include <QDesktopServices>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Honor2Recycle)
    , game(nullptr)
    , myScoreboard(new Scoreboard(this)){
    ui->setupUi(this);
    this->show();
    //added signals for button pressed
    connect(ui->tbtnInfo, SIGNAL(clicked()), this, SLOT(openNewWindow()));
    connect(ui->tbtnScoreboard, SIGNAL(clicked()), this, SLOT(openScoreboard()));

    //open info window on app open
    myNewWindow = new NewWindow;
    myNewWindow->show();


}

MainWindow::~MainWindow()
{
    delete ui;
}

//stacked widget navigation w buttons
void MainWindow::on_tbtnPlastic_clicked(){
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_tbtnGlass_clicked(){
    ui->stackedWidget->setCurrentIndex(2);
}
void MainWindow::on_tbtnPaper_clicked(){
    ui->stackedWidget->setCurrentIndex(3);
}
void MainWindow::on_tbtnElectronics_clicked(){
    ui->stackedWidget->setCurrentIndex(4);
}
void MainWindow::on_tbtnClothing_clicked(){
    ui->stackedWidget->setCurrentIndex(5);
}
void MainWindow::on_tbtnBatteries_clicked(){
    ui->stackedWidget->setCurrentIndex(6);
}

//back to main page navigation buttons
void MainWindow::on_pbtnBack_clicked(){
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_pbtnBack_2_clicked(){
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_pbtnBack_3_clicked(){
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_pbtnBack_4_clicked(){
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_pbtnBack_5_clicked(){
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_pbtnBack_6_clicked(){
    ui->stackedWidget->setCurrentIndex(0);
}

//close program
void MainWindow::on_pbtnExit_clicked(){
    close();
}

//added functions for new window
void MainWindow::openNewWindow(){
    myNewWindow->show();
}

//button for new window
void MainWindow::on_tbtnInfo_clicked(){
    openNewWindow();
}

//added function for scoreboard
void MainWindow::openScoreboard(){
    if(!game){
        game = new Game();       //make sure there's a score for highscore(used to crash if scoreboard was opened b4 game played)
    }
    if(!myScoreboard){
        myScoreboard = new Scoreboard();   //make sure there's 1 scoreboard(used to open 2 scoreboards when pressed)
    }
    int totalScore = getTotalScore();      //update total score
    myScoreboard->updateScore(totalScore);
    int highScore = game->getScore();      //update highscore
    myScoreboard->updateHighScore(highScore);
    myScoreboard->show();                  //display scoreboard
}

//button for scoreboard
void MainWindow::on_tbtnScoreboard_clicked(){
    openScoreboard();
}

//bbutton for game start
void MainWindow::on_tbtnPlayGame_clicked(){
    if (game) {             //creating new instance of game(used to only run once and could not play again)
        game->close();
        delete game;
    }
    game = new Game();
    game->startGame();      //starting timers for new game
    game->show();

}


//adding/updating scores
void MainWindow::on_tbtnRecyclePlastic_clicked(){
    plasticScore++;
    ui->labelPlasticScore->setText("Plastic Score: "+ QString::number(plasticScore));
}
void MainWindow::on_tbtnRecycleGlass_clicked(){
    glassScore++;
    ui->labelGlassScore->setText("Glass Score: "+ QString::number(glassScore));
}
void MainWindow::on_tbtnRecyclePaper_clicked(){
    paperScore++;
    ui->labelPaperScore->setText("Paper Score: "+ QString::number(paperScore));
}

//plus 5 for harder to recycle waste
void MainWindow::on_tbtnRecycleElec_clicked(){
    elecScore+=5;
    ui->labelElecScore->setText("Electronics Score: "+ QString::number(elecScore));
}
void MainWindow::on_tbtnRecycleCloth_clicked(){
    clothScore+=5;
    ui->labelClothScore->setText("Clothing Score: "+ QString::number(clothScore));
}
void MainWindow::on_tbtnRecycleBatt_clicked(){
    battScore+=5;
    ui->labelBattScore->setText("Batteries Score: "+ QString::number(battScore));
}

//adding total score for scoreboard
int MainWindow::getTotalScore(){
    return plasticScore + glassScore + paperScore + elecScore + clothScore + battScore;
}

//buttons that lead to external web browser
void MainWindow::on_pbtnLink_clicked(){
    QDesktopServices::openUrl(QUrl("https://portal.311.nyc.gov/article/?kanumber=KA-02013#:~:text=Place%20plastic%20items%20in%20clear,both%20sides%20and%20the%20lid.", QUrl::TolerantMode));
}
void MainWindow::on_pbtnLink_2_clicked(){
    QDesktopServices::openUrl(QUrl("https://portal.311.nyc.gov/article/?kanumber=KA-02013#:~:text=Place%20plastic%20items%20in%20clear,both%20sides%20and%20the%20lid.", QUrl::TolerantMode));
}
void MainWindow::on_pbtnLink_3_clicked(){
    QDesktopServices::openUrl(QUrl("https://portal.311.nyc.gov/article/?kanumber=KA-02013#:~:text=Place%20plastic%20items%20in%20clear,both%20sides%20and%20the%20lid.", QUrl::TolerantMode));
}
void MainWindow::on_pbtnLink_4_clicked(){
   QDesktopServices::openUrl(QUrl("https://portal.311.nyc.gov/article/?kanumber=KA-02385", QUrl::TolerantMode));
}
void MainWindow::on_pbtnLink_5_clicked(){
   QDesktopServices::openUrl(QUrl("https://portal.311.nyc.gov/article/?kanumber=KA-03510", QUrl::TolerantMode));
}
void MainWindow::on_pbtnLink_6_clicked(){
   QDesktopServices::openUrl(QUrl("https://portal.311.nyc.gov/article/?kanumber=KA-02078", QUrl::TolerantMode));
}

