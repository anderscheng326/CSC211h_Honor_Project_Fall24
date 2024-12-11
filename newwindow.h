#ifndef NEWWINDOW_H
#define NEWWINDOW_H
//info window

#include <QDialog>

namespace Ui {
    class NewWindow;
}

class NewWindow : public QDialog{
    Q_OBJECT

public:
    explicit NewWindow(QWidget *parent = 0);
    ~NewWindow();

//close infowindow
private slots:
    void on_backButton_clicked();

private:
    Ui::NewWindow *ui;
};

#endif // NEWWINDOW_H
