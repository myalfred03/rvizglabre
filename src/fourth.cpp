#include "fourth.h"

fourth::fourth()
    //QMainWindow(parent),
   // uif(new Ui::fourth)
{

  uif->setupUi(&main_windowf_);

//    uif->setupUi(this);
    QPixmap pix(":/images/img/dhparameter.png");
    uif->label_2->setPixmap(pix);
   // main_windowf.show();

}

fourth::~fourth()
{
    delete uif;
}

void fourth::show()
{
  main_windowf_.show();
}

void fourth::on_pushButton_clicked()
{
    main_windowf_.close();
}
