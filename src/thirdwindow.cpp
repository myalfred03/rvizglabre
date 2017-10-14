#include "include/thirdwindow.h"
#include "include/ui_thirdwindow.h"
#include "include/rosgui.h"
#include <QMessageBox>
#include <QMdiArea>


thirdwindow::thirdwindow(  QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::thirdwindow)

{

    ui->setupUi(this);
    QPixmap pix(":/images/img/CI.png");
    ui->label_2->setPixmap(pix);


}

thirdwindow::~thirdwindow()
{
    delete ui;
}


void thirdwindow::on_pushButton_clicked()
{
   close();
}
