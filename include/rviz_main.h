#ifndef RVIZ_MAIN_H
#define RVIZ_MAIN_H
#include "rvizg_render.h"
#include <QObject>
#include <QWidget>

class rvizMain: public QWidget
{
  Q_OBJECT
public:
  rvizMain(QWidget* parent = 0);

  ~rvizMain();

    QLabel* status_label_;
public Q_SLOTS:
    void setTool (int tool);

Q_SIGNALS:
//    void statusUpdate( const QString& message );
    void statusTool(int message );

    private:
    MyViz *ToolManager;

};

#endif // RVIZ_MAIN_H
