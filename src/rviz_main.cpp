#include "rviz_main.h"
#include <QSlider>
#include <QLabel>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QDebug>
#include <QVariant>
#include <QPushButton>
#include <QStatusBar>
#include <QMdiArea>

rvizMain::rvizMain(QWidget* parent)
  :QWidget(parent)
{

    QVBoxLayout* main_layout = new QVBoxLayout(parent);
    status_label_ = new QLabel("12");
    status_label_->setMinimumHeight(4);
    status_label_->setMinimumWidth(4);
    status_label_->setMaximumHeight(18);
    status_label_->setMaximumWidth(600);
    status_label_->setContentsMargins(0,0,0,0);
    status_label_->setAlignment(Qt::AlignRight);
//    QMdiArea* showrviz = new QMdiArea();
    ToolManager = new MyViz(/*showrviz*/);
//    showrviz->addSubWindow(ToolManager, Qt::FramelessWindowHint);
    connect (ToolManager, SIGNAL (statusUpdate(const QString&)), status_label_, SLOT( setText( const QString&)));
    main_layout->addWidget(ToolManager);
    main_layout->addWidget(status_label_);
//    ToolManager->showMaximized();
    setLayout( main_layout );
    QObject::connect(this, SIGNAL(statusTool(int )),ToolManager, SLOT(setTool(int )));

}

rvizMain::~rvizMain()
{
delete ToolManager;
}

void rvizMain::setTool(int tool)
{
 Q_EMIT statusTool(tool);
}
