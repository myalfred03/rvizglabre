#include "secondwindow.h"
#include "rosgui.h"
#include <ui_secondwindow.h>
#include <QMessageBox>
#include <QMdiArea>

SecondWindow::SecondWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/images/img/CD.png");
    ui->label->setPixmap(pix);

}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_pushButton_clicked()
{
  close();
}
