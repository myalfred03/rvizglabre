#ifndef THIRDWINDOW_H
#define THIRDWINDOW_H

#include <QMainWindow>
#include <QTreeWidget>
#include <QStyledItemDelegate>
#include <QItemDelegate>
#include <QList>
#include <QProcess>
#include <QVector>


#include "include/rvizg.h"
//#include "include/rvizg_node.h"
#include "include/ui_thirdwindow.h"

namespace Ui {
class thirdwindow;
}

class thirdwindow : public QMainWindow
{
    Q_OBJECT

public:
     thirdwindow( QWidget *parent = 0);
    ~thirdwindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::thirdwindow *ui;
    //QNode *qnode;
   // MyViz *mRviz;

};

#endif // THIRDWINDOW_H
