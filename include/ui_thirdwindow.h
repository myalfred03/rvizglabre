/********************************************************************************
** Form generated from reading UI file 'thirdwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDWINDOW_H
#define UI_THIRDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_thirdwindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QPushButton *pushButton;
    QFrame *line;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *thirdwindow)
    {
        if (thirdwindow->objectName().isEmpty())
            thirdwindow->setObjectName(QStringLiteral("thirdwindow"));
        thirdwindow->resize(1280, 720);
        centralwidget = new QWidget(thirdwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 190, 721, 441));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 640, 111, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(false);
        font.setWeight(50);
        pushButton->setFont(font);
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 160, 1421, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 0, 1221, 171));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        thirdwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(thirdwindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 19));
        thirdwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(thirdwindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        thirdwindow->setStatusBar(statusbar);

        retranslateUi(thirdwindow);

        QMetaObject::connectSlotsByName(thirdwindow);
    } // setupUi

    void retranslateUi(QMainWindow *thirdwindow)
    {
        thirdwindow->setWindowTitle(QApplication::translate("thirdwindow", "MainWindow", 0));
        label_2->setText(QString());
        pushButton->setText(QApplication::translate("thirdwindow", "CLOSE", 0));
        label->setText(QApplication::translate("thirdwindow", "CINEM\303\201TICA INVERSA\n"
"El objetivo del problema cinem\303\241tico inverso consiste en encontrar los valores que deben adoptar las coordenadas articulares del robot\n"
"q [q 1 , q 2 , ..., q n ] T para que su extremo se posicione y oriente seg\303\272n una determinada localizaci\303\263n espacial(p, [n, o, a]).\n"
"As\303\255 como es posible abordar el problema cinem\303\241tico directo de una manera sistem\303\241tica a\n"
"partir de la utilizaci\303\263n de matrices de transformaci\303\263n homog\303\251neas, e independientemente de\n"
"la configuraci\303\263n del robot, no ocurre lo mismo con el problema cinem\303\241tico inverso, siendo el\n"
"procedimiento de obtenci\303\263n de las ecuaciones fuertemente dependiente de la configuraci\303\263n del robot.", 0));
    } // retranslateUi

};

namespace Ui {
    class thirdwindow: public Ui_thirdwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDWINDOW_H
