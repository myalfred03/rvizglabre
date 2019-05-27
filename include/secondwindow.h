#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>
#include <QTreeWidget>
#include <QStyledItemDelegate>
#include <QItemDelegate>
#include <QList>
#include <QProcess>
#include <QVector>


#include "rvizg.h"
//#include "include/rvizg_node.h"
#include <ui_secondwindow.h>
//#include "rosgui.h"

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QMainWindow
{
    Q_OBJECT

public:
    SecondWindow(QWidget *parent = 0);
    ~SecondWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SecondWindow *ui;
    //QNode *qnode;
    //MyViz *mRviz;
    //SecondWindow *secwindow;

  //  ROSGUI *guir;
};

#endif // SECONDWINDOW_H
