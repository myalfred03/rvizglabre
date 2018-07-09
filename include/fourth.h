#ifndef FOURTH_H
#define FOURTH_H

#include <QMainWindow>
#include <ui_fourth.h>


namespace Ui {
class fourth;
}

class fourth : public QMainWindow
{
    Q_OBJECT

public:
    fourth();
    ~fourth();
    void show();

private slots:
    void on_pushButton_clicked();

private:
    QMainWindow main_windowf_;
    Ui::fourth *uif;
};

#endif // FOURTH_H
