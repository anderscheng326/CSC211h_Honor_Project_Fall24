/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Honor2Recycle
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *pageHome;
    QToolButton *tbtnClothing;
    QToolButton *tbtnScoreboard;
    QLabel *labelGlass;
    QLabel *labelInfo;
    QLabel *labelHeader2;
    QLabel *labelScoreboard;
    QToolButton *tbtnPaper;
    QLabel *labelPlastic;
    QLabel *label;
    QToolButton *tbtnInfo;
    QToolButton *tbtnPlastic;
    QLabel *labelBatteries;
    QLabel *labelElectronics;
    QLabel *labelPaper;
    QToolButton *tbtnElectronics;
    QPushButton *pbtnExit;
    QLabel *labelClothing;
    QToolButton *tbtnGlass;
    QToolButton *tbtnBatteries;
    QLabel *labelExit;
    QToolButton *tbtnPlayGame;
    QLabel *labelPlayButton;
    QWidget *pagePlastic;
    QLabel *labelPlastic_2;
    QPushButton *pbtnBack;
    QToolButton *tbtnRecyclePlastic;
    QLabel *labelPlasticScore;
    QTextBrowser *txtPlastic;
    QPushButton *pbtnLink;
    QWidget *pageGlass;
    QLabel *labelGlass_2;
    QPushButton *pbtnBack_2;
    QToolButton *tbtnRecycleGlass;
    QLabel *labelGlassScore;
    QTextBrowser *txtGlass;
    QPushButton *pbtnLink_2;
    QWidget *pagePaper;
    QLabel *labelPaper_2;
    QPushButton *pbtnBack_3;
    QToolButton *tbtnRecyclePaper;
    QLabel *labelPaperScore;
    QTextBrowser *txtPaper;
    QPushButton *pbtnLink_3;
    QWidget *pageElectronics;
    QLabel *labelElectronics_2;
    QPushButton *pbtnBack_4;
    QToolButton *tbtnRecycleElec;
    QLabel *labelElecScore;
    QTextBrowser *txtElectronics;
    QPushButton *pbtnLink_4;
    QWidget *pageClothing;
    QLabel *labelClothing_2;
    QPushButton *pbtnBack_5;
    QToolButton *tbtnRecycleCloth;
    QLabel *labelClothScore;
    QTextBrowser *txtClothing;
    QPushButton *pbtnLink_5;
    QWidget *pageBatteries;
    QLabel *labelBatteries_2;
    QPushButton *pbtnBack_6;
    QToolButton *tbtnRecycleBatt;
    QLabel *labelBattScore;
    QTextBrowser *txtBatteries;
    QPushButton *pbtnLink_6;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *Honor2Recycle)
    {
        if (Honor2Recycle->objectName().isEmpty())
            Honor2Recycle->setObjectName("Honor2Recycle");
        Honor2Recycle->resize(549, 417);
        centralwidget = new QWidget(Honor2Recycle);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-1, 0, 541, 391));
        QFont font;
        font.setBold(true);
        stackedWidget->setFont(font);
        pageHome = new QWidget();
        pageHome->setObjectName("pageHome");
        tbtnClothing = new QToolButton(pageHome);
        tbtnClothing->setObjectName("tbtnClothing");
        tbtnClothing->setGeometry(QRect(370, 270, 131, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        tbtnClothing->setFont(font1);
        tbtnScoreboard = new QToolButton(pageHome);
        tbtnScoreboard->setObjectName("tbtnScoreboard");
        tbtnScoreboard->setGeometry(QRect(120, 130, 131, 41));
        tbtnScoreboard->setFont(font1);
        labelGlass = new QLabel(pageHome);
        labelGlass->setObjectName("labelGlass");
        labelGlass->setGeometry(QRect(290, 130, 121, 21));
        labelInfo = new QLabel(pageHome);
        labelInfo->setObjectName("labelInfo");
        labelInfo->setGeometry(QRect(30, 80, 71, 21));
        labelHeader2 = new QLabel(pageHome);
        labelHeader2->setObjectName("labelHeader2");
        labelHeader2->setGeometry(QRect(190, 30, 191, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(true);
        labelHeader2->setFont(font2);
        labelScoreboard = new QLabel(pageHome);
        labelScoreboard->setObjectName("labelScoreboard");
        labelScoreboard->setGeometry(QRect(10, 130, 141, 31));
        tbtnPaper = new QToolButton(pageHome);
        tbtnPaper->setObjectName("tbtnPaper");
        tbtnPaper->setGeometry(QRect(370, 170, 131, 41));
        tbtnPaper->setFont(font1);
        labelPlastic = new QLabel(pageHome);
        labelPlastic->setObjectName("labelPlastic");
        labelPlastic->setGeometry(QRect(280, 80, 101, 16));
        label = new QLabel(pageHome);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 0, 241, 51));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        label->setFont(font3);
        tbtnInfo = new QToolButton(pageHome);
        tbtnInfo->setObjectName("tbtnInfo");
        tbtnInfo->setGeometry(QRect(120, 70, 131, 41));
        tbtnInfo->setFont(font1);
        tbtnPlastic = new QToolButton(pageHome);
        tbtnPlastic->setObjectName("tbtnPlastic");
        tbtnPlastic->setGeometry(QRect(370, 70, 131, 41));
        tbtnPlastic->setFont(font1);
        labelBatteries = new QLabel(pageHome);
        labelBatteries->setObjectName("labelBatteries");
        labelBatteries->setGeometry(QRect(270, 330, 91, 16));
        labelElectronics = new QLabel(pageHome);
        labelElectronics->setObjectName("labelElectronics");
        labelElectronics->setGeometry(QRect(260, 220, 111, 31));
        labelPaper = new QLabel(pageHome);
        labelPaper->setObjectName("labelPaper");
        labelPaper->setGeometry(QRect(290, 180, 91, 21));
        tbtnElectronics = new QToolButton(pageHome);
        tbtnElectronics->setObjectName("tbtnElectronics");
        tbtnElectronics->setGeometry(QRect(370, 220, 131, 41));
        tbtnElectronics->setFont(font1);
        pbtnExit = new QPushButton(pageHome);
        pbtnExit->setObjectName("pbtnExit");
        pbtnExit->setGeometry(QRect(130, 310, 80, 24));
        pbtnExit->setFont(font);
        labelClothing = new QLabel(pageHome);
        labelClothing->setObjectName("labelClothing");
        labelClothing->setGeometry(QRect(270, 280, 111, 16));
        tbtnGlass = new QToolButton(pageHome);
        tbtnGlass->setObjectName("tbtnGlass");
        tbtnGlass->setGeometry(QRect(370, 120, 131, 41));
        tbtnGlass->setFont(font1);
        tbtnBatteries = new QToolButton(pageHome);
        tbtnBatteries->setObjectName("tbtnBatteries");
        tbtnBatteries->setGeometry(QRect(370, 320, 131, 41));
        tbtnBatteries->setFont(font1);
        labelExit = new QLabel(pageHome);
        labelExit->setObjectName("labelExit");
        labelExit->setGeometry(QRect(60, 310, 91, 21));
        tbtnPlayGame = new QToolButton(pageHome);
        tbtnPlayGame->setObjectName("tbtnPlayGame");
        tbtnPlayGame->setGeometry(QRect(120, 190, 131, 51));
        tbtnPlayGame->setFont(font1);
        labelPlayButton = new QLabel(pageHome);
        labelPlayButton->setObjectName("labelPlayButton");
        labelPlayButton->setGeometry(QRect(30, 200, 71, 31));
        stackedWidget->addWidget(pageHome);
        pagePlastic = new QWidget();
        pagePlastic->setObjectName("pagePlastic");
        labelPlastic_2 = new QLabel(pagePlastic);
        labelPlastic_2->setObjectName("labelPlastic_2");
        labelPlastic_2->setGeometry(QRect(240, 20, 101, 16));
        pbtnBack = new QPushButton(pagePlastic);
        pbtnBack->setObjectName("pbtnBack");
        pbtnBack->setGeometry(QRect(430, 330, 80, 24));
        tbtnRecyclePlastic = new QToolButton(pagePlastic);
        tbtnRecyclePlastic->setObjectName("tbtnRecyclePlastic");
        tbtnRecyclePlastic->setGeometry(QRect(210, 310, 131, 41));
        labelPlasticScore = new QLabel(pagePlastic);
        labelPlasticScore->setObjectName("labelPlasticScore");
        labelPlasticScore->setGeometry(QRect(230, 270, 121, 51));
        txtPlastic = new QTextBrowser(pagePlastic);
        txtPlastic->setObjectName("txtPlastic");
        txtPlastic->setGeometry(QRect(40, 50, 461, 231));
        pbtnLink = new QPushButton(pagePlastic);
        pbtnLink->setObjectName("pbtnLink");
        pbtnLink->setGeometry(QRect(30, 323, 111, 31));
        stackedWidget->addWidget(pagePlastic);
        pageGlass = new QWidget();
        pageGlass->setObjectName("pageGlass");
        labelGlass_2 = new QLabel(pageGlass);
        labelGlass_2->setObjectName("labelGlass_2");
        labelGlass_2->setGeometry(QRect(250, 20, 121, 21));
        pbtnBack_2 = new QPushButton(pageGlass);
        pbtnBack_2->setObjectName("pbtnBack_2");
        pbtnBack_2->setGeometry(QRect(430, 330, 80, 24));
        pbtnBack_2->setFont(font);
        tbtnRecycleGlass = new QToolButton(pageGlass);
        tbtnRecycleGlass->setObjectName("tbtnRecycleGlass");
        tbtnRecycleGlass->setGeometry(QRect(210, 310, 131, 41));
        tbtnRecycleGlass->setFont(font);
        labelGlassScore = new QLabel(pageGlass);
        labelGlassScore->setObjectName("labelGlassScore");
        labelGlassScore->setGeometry(QRect(230, 280, 121, 20));
        txtGlass = new QTextBrowser(pageGlass);
        txtGlass->setObjectName("txtGlass");
        txtGlass->setGeometry(QRect(40, 50, 461, 231));
        pbtnLink_2 = new QPushButton(pageGlass);
        pbtnLink_2->setObjectName("pbtnLink_2");
        pbtnLink_2->setGeometry(QRect(30, 320, 111, 31));
        pbtnLink_2->setFont(font);
        stackedWidget->addWidget(pageGlass);
        pagePaper = new QWidget();
        pagePaper->setObjectName("pagePaper");
        labelPaper_2 = new QLabel(pagePaper);
        labelPaper_2->setObjectName("labelPaper_2");
        labelPaper_2->setGeometry(QRect(240, 20, 91, 21));
        pbtnBack_3 = new QPushButton(pagePaper);
        pbtnBack_3->setObjectName("pbtnBack_3");
        pbtnBack_3->setGeometry(QRect(430, 330, 80, 24));
        tbtnRecyclePaper = new QToolButton(pagePaper);
        tbtnRecyclePaper->setObjectName("tbtnRecyclePaper");
        tbtnRecyclePaper->setGeometry(QRect(210, 310, 131, 41));
        labelPaperScore = new QLabel(pagePaper);
        labelPaperScore->setObjectName("labelPaperScore");
        labelPaperScore->setGeometry(QRect(240, 280, 121, 20));
        txtPaper = new QTextBrowser(pagePaper);
        txtPaper->setObjectName("txtPaper");
        txtPaper->setGeometry(QRect(40, 50, 461, 231));
        pbtnLink_3 = new QPushButton(pagePaper);
        pbtnLink_3->setObjectName("pbtnLink_3");
        pbtnLink_3->setGeometry(QRect(30, 320, 111, 31));
        stackedWidget->addWidget(pagePaper);
        pageElectronics = new QWidget();
        pageElectronics->setObjectName("pageElectronics");
        labelElectronics_2 = new QLabel(pageElectronics);
        labelElectronics_2->setObjectName("labelElectronics_2");
        labelElectronics_2->setGeometry(QRect(230, 10, 121, 31));
        pbtnBack_4 = new QPushButton(pageElectronics);
        pbtnBack_4->setObjectName("pbtnBack_4");
        pbtnBack_4->setGeometry(QRect(430, 330, 80, 24));
        tbtnRecycleElec = new QToolButton(pageElectronics);
        tbtnRecycleElec->setObjectName("tbtnRecycleElec");
        tbtnRecycleElec->setGeometry(QRect(210, 310, 131, 41));
        labelElecScore = new QLabel(pageElectronics);
        labelElecScore->setObjectName("labelElecScore");
        labelElecScore->setGeometry(QRect(220, 280, 181, 20));
        txtElectronics = new QTextBrowser(pageElectronics);
        txtElectronics->setObjectName("txtElectronics");
        txtElectronics->setGeometry(QRect(40, 50, 461, 231));
        pbtnLink_4 = new QPushButton(pageElectronics);
        pbtnLink_4->setObjectName("pbtnLink_4");
        pbtnLink_4->setGeometry(QRect(30, 320, 111, 31));
        stackedWidget->addWidget(pageElectronics);
        pageClothing = new QWidget();
        pageClothing->setObjectName("pageClothing");
        labelClothing_2 = new QLabel(pageClothing);
        labelClothing_2->setObjectName("labelClothing_2");
        labelClothing_2->setGeometry(QRect(240, 20, 111, 16));
        pbtnBack_5 = new QPushButton(pageClothing);
        pbtnBack_5->setObjectName("pbtnBack_5");
        pbtnBack_5->setGeometry(QRect(430, 330, 80, 24));
        tbtnRecycleCloth = new QToolButton(pageClothing);
        tbtnRecycleCloth->setObjectName("tbtnRecycleCloth");
        tbtnRecycleCloth->setGeometry(QRect(210, 310, 131, 41));
        labelClothScore = new QLabel(pageClothing);
        labelClothScore->setObjectName("labelClothScore");
        labelClothScore->setGeometry(QRect(220, 280, 121, 20));
        txtClothing = new QTextBrowser(pageClothing);
        txtClothing->setObjectName("txtClothing");
        txtClothing->setGeometry(QRect(40, 50, 461, 231));
        pbtnLink_5 = new QPushButton(pageClothing);
        pbtnLink_5->setObjectName("pbtnLink_5");
        pbtnLink_5->setGeometry(QRect(30, 320, 111, 31));
        stackedWidget->addWidget(pageClothing);
        pageBatteries = new QWidget();
        pageBatteries->setObjectName("pageBatteries");
        labelBatteries_2 = new QLabel(pageBatteries);
        labelBatteries_2->setObjectName("labelBatteries_2");
        labelBatteries_2->setGeometry(QRect(240, 20, 91, 16));
        pbtnBack_6 = new QPushButton(pageBatteries);
        pbtnBack_6->setObjectName("pbtnBack_6");
        pbtnBack_6->setGeometry(QRect(430, 330, 80, 24));
        tbtnRecycleBatt = new QToolButton(pageBatteries);
        tbtnRecycleBatt->setObjectName("tbtnRecycleBatt");
        tbtnRecycleBatt->setGeometry(QRect(210, 310, 131, 41));
        labelBattScore = new QLabel(pageBatteries);
        labelBattScore->setObjectName("labelBattScore");
        labelBattScore->setGeometry(QRect(220, 280, 121, 20));
        txtBatteries = new QTextBrowser(pageBatteries);
        txtBatteries->setObjectName("txtBatteries");
        txtBatteries->setGeometry(QRect(40, 50, 461, 231));
        pbtnLink_6 = new QPushButton(pageBatteries);
        pbtnLink_6->setObjectName("pbtnLink_6");
        pbtnLink_6->setGeometry(QRect(30, 320, 111, 31));
        stackedWidget->addWidget(pageBatteries);
        Honor2Recycle->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Honor2Recycle);
        statusbar->setObjectName("statusbar");
        Honor2Recycle->setStatusBar(statusbar);
        menubar = new QMenuBar(Honor2Recycle);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 549, 21));
        Honor2Recycle->setMenuBar(menubar);

        retranslateUi(Honor2Recycle);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Honor2Recycle);
    } // setupUi

    void retranslateUi(QMainWindow *Honor2Recycle)
    {
        Honor2Recycle->setWindowTitle(QCoreApplication::translate("Honor2Recycle", "MainWindow", nullptr));
        tbtnClothing->setText(QCoreApplication::translate("Honor2Recycle", "Clothing", nullptr));
        tbtnScoreboard->setText(QCoreApplication::translate("Honor2Recycle", "Scoreboard", nullptr));
        labelGlass->setText(QCoreApplication::translate("Honor2Recycle", "Glass Button", nullptr));
        labelInfo->setText(QCoreApplication::translate("Honor2Recycle", "Info Button", nullptr));
        labelHeader2->setText(QCoreApplication::translate("Honor2Recycle", "Recycle! Reuse! Reduce!", nullptr));
        labelScoreboard->setText(QCoreApplication::translate("Honor2Recycle", "Scoreboard Button", nullptr));
        tbtnPaper->setText(QCoreApplication::translate("Honor2Recycle", "Paper", nullptr));
        labelPlastic->setText(QCoreApplication::translate("Honor2Recycle", "Plastic Button", nullptr));
        label->setText(QCoreApplication::translate("Honor2Recycle", "Honor2Recycle App", nullptr));
        tbtnInfo->setText(QCoreApplication::translate("Honor2Recycle", "Info", nullptr));
        tbtnPlastic->setText(QCoreApplication::translate("Honor2Recycle", "Plastic", nullptr));
        labelBatteries->setText(QCoreApplication::translate("Honor2Recycle", "Batteries Button", nullptr));
        labelElectronics->setText(QCoreApplication::translate("Honor2Recycle", "Electronics Button", nullptr));
        labelPaper->setText(QCoreApplication::translate("Honor2Recycle", "Paper Button", nullptr));
        tbtnElectronics->setText(QCoreApplication::translate("Honor2Recycle", "Electronics", nullptr));
        pbtnExit->setText(QCoreApplication::translate("Honor2Recycle", "Exit", nullptr));
        labelClothing->setText(QCoreApplication::translate("Honor2Recycle", "Clothing Button", nullptr));
        tbtnGlass->setText(QCoreApplication::translate("Honor2Recycle", "Glass", nullptr));
        tbtnBatteries->setText(QCoreApplication::translate("Honor2Recycle", "Batteries", nullptr));
        labelExit->setText(QCoreApplication::translate("Honor2Recycle", "Exit Button", nullptr));
        tbtnPlayGame->setText(QCoreApplication::translate("Honor2Recycle", "Play Game!", nullptr));
        labelPlayButton->setText(QCoreApplication::translate("Honor2Recycle", "Play Button", nullptr));
        labelPlastic_2->setText(QCoreApplication::translate("Honor2Recycle", "Plastic Page", nullptr));
        pbtnBack->setText(QCoreApplication::translate("Honor2Recycle", "Back", nullptr));
        tbtnRecyclePlastic->setText(QCoreApplication::translate("Honor2Recycle", "Recycle Plastic", nullptr));
        labelPlasticScore->setText(QCoreApplication::translate("Honor2Recycle", "Plastic Score: 0", nullptr));
        txtPlastic->setHtml(QCoreApplication::translate("Honor2Recycle", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">How to Properly Recycle Plastic:</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. Identify Recyclable Plastics: </p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-in"
                        "dent:0; text-indent:0px;\"><span style=\" font-weight:400;\">Check the recycling symbols on plastic items. Typically, items labeled with numbers 1, 2, 4, and 5 are recyclable.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. Rinse and Clean: <span style=\" font-weight:400;\">Rinse out any food or liquid residue from plastic containers to avoid contamination.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3. Remove Caps and Labels:<span style=\" font-weight:400;\"> Some recycling programs require caps and labels to be removed.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4. Sort by Type:<span style=\" font-weight:400;\"> If your local program requires it, separate plastics by type.</span></p>\n"
""
                        "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5. Follow Local Guidelines:<span style=\" font-weight:400;\"> Always adhere to your local recycling guidelines, as they can vary.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">6. Press the Button: <span style=\" font-weight:400;\">If you have followed all the steps and properly recycled your plastic waste press the button the score a point!</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">Why Should You Recycle Plastic?</span></"
                        "p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Environmental Protection:<span style=\" font-weight:400;\"> It reduces the amount of plastic waste that ends up in landfills and oceans, protecting wildlife and ecosystems.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Resource Conservation.<span style=\" font-weight:400;\"> Recycling conserves natural resources by reducing the need for new raw materials.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Energy Savings:<span style=\" font-weight:400;\"> Producing new plastic from recycled materials requires less energy than making it from scratch.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-rig"
                        "ht:0px; -qt-block-indent:0; text-indent:0px;\">- Pollution Reduction: <span style=\" font-weight:400;\">It helps decrease pollution from plastic production and waste.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Economic Benefits:<span style=\" font-weight:400;\"> Recycling creates jobs and supports the recycling industry.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">By properly recycling plastic, we contribute to a healthier, more sustainable environment. \360\237\214\215\342\231\273\357\270\217</span></p></body></html>", nullptr));
        pbtnLink->setText(QCoreApplication::translate("Honor2Recycle", "Local Guidelines", nullptr));
        labelGlass_2->setText(QCoreApplication::translate("Honor2Recycle", "Glass Page", nullptr));
        pbtnBack_2->setText(QCoreApplication::translate("Honor2Recycle", "Back", nullptr));
        tbtnRecycleGlass->setText(QCoreApplication::translate("Honor2Recycle", "Recycle Glass", nullptr));
        labelGlassScore->setText(QCoreApplication::translate("Honor2Recycle", "Glass Score: 0", nullptr));
        txtGlass->setHtml(QCoreApplication::translate("Honor2Recycle", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a><span style=\" text-decoration: underline;\">H</span><span style=\" text-decoration: underline;\">ow to Properly Recycle Glass:</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a>1."
                        " Rinse and Clean:<a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a><span style=\" font-weight:400;\"> </span><span style=\" font-weight:400;\">Rinse out any food or liquid residue from glass containers to prevent contamination.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a>2. Remove Caps and Lids:<a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a><span style=\" font-weight:400;\"> </span><span style=\" font-weight:400;\">Remove any caps, lids, or metal rings from glass bottles and jars.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a>3. Separate by Color:<a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a><span style=\" font-weight:400;\"> </span><span style=\" font-weight:400;\">If required by your "
                        "local recycling program, separate glass by color (e.g., clear, green, brown).</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a>4. Avoid Contaminants:<a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a><span style=\" font-weight:400;\"> </span><span style=\" font-weight:400;\">Do not recycle broken glass, ceramics, or any glass contaminated with food or hazardous materials.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a>5. Follow Local Guidelines:<a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a><span style=\" font-weight:400;\"> </span><span style=\" font-weight:400;\">Adhere to your local recycling guidelines for glass products.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-botto"
                        "m:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">6. Press the Button: <span style=\" font-weight:400;\">If you have followed all the steps and properly recycled your glass waste press the button the score a point!</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a><span style=\" text-decoration: underline;\">W</span><span style=\" text-decoration: underline;\">hy Should You Recycle Glass?</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a>- Resource Conservation:<a name=\"wPdfLx4nVaaW"
                        "2rMnVEHRL-user-message\"></a><span style=\" font-weight:400;\"> </span><span style=\" font-weight:400;\">Conserves raw materials like sand, soda ash, and limestone.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a>- Energy Savings:<a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a><span style=\" font-weight:400;\"> </span><span style=\" font-weight:400;\">Melting recycled glass uses less energy compared to making new glass from raw materials.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a>- Landfill Reduction:<a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a><span style=\" font-weight:400;\"> </span><span style=\" font-weight:400;\">Reduces the amount of glass waste that ends up in landfills.</span></"
                        "p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a>- Environmental Protection:<a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a><span style=\" font-weight:400;\"> </span><span style=\" font-weight:400;\">Minimizes the environmental impact by reducing the need for new raw materials and energy.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a>- Economic Benefits:<a name=\"wPdfLx4nVaaW2rMnVEHRL-user-message\"></a><span style=\" font-weight:400;\"> </span><span style=\" font-weight:400;\">Supports the recycling industry and creates jobs.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-"
                        "weight:400;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">By properly recycling glass, we can contribute to a sustainable future and reduce our environmental footprint. \360\237\214\215\342\231\273\357\270\217</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p></body></html>", nullptr));
        pbtnLink_2->setText(QCoreApplication::translate("Honor2Recycle", "Local Guidelines", nullptr));
        labelPaper_2->setText(QCoreApplication::translate("Honor2Recycle", "Paper Page", nullptr));
        pbtnBack_3->setText(QCoreApplication::translate("Honor2Recycle", "Back", nullptr));
        tbtnRecyclePaper->setText(QCoreApplication::translate("Honor2Recycle", "Recycle Paper", nullptr));
        labelPaperScore->setText(QCoreApplication::translate("Honor2Recycle", "Paper Score: 0", nullptr));
        txtPaper->setHtml(QCoreApplication::translate("Honor2Recycle", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">How to Properly Recycle Paper:</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. Separate Paper Types:<span style=\" font-weight:400;\"> Sort paper by type, such as newspapers, magazines, office paper, and cardboard.</span></p>\n"
"<p"
                        " align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. Remove Contaminants:<span style=\" font-weight:400;\"> Remove any non-paper materials, like plastic windows in envelopes, staples, and tape.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3. Flatten Cardboard<span style=\" font-weight:400;\">: Flatten cardboard boxes to save space in your recycling bin.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4. Avoid Soiled Paper:<span style=\" font-weight:400;\"> Do not recycle paper contaminated with food, grease, or other residues.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5. Follow Local Guidelines:<span sty"
                        "le=\" font-weight:400;\"> Adhere to local recycling guidelines for paper products.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">6. Press the Button: <span style=\" font-weight:400;\">If you have followed all the steps and properly recycled your glass waste press the button the score a point!</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">Why Should You Recycle Paper?</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Resource Conservation:<span style=\" font-"
                        "weight:400;\"> Saves trees and conserves natural resources by reducing the need for virgin paper pulp.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Energy and Water Savings: <span style=\" font-weight:400;\">Uses less energy and water to produce recycled paper compared to new paper.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Landfill Reduction:<span style=\" font-weight:400;\"> Reduces the amount of paper waste sent to landfills.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Pollution Reduction:<span style=\" font-weight:400;\"> Decreases pollution associated with paper manufacturing.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; ma"
                        "rgin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Economic Benefits:<span style=\" font-weight:400;\"> Creates jobs and supports the recycling industry.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">By properly recycling paper, we contribute to a more sustainable environment and help conserve valuable resources. \360\237\214\215\342\231\273\357\270\217</span></p></body></html>", nullptr));
        pbtnLink_3->setText(QCoreApplication::translate("Honor2Recycle", "Local Guidelines", nullptr));
        labelElectronics_2->setText(QCoreApplication::translate("Honor2Recycle", "Electronics Page", nullptr));
        pbtnBack_4->setText(QCoreApplication::translate("Honor2Recycle", "Back", nullptr));
        tbtnRecycleElec->setText(QCoreApplication::translate("Honor2Recycle", "Recycle Electronics", nullptr));
        labelElecScore->setText(QCoreApplication::translate("Honor2Recycle", "Electronics Score: 0", nullptr));
        txtElectronics->setHtml(QCoreApplication::translate("Honor2Recycle", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">How to Properly Recycle Electronics:</p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. Backup Data:<span style=\" font-weight:400;\"> Before recycling, backup any important data from your devices.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-le"
                        "ft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. Remove Personal Information: <span style=\" font-weight:400;\">Wipe all personal data from your electronics to ensure your privacy.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3. Identify Recyclable Electronics:<span style=\" font-weight:400;\"> Check which electronics are accepted by your local recycling program (e.g., computers, smartphones, tablets).</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4. Separate Accessories<span style=\" font-weight:400;\">: Remove batteries, chargers, and other accessories. Recycle these components separately if necessary.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5. Drop Off at Designat"
                        "ed Locations: <span style=\" font-weight:400;\">Take your electronics to designated recycling centers, e-waste collection events, or retailer take-back programs.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">6. Follow Local Guidelines:<span style=\" font-weight:400;\"> Always adhere to your local e-waste recycling guidelines.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">7. Press the Button: <span style=\" font-weight:400;\">If you have followed all the steps above and correctly recycled your electronics press the button to score 5 points! </span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margi"
                        "n-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">Why Should You Recycle Electronics?</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Resource Recovery:<span style=\" font-weight:400;\"> Electronics contain valuable materials like gold, silver, and copper, which can be recovered and reused.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Environmental Protection:<span style=\" font-weight:400;\"> Reduces the release of harmful substances, such as lead and mercury, into the environment.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Waste Reduction: <span style=\" font-weight:400;\">Decreases the amount of elec"
                        "tronic waste in landfills, which can take hundreds of years to decompose.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Energy Conservation:<span style=\" font-weight:400;\"> Saves energy by reducing the need to mine and process new raw materials.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Economic Benefits: <span style=\" font-weight:400;\">Supports the recycling industry and creates jobs.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">By properly recycling el"
                        "ectronics, we help conserve valuable resources and protect the environment from hazardous waste. \360\237\214\215\342\231\273\357\270\217</span></p></body></html>", nullptr));
        pbtnLink_4->setText(QCoreApplication::translate("Honor2Recycle", "Local Guidelines", nullptr));
        labelClothing_2->setText(QCoreApplication::translate("Honor2Recycle", "Clothing Page", nullptr));
        pbtnBack_5->setText(QCoreApplication::translate("Honor2Recycle", "Back", nullptr));
        tbtnRecycleCloth->setText(QCoreApplication::translate("Honor2Recycle", "Recycle Clothing", nullptr));
        labelClothScore->setText(QCoreApplication::translate("Honor2Recycle", "Clothing Score: 0", nullptr));
        txtClothing->setHtml(QCoreApplication::translate("Honor2Recycle", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">How to Properly Recycle Clothing:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. Sort and Clean: <span style=\" font-weight:400;\">Sort your clothing into wearable and non-wearable items, and wash everything to ensure it's clean.</span></p>\n"
"<p style=\" margin-top"
                        ":0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. Donate Wearable Items:<span style=\" font-weight:400;\"> Donate gently used clothing to local charities, shelters, or thrift stores.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3. Repurpose Non-Wearable Items: <span style=\" font-weight:400;\">Repurpose torn or stained clothing into cleaning rags or DIY projects.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4. Check for Textile Recycling Programs: <span style=\" font-weight:400;\">Look for textile recycling programs in your community that accept worn-out clothing.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5. Return to Retailers: <span style=\" font-weight:400;\">Some retailers offer take-"
                        "back programs for used clothing, where they recycle or upcycle old garments.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">6. Follow Local Guidelines: <span style=\" font-weight:400;\">Adhere to any local recycling guidelines for textiles.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">7. Press the Button: <span style=\" font-weight:400;\">If you have followed all the steps above and correctly recycled your clothing press the button to score 5 points! </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">Why Should You Recycle Clothin"
                        "g?</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Environmental Impact:<span style=\" font-weight:400;\"> Reduces the amount of textile waste in landfills, which can take decades to decompose and release harmful chemicals.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Resource Conservation: <span style=\" font-weight:400;\">Conserves resources used in the production of new textiles, such as water, energy, and raw materials.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Waste Reduction: R<span style=\" font-weight:400;\">educes the environmental footprint by minimizing waste and promoting a circular economy.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\""
                        ">- Charitable Support: <span style=\" font-weight:400;\">Provides clothing to those in need through donations to charities and shelters.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Economic Benefits: <span style=\" font-weight:400;\">Supports the recycling and textile industries, creating jobs and encouraging sustainable practices.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">By properly recycling clothing, we contribute to a more sustainable and eco-friendly world. \360\237\214\215\342\231\273\357\270\217</span></p></body></html>", nullptr));
        pbtnLink_5->setText(QCoreApplication::translate("Honor2Recycle", "Local Guidelines", nullptr));
        labelBatteries_2->setText(QCoreApplication::translate("Honor2Recycle", "Batteries Page", nullptr));
        pbtnBack_6->setText(QCoreApplication::translate("Honor2Recycle", "Back", nullptr));
        tbtnRecycleBatt->setText(QCoreApplication::translate("Honor2Recycle", "Recycle Batteries", nullptr));
        labelBattScore->setText(QCoreApplication::translate("Honor2Recycle", "Batteries Score: 0", nullptr));
        txtBatteries->setHtml(QCoreApplication::translate("Honor2Recycle", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">How to Properly Recycle Batteries:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. Identify Battery Type:<span style=\" font-weight:400;\"> Determine the type of battery you have (e.g., alkaline, lithium-ion, nickel-cadmium, lead-acid) as recycling methods may vary.</"
                        "span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. Locate Recycling Centers:<span style=\" font-weight:400;\"> Find designated battery recycling centers or collection points in your community. Many retailers and local government facilities offer battery recycling programs.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3. Store Safely: <span style=\" font-weight:400;\">Store used batteries in a safe, dry place and avoid mixing different types of batteries together.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4. Prepare for Recycling: <span style=\" font-weight:400;\">Tape the terminals of lithium-ion batteries to prevent short circuits and protect them from damage.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; marg"
                        "in-right:0px; -qt-block-indent:0; text-indent:0px;\">5. Drop Off:<span style=\" font-weight:400;\"> Take your batteries to a designated recycling center or collection point.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">6. Follow Local Guidelines: <span style=\" font-weight:400;\">Adhere to local recycling guidelines for batteries to ensure safe and effective recycling.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">7. Press the Button: <span style=\" font-weight:400;\">If you have followed all the steps above and correctly recycled your batteries press the button to score 5 points! </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px"
                        "; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">Why Should You Recycle Batteries?</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Resource Recovery: <span style=\" font-weight:400;\">Batteries contain valuable materials, such as metals and minerals, that can be recovered and reused.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Environmental Protection:<span style=\" font-weight:400;\"> Prevents hazardous substances, like lead, mercury, and cadmium, from contaminating soil and water.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Waste Reduction:<span style=\" font-weight:400;\"> Reduces the number of batteries that end up in landfills, where they can take a long time to decompose and ma"
                        "y release harmful chemicals.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Energy Conservation:<span style=\" font-weight:400;\"> Saves energy by reducing the need to mine and process new raw materials.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Economic Benefits: <span style=\" font-weight:400;\">Supports the recycling industry and creates jobs.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">By properly recycling batteries, we help protect the environment and conserve valuable resources. \360\237\214\215\342\231\273\357\270\217</s"
                        "pan></p></body></html>", nullptr));
        pbtnLink_6->setText(QCoreApplication::translate("Honor2Recycle", "Local Guidelines", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Honor2Recycle: public Ui_Honor2Recycle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
