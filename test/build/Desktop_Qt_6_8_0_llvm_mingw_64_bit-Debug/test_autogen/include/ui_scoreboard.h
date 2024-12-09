/********************************************************************************
** Form generated from reading UI file 'scoreboard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOREBOARD_H
#define UI_SCOREBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Scoreboard
{
public:
    QLabel *label;
    QPushButton *backButton;
    QLabel *labelTotalScore;
    QLabel *labelHighScore;

    void setupUi(QDialog *Scoreboard)
    {
        if (Scoreboard->objectName().isEmpty())
            Scoreboard->setObjectName("Scoreboard");
        Scoreboard->resize(400, 300);
        label = new QLabel(Scoreboard);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 20, 201, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(false);
        label->setFont(font);
        backButton = new QPushButton(Scoreboard);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(290, 250, 80, 24));
        labelTotalScore = new QLabel(Scoreboard);
        labelTotalScore->setObjectName("labelTotalScore");
        labelTotalScore->setGeometry(QRect(110, 80, 261, 51));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        labelTotalScore->setFont(font1);
        labelHighScore = new QLabel(Scoreboard);
        labelHighScore->setObjectName("labelHighScore");
        labelHighScore->setGeometry(QRect(110, 130, 261, 71));
        labelHighScore->setFont(font1);

        retranslateUi(Scoreboard);

        QMetaObject::connectSlotsByName(Scoreboard);
    } // setupUi

    void retranslateUi(QDialog *Scoreboard)
    {
        Scoreboard->setWindowTitle(QCoreApplication::translate("Scoreboard", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Scoreboard", "Scoreboard", nullptr));
        backButton->setText(QCoreApplication::translate("Scoreboard", "Back", nullptr));
        labelTotalScore->setText(QCoreApplication::translate("Scoreboard", "Recycle Score: 0", nullptr));
        labelHighScore->setText(QCoreApplication::translate("Scoreboard", "High Score: 0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Scoreboard: public Ui_Scoreboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOREBOARD_H
