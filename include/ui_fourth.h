/********************************************************************************
** Form generated from reading UI file 'fourth.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOURTH_H
#define UI_FOURTH_H

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

class Ui_fourth
{
public:
    QWidget *centralwidget;
    QFrame *line;
    QPushButton *pushButton;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *fourth)
    {
        if (fourth->objectName().isEmpty())
            fourth->setObjectName(QStringLiteral("fourth"));
        fourth->resize(1280, 720);
        centralwidget = new QWidget(fourth);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 150, 1531, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 610, 111, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(false);
        font.setWeight(50);
        pushButton->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 40, 1201, 111));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);
        label_6->setTextFormat(Qt::RichText);
        label_6->setWordWrap(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 291, 31));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 220, 671, 381));
        fourth->setCentralWidget(centralwidget);
        menubar = new QMenuBar(fourth);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 19));
        fourth->setMenuBar(menubar);
        statusbar = new QStatusBar(fourth);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        fourth->setStatusBar(statusbar);

        retranslateUi(fourth);

        QMetaObject::connectSlotsByName(fourth);
    } // setupUi

    void retranslateUi(QMainWindow *fourth)
    {
        fourth->setWindowTitle(QApplication::translate("fourth", "MainWindow", 0));
        pushButton->setText(QApplication::translate("fourth", "CLOSE", 0));
        label_6->setText(QApplication::translate("fourth", "Este m\303\251todo permite determinar la relaci\303\263n cinem\303\241tica entre dos cuerpos s\303\263lidos como los eslabones o links, utilizando la menor cantidad de par\303\241metros.                                                                                                                                                                         Con estos par\303\241metros armaremos directamente las matrices de transformaci\303\263n A de cada link.", 0));
        label->setText(QApplication::translate("fourth", "Devit Hartemberg", 0));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class fourth: public Ui_fourth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURTH_H
