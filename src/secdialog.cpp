#include "secdialog.h"
#include "ui_secdialog.h"

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
    QPixmap pix(":/images/img/AS.png");
    ui->label2->setPixmap(pix);
}

SecDialog::~SecDialog()
{
    delete ui;
}
