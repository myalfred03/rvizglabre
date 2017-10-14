/********************************************************************************
** Form generated from reading UI file 'rosgui.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROSGUI_H
#define UI_ROSGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ROSGUI
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionExit;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QLabel *label_3;
    QWidget *tab_2;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_3;
    QGroupBox *gridGroupBox;
    QGridLayout *gridLayout_2;
    QFrame *line_17;
    QDial *dial6DOF;
    QFrame *line_16;
    QFrame *line_13;
    QLabel *label_12;
    QFrame *line_19;
    QDoubleSpinBox *spinBox2DOF;
    QDoubleSpinBox *spinBox5DOF;
    QLabel *label_14;
    QFrame *line_12;
    QFrame *line_5;
    QFrame *line_8;
    QDial *dial5DOF;
    QFrame *line_7;
    QLabel *label_20;
    QDoubleSpinBox *spinBox6DOF;
    QDoubleSpinBox *spinBox1DOF;
    QFrame *line_15;
    QFrame *line_6;
    QDial *dial1DOF;
    QFrame *line_10;
    QFrame *line_9;
    QFrame *line_18;
    QFrame *line_4;
    QFrame *line_11;
    QLabel *label_22;
    QDoubleSpinBox *spinBox4DOF;
    QDoubleSpinBox *spinBox3DOF;
    QLabel *label_21;
    QFrame *line_14;
    QDial *dial4DOF;
    QDial *dial3DOF;
    QLabel *label_13;
    QDial *dial2DOF;
    QToolBox *toolBox;
    QWidget *page;
    QGroupBox *gridGroupBox_3;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBox2DOFI;
    QCheckBox *checkBox3DOFI;
    QCheckBox *checkBox4DOFI;
    QCheckBox *checkBox5DOFI;
    QCheckBox *checkBox6DOFI;
    QWidget *page_2;
    QGroupBox *gridGroupBox_2;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBox3DOFs;
    QCheckBox *checkBox4DOFs;
    QCheckBox *checkBox5DOFs;
    QCheckBox *checkBox6DOFs;
    QCheckBox *checkBox2DOFs;
    QGroupBox *gridGroupBox2;
    QGridLayout *gridLayout_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *tab_3;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSlider *xSlider;
    QDoubleSpinBox *xBox;
    QSlider *rollSlider;
    QDoubleSpinBox *pitchBox;
    QDoubleSpinBox *yBox;
    QLabel *label_4;
    QSlider *ySlider;
    QLabel *label_18;
    QDoubleSpinBox *zBox;
    QLabel *label_16;
    QSlider *yawSlider;
    QSlider *pitchSlider;
    QDoubleSpinBox *rollBox;
    QLabel *label_19;
    QSlider *zSlider;
    QDoubleSpinBox *yawBox;
    QLabel *label_17;
    QLabel *label_2;
    QCheckBox *checkBox;
    QWidget *tab_4;
    QTableWidget *tableWidget;
    QPushButton *pushButton_4;
    QLabel *label_15;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menuFILE;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ROSGUI)
    {
        if (ROSGUI->objectName().isEmpty())
            ROSGUI->setObjectName(QStringLiteral("ROSGUI"));
        ROSGUI->resize(1400, 900);
        ROSGUI->setSizeIncrement(QSize(0, 0));
        ROSGUI->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/img/ROS_INDUSTRIAL.png"), QSize(), QIcon::Normal, QIcon::Off);
        ROSGUI->setWindowIcon(icon);
        ROSGUI->setAutoFillBackground(false);
        actionOpen = new QAction(ROSGUI);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(ROSGUI);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_as = new QAction(ROSGUI);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionExit = new QAction(ROSGUI);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(ROSGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 62, 561, 861));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        tabWidget->setSizeIncrement(QSize(200, 200));
        tabWidget->setMouseTracking(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 370, 80, 22));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 521, 301));
        tabWidget->addTab(tab, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QStringLiteral("INICIO"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 40, 431, 111));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setTextFormat(Qt::RichText);
        label_6->setWordWrap(true);
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 10, 361, 16));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 150, 391, 41));
        gridGroupBox = new QGroupBox(tab_2);
        gridGroupBox->setObjectName(QStringLiteral("gridGroupBox"));
        gridGroupBox->setGeometry(QRect(40, 340, 351, 411));
        gridLayout_2 = new QGridLayout(gridGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        line_17 = new QFrame(gridGroupBox);
        line_17->setObjectName(QStringLiteral("line_17"));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_17, 7, 3, 1, 1);

        dial6DOF = new QDial(gridGroupBox);
        dial6DOF->setObjectName(QStringLiteral("dial6DOF"));
        dial6DOF->setNotchTarget(3.7);
        dial6DOF->setNotchesVisible(true);

        gridLayout_2->addWidget(dial6DOF, 10, 1, 1, 1);

        line_16 = new QFrame(gridGroupBox);
        line_16->setObjectName(QStringLiteral("line_16"));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_16, 7, 1, 1, 1);

        line_13 = new QFrame(gridGroupBox);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_13, 3, 3, 1, 1);

        label_12 = new QLabel(gridGroupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(16, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("FreeMono"));
        font2.setPointSize(14);
        label_12->setFont(font2);

        gridLayout_2->addWidget(label_12, 0, 0, 1, 1);

        line_19 = new QFrame(gridGroupBox);
        line_19->setObjectName(QStringLiteral("line_19"));
        line_19->setFrameShape(QFrame::HLine);
        line_19->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_19, 9, 3, 1, 1);

        spinBox2DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox2DOF->setObjectName(QStringLiteral("spinBox2DOF"));

        gridLayout_2->addWidget(spinBox2DOF, 2, 3, 1, 1);

        spinBox5DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox5DOF->setObjectName(QStringLiteral("spinBox5DOF"));

        gridLayout_2->addWidget(spinBox5DOF, 8, 3, 1, 1);

        label_14 = new QLabel(gridGroupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMaximumSize(QSize(16, 16));
        label_14->setFont(font2);

        gridLayout_2->addWidget(label_14, 4, 0, 1, 1);

        line_12 = new QFrame(gridGroupBox);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_12, 3, 1, 1, 1);

        line_5 = new QFrame(gridGroupBox);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setMaximumSize(QSize(16777215, 16777215));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_5, 4, 2, 1, 1);

        line_8 = new QFrame(gridGroupBox);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_8, 10, 2, 1, 1);

        dial5DOF = new QDial(gridGroupBox);
        dial5DOF->setObjectName(QStringLiteral("dial5DOF"));
        dial5DOF->setNotchesVisible(true);

        gridLayout_2->addWidget(dial5DOF, 8, 1, 1, 1);

        line_7 = new QFrame(gridGroupBox);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_7, 8, 2, 1, 1);

        label_20 = new QLabel(gridGroupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMaximumSize(QSize(16, 16));
        label_20->setFont(font2);

        gridLayout_2->addWidget(label_20, 6, 0, 1, 1);

        spinBox6DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox6DOF->setObjectName(QStringLiteral("spinBox6DOF"));

        gridLayout_2->addWidget(spinBox6DOF, 10, 3, 1, 1);

        spinBox1DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox1DOF->setObjectName(QStringLiteral("spinBox1DOF"));

        gridLayout_2->addWidget(spinBox1DOF, 0, 3, 1, 1);

        line_15 = new QFrame(gridGroupBox);
        line_15->setObjectName(QStringLiteral("line_15"));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_15, 5, 3, 1, 1);

        line_6 = new QFrame(gridGroupBox);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_6, 6, 2, 1, 1);

        dial1DOF = new QDial(gridGroupBox);
        dial1DOF->setObjectName(QStringLiteral("dial1DOF"));
        dial1DOF->setTracking(true);
        dial1DOF->setWrapping(false);
        dial1DOF->setNotchesVisible(true);

        gridLayout_2->addWidget(dial1DOF, 0, 1, 1, 1);

        line_10 = new QFrame(gridGroupBox);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_10, 0, 2, 1, 1);

        line_9 = new QFrame(gridGroupBox);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_9, 2, 2, 1, 1);

        line_18 = new QFrame(gridGroupBox);
        line_18->setObjectName(QStringLiteral("line_18"));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_18, 9, 1, 1, 1);

        line_4 = new QFrame(gridGroupBox);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 1, 3, 1, 1);

        line_11 = new QFrame(gridGroupBox);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_11, 1, 1, 1, 1);

        label_22 = new QLabel(gridGroupBox);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMaximumSize(QSize(16, 16));
        label_22->setFont(font2);

        gridLayout_2->addWidget(label_22, 10, 0, 1, 1);

        spinBox4DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox4DOF->setObjectName(QStringLiteral("spinBox4DOF"));

        gridLayout_2->addWidget(spinBox4DOF, 6, 3, 1, 1);

        spinBox3DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox3DOF->setObjectName(QStringLiteral("spinBox3DOF"));

        gridLayout_2->addWidget(spinBox3DOF, 4, 3, 1, 1);

        label_21 = new QLabel(gridGroupBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMaximumSize(QSize(16, 16));
        label_21->setFont(font2);

        gridLayout_2->addWidget(label_21, 8, 0, 1, 1);

        line_14 = new QFrame(gridGroupBox);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_14, 5, 1, 1, 1);

        dial4DOF = new QDial(gridGroupBox);
        dial4DOF->setObjectName(QStringLiteral("dial4DOF"));
        dial4DOF->setNotchesVisible(true);

        gridLayout_2->addWidget(dial4DOF, 6, 1, 1, 1);

        dial3DOF = new QDial(gridGroupBox);
        dial3DOF->setObjectName(QStringLiteral("dial3DOF"));
        dial3DOF->setNotchesVisible(true);

        gridLayout_2->addWidget(dial3DOF, 4, 1, 1, 1);

        label_13 = new QLabel(gridGroupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMaximumSize(QSize(16, 16));
        label_13->setFont(font2);

        gridLayout_2->addWidget(label_13, 2, 0, 1, 1);

        dial2DOF = new QDial(gridGroupBox);
        dial2DOF->setObjectName(QStringLiteral("dial2DOF"));
        dial2DOF->setNotchesVisible(true);

        gridLayout_2->addWidget(dial2DOF, 2, 1, 1, 1);

        toolBox = new QToolBox(tab_2);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(10, 200, 541, 131));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 541, 75));
        gridGroupBox_3 = new QGroupBox(page);
        gridGroupBox_3->setObjectName(QStringLiteral("gridGroupBox_3"));
        gridGroupBox_3->setGeometry(QRect(30, 0, 501, 61));
        gridLayout_3 = new QGridLayout(gridGroupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        checkBox2DOFI = new QCheckBox(gridGroupBox_3);
        checkBox2DOFI->setObjectName(QStringLiteral("checkBox2DOFI"));

        gridLayout_3->addWidget(checkBox2DOFI, 0, 0, 1, 1);

        checkBox3DOFI = new QCheckBox(gridGroupBox_3);
        checkBox3DOFI->setObjectName(QStringLiteral("checkBox3DOFI"));

        gridLayout_3->addWidget(checkBox3DOFI, 0, 1, 1, 1);

        checkBox4DOFI = new QCheckBox(gridGroupBox_3);
        checkBox4DOFI->setObjectName(QStringLiteral("checkBox4DOFI"));

        gridLayout_3->addWidget(checkBox4DOFI, 0, 2, 1, 1);

        checkBox5DOFI = new QCheckBox(gridGroupBox_3);
        checkBox5DOFI->setObjectName(QStringLiteral("checkBox5DOFI"));

        gridLayout_3->addWidget(checkBox5DOFI, 0, 3, 1, 1);

        checkBox6DOFI = new QCheckBox(gridGroupBox_3);
        checkBox6DOFI->setObjectName(QStringLiteral("checkBox6DOFI"));

        gridLayout_3->addWidget(checkBox6DOFI, 0, 4, 1, 1);

        toolBox->addItem(page, QStringLiteral("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 541, 75));
        gridGroupBox_2 = new QGroupBox(page_2);
        gridGroupBox_2->setObjectName(QStringLiteral("gridGroupBox_2"));
        gridGroupBox_2->setGeometry(QRect(20, 0, 511, 71));
        gridLayout_4 = new QGridLayout(gridGroupBox_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        checkBox3DOFs = new QCheckBox(gridGroupBox_2);
        checkBox3DOFs->setObjectName(QStringLiteral("checkBox3DOFs"));

        gridLayout_4->addWidget(checkBox3DOFs, 1, 1, 1, 1);

        checkBox4DOFs = new QCheckBox(gridGroupBox_2);
        checkBox4DOFs->setObjectName(QStringLiteral("checkBox4DOFs"));

        gridLayout_4->addWidget(checkBox4DOFs, 1, 2, 1, 1);

        checkBox5DOFs = new QCheckBox(gridGroupBox_2);
        checkBox5DOFs->setObjectName(QStringLiteral("checkBox5DOFs"));

        gridLayout_4->addWidget(checkBox5DOFs, 1, 3, 1, 1);

        checkBox6DOFs = new QCheckBox(gridGroupBox_2);
        checkBox6DOFs->setObjectName(QStringLiteral("checkBox6DOFs"));

        gridLayout_4->addWidget(checkBox6DOFs, 1, 4, 1, 1);

        checkBox2DOFs = new QCheckBox(gridGroupBox_2);
        checkBox2DOFs->setObjectName(QStringLiteral("checkBox2DOFs"));

        gridLayout_4->addWidget(checkBox2DOFs, 1, 0, 1, 1);

        toolBox->addItem(page_2, QStringLiteral("Page 2"));
        gridGroupBox2 = new QGroupBox(tab_2);
        gridGroupBox2->setObjectName(QStringLiteral("gridGroupBox2"));
        gridGroupBox2->setGeometry(QRect(390, 440, 160, 161));
        gridLayout_5 = new QGridLayout(gridGroupBox2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        lineEdit = new QLineEdit(gridGroupBox2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_5->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_3 = new QLineEdit(gridGroupBox2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_5->addWidget(lineEdit_3, 2, 1, 1, 1);

        lineEdit_2 = new QLineEdit(gridGroupBox2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_5->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_5 = new QLabel(gridGroupBox2);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        label_5->setFont(font3);

        gridLayout_5->addWidget(label_5, 0, 0, 1, 1);

        label_10 = new QLabel(gridGroupBox2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font3);

        gridLayout_5->addWidget(label_10, 1, 0, 1, 1);

        label_11 = new QLabel(gridGroupBox2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font3);

        gridLayout_5->addWidget(label_11, 2, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 10, 361, 16));
        label_8->setFont(font1);
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 30, 531, 181));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_9->setFont(font4);
        label_9->setWordWrap(true);
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 210, 391, 41));
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 280, 501, 431));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        xSlider = new QSlider(groupBox);
        xSlider->setObjectName(QStringLiteral("xSlider"));
        xSlider->setMinimum(-100);
        xSlider->setMaximum(100);
        xSlider->setSingleStep(10);
        xSlider->setOrientation(Qt::Horizontal);
        xSlider->setTickPosition(QSlider::TicksAbove);
        xSlider->setTickInterval(5);

        gridLayout->addWidget(xSlider, 1, 1, 1, 1);

        xBox = new QDoubleSpinBox(groupBox);
        xBox->setObjectName(QStringLiteral("xBox"));
        xBox->setMinimumSize(QSize(80, 0));
        xBox->setDecimals(2);
        xBox->setMinimum(-100);
        xBox->setMaximum(100);
        xBox->setSingleStep(1);

        gridLayout->addWidget(xBox, 1, 2, 1, 1);

        rollSlider = new QSlider(groupBox);
        rollSlider->setObjectName(QStringLiteral("rollSlider"));
        rollSlider->setMinimum(-180);
        rollSlider->setMaximum(180);
        rollSlider->setSingleStep(5);
        rollSlider->setPageStep(5);
        rollSlider->setOrientation(Qt::Horizontal);
        rollSlider->setTickPosition(QSlider::TicksAbove);
        rollSlider->setTickInterval(5);

        gridLayout->addWidget(rollSlider, 6, 1, 1, 1);

        pitchBox = new QDoubleSpinBox(groupBox);
        pitchBox->setObjectName(QStringLiteral("pitchBox"));
        pitchBox->setMinimumSize(QSize(80, 0));
        pitchBox->setDecimals(2);
        pitchBox->setMinimum(-180);
        pitchBox->setMaximum(180);
        pitchBox->setSingleStep(1);

        gridLayout->addWidget(pitchBox, 5, 2, 1, 1);

        yBox = new QDoubleSpinBox(groupBox);
        yBox->setObjectName(QStringLiteral("yBox"));
        yBox->setMinimumSize(QSize(80, 0));
        yBox->setDecimals(2);
        yBox->setMinimum(-100);
        yBox->setMaximum(100);
        yBox->setSingleStep(1);

        gridLayout->addWidget(yBox, 2, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        ySlider = new QSlider(groupBox);
        ySlider->setObjectName(QStringLiteral("ySlider"));
        ySlider->setMinimum(-100);
        ySlider->setMaximum(100);
        ySlider->setSingleStep(10);
        ySlider->setOrientation(Qt::Horizontal);
        ySlider->setTickPosition(QSlider::TicksAbove);
        ySlider->setTickInterval(5);

        gridLayout->addWidget(ySlider, 2, 1, 1, 1);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout->addWidget(label_18, 6, 0, 1, 1);

        zBox = new QDoubleSpinBox(groupBox);
        zBox->setObjectName(QStringLiteral("zBox"));
        zBox->setMinimumSize(QSize(80, 0));
        zBox->setDecimals(2);
        zBox->setMinimum(-100);
        zBox->setMaximum(100);
        zBox->setSingleStep(1);

        gridLayout->addWidget(zBox, 3, 2, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout->addWidget(label_16, 4, 0, 1, 1);

        yawSlider = new QSlider(groupBox);
        yawSlider->setObjectName(QStringLiteral("yawSlider"));
        yawSlider->setMinimum(-180);
        yawSlider->setMaximum(180);
        yawSlider->setSingleStep(5);
        yawSlider->setPageStep(5);
        yawSlider->setOrientation(Qt::Horizontal);
        yawSlider->setTickPosition(QSlider::TicksAbove);
        yawSlider->setTickInterval(5);

        gridLayout->addWidget(yawSlider, 4, 1, 1, 1);

        pitchSlider = new QSlider(groupBox);
        pitchSlider->setObjectName(QStringLiteral("pitchSlider"));
        pitchSlider->setMinimum(-180);
        pitchSlider->setMaximum(180);
        pitchSlider->setSingleStep(5);
        pitchSlider->setPageStep(5);
        pitchSlider->setOrientation(Qt::Horizontal);
        pitchSlider->setTickPosition(QSlider::TicksAbove);
        pitchSlider->setTickInterval(5);

        gridLayout->addWidget(pitchSlider, 5, 1, 1, 1);

        rollBox = new QDoubleSpinBox(groupBox);
        rollBox->setObjectName(QStringLiteral("rollBox"));
        rollBox->setMinimumSize(QSize(80, 0));
        rollBox->setDecimals(2);
        rollBox->setMinimum(-180);
        rollBox->setMaximum(180);
        rollBox->setSingleStep(1);

        gridLayout->addWidget(rollBox, 6, 2, 1, 1);

        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout->addWidget(label_19, 3, 0, 1, 1);

        zSlider = new QSlider(groupBox);
        zSlider->setObjectName(QStringLiteral("zSlider"));
        zSlider->setMinimum(-100);
        zSlider->setMaximum(100);
        zSlider->setSingleStep(10);
        zSlider->setOrientation(Qt::Horizontal);
        zSlider->setInvertedAppearance(false);
        zSlider->setTickPosition(QSlider::TicksAbove);
        zSlider->setTickInterval(5);

        gridLayout->addWidget(zSlider, 3, 1, 1, 1);

        yawBox = new QDoubleSpinBox(groupBox);
        yawBox->setObjectName(QStringLiteral("yawBox"));
        yawBox->setMinimumSize(QSize(80, 0));
        yawBox->setDecimals(2);
        yawBox->setMinimum(-1.8e+8);
        yawBox->setMaximum(180);
        yawBox->setSingleStep(1);

        gridLayout->addWidget(yawBox, 4, 2, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout->addWidget(label_17, 5, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 0, 2, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableWidget = new QTableWidget(tab_4);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem10);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 100, 441, 281));
        pushButton_4 = new QPushButton(tab_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(60, 40, 391, 41));
        tabWidget->addTab(tab_4, QString());
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(940, 70, 361, 16));
        QFont font5;
        font5.setFamily(QStringLiteral("Abyssinica SIL"));
        font5.setPointSize(15);
        label_15->setFont(font5);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-3, 40, 1600, 41));
        QFont font6;
        font6.setFamily(QStringLiteral("Abyssinica SIL"));
        font6.setPointSize(16);
        line->setFont(font6);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(590, 60, 16, 881));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(600, 85, 801, 21));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(191, 21, 1009, 39));
        QFont font7;
        font7.setFamily(QStringLiteral("Arial Black"));
        font7.setPointSize(14);
        font7.setBold(true);
        font7.setWeight(75);
        label->setFont(font7);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setGeometry(QRect(610, 100, 781, 731));
        ROSGUI->setCentralWidget(centralWidget);
        label->raise();
        mdiArea->raise();
        tabWidget->raise();
        label_15->raise();
        line->raise();
        line_2->raise();
        line_3->raise();
        menuBar = new QMenuBar(ROSGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1400, 19));
        menuFILE = new QMenu(menuBar);
        menuFILE->setObjectName(QStringLiteral("menuFILE"));
        ROSGUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ROSGUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ROSGUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ROSGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ROSGUI->setStatusBar(statusBar);

        menuBar->addAction(menuFILE->menuAction());
        menuFILE->addAction(actionOpen);
        menuFILE->addAction(actionSave);
        menuFILE->addAction(actionSave_as);
        menuFILE->addAction(actionExit);

        retranslateUi(ROSGUI);
        QObject::connect(checkBox2DOFI, SIGNAL(toggled(bool)), checkBox3DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox2DOFI, SIGNAL(toggled(bool)), checkBox4DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox2DOFI, SIGNAL(toggled(bool)), checkBox5DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox2DOFI, SIGNAL(toggled(bool)), checkBox6DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox2DOFI, SIGNAL(toggled(bool)), gridGroupBox_2, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFI, SIGNAL(toggled(bool)), gridGroupBox_2, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFI, SIGNAL(toggled(bool)), gridGroupBox_2, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFI, SIGNAL(toggled(bool)), gridGroupBox_2, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFI, SIGNAL(toggled(bool)), gridGroupBox_2, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFI, SIGNAL(toggled(bool)), checkBox2DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFI, SIGNAL(toggled(bool)), checkBox4DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFI, SIGNAL(toggled(bool)), checkBox5DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFI, SIGNAL(toggled(bool)), checkBox6DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFI, SIGNAL(toggled(bool)), checkBox2DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFI, SIGNAL(toggled(bool)), checkBox3DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFI, SIGNAL(toggled(bool)), checkBox5DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFI, SIGNAL(toggled(bool)), checkBox6DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFI, SIGNAL(toggled(bool)), checkBox4DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFI, SIGNAL(toggled(bool)), checkBox6DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFI, SIGNAL(toggled(bool)), checkBox3DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFI, SIGNAL(toggled(bool)), checkBox2DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFI, SIGNAL(toggled(bool)), checkBox5DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFI, SIGNAL(toggled(bool)), checkBox4DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFI, SIGNAL(toggled(bool)), checkBox3DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFI, SIGNAL(toggled(bool)), checkBox2DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox2DOFs, SIGNAL(toggled(bool)), gridGroupBox_3, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFs, SIGNAL(toggled(bool)), gridGroupBox_3, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFs, SIGNAL(toggled(bool)), gridGroupBox_3, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFs, SIGNAL(toggled(bool)), gridGroupBox_3, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFs, SIGNAL(toggled(bool)), gridGroupBox_3, SLOT(setDisabled(bool)));
        QObject::connect(checkBox2DOFs, SIGNAL(toggled(bool)), checkBox3DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox2DOFs, SIGNAL(toggled(bool)), checkBox4DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox2DOFs, SIGNAL(toggled(bool)), checkBox5DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox2DOFs, SIGNAL(toggled(bool)), checkBox6DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFs, SIGNAL(toggled(bool)), checkBox2DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFs, SIGNAL(toggled(bool)), checkBox4DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFs, SIGNAL(toggled(bool)), checkBox5DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFs, SIGNAL(toggled(bool)), checkBox6DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFs, SIGNAL(toggled(bool)), checkBox3DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFs, SIGNAL(toggled(bool)), checkBox2DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFs, SIGNAL(toggled(bool)), checkBox5DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFs, SIGNAL(toggled(bool)), checkBox6DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFs, SIGNAL(toggled(bool)), checkBox4DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFs, SIGNAL(toggled(bool)), checkBox6DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFs, SIGNAL(toggled(bool)), checkBox3DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFs, SIGNAL(toggled(bool)), checkBox2DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFs, SIGNAL(toggled(bool)), checkBox5DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFs, SIGNAL(toggled(bool)), checkBox4DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFs, SIGNAL(toggled(bool)), checkBox3DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFs, SIGNAL(toggled(bool)), checkBox2DOFs, SLOT(setDisabled(bool)));

        tabWidget->setCurrentIndex(1);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ROSGUI);
    } // setupUi

    void retranslateUi(QMainWindow *ROSGUI)
    {
        ROSGUI->setWindowTitle(QApplication::translate("ROSGUI", "ROSGUI", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("ROSGUI", "Open", Q_NULLPTR));
        actionOpen->setShortcut(QApplication::translate("ROSGUI", "Ctrl+O", Q_NULLPTR));
        actionSave->setText(QApplication::translate("ROSGUI", "Save", Q_NULLPTR));
        actionSave->setShortcut(QApplication::translate("ROSGUI", "Ctrl+S", Q_NULLPTR));
        actionSave_as->setText(QApplication::translate("ROSGUI", "Save as", Q_NULLPTR));
        actionExit->setText(QApplication::translate("ROSGUI", "Exit", Q_NULLPTR));
        actionExit->setShortcut(QApplication::translate("ROSGUI", "Ctrl+E", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ROSGUI", "PushButton", Q_NULLPTR));
        label_3->setText(QString());
        label_6->setText(QApplication::translate("ROSGUI", "La cinem\303\241tica es la ciencia que trata el movimiento sin considerar las fuerzas que lo ocasionan. Dentro de la cinem\303\241tica se estudian la posici\303\263n, velocidad, aceleraci\303\263n y todas las derivadas de mayor orden de las variables de posici\303\263n. ", Q_NULLPTR));
        label_7->setText(QApplication::translate("ROSGUI", "Cinematica Directa", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ROSGUI", "+TEORIA", Q_NULLPTR));
        gridGroupBox->setTitle(QApplication::translate("ROSGUI", "DOF", Q_NULLPTR));
        label_12->setText(QApplication::translate("ROSGUI", "1", Q_NULLPTR));
        label_14->setText(QApplication::translate("ROSGUI", "3", Q_NULLPTR));
        label_20->setText(QApplication::translate("ROSGUI", "4", Q_NULLPTR));
        label_22->setText(QApplication::translate("ROSGUI", "6", Q_NULLPTR));
        label_21->setText(QApplication::translate("ROSGUI", "5", Q_NULLPTR));
        label_13->setText(QApplication::translate("ROSGUI", "2", Q_NULLPTR));
        gridGroupBox_3->setTitle(QApplication::translate("ROSGUI", "ROBOTS INDUSTRIALES", Q_NULLPTR));
        checkBox2DOFI->setText(QApplication::translate("ROSGUI", "2DOF", Q_NULLPTR));
        checkBox3DOFI->setText(QApplication::translate("ROSGUI", "3DOF", Q_NULLPTR));
        checkBox4DOFI->setText(QApplication::translate("ROSGUI", "4DOF", Q_NULLPTR));
        checkBox5DOFI->setText(QApplication::translate("ROSGUI", "5DOF", Q_NULLPTR));
        checkBox6DOFI->setText(QApplication::translate("ROSGUI", "ABB IRB120", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("ROSGUI", "Page 1", Q_NULLPTR));
        gridGroupBox_2->setTitle(QApplication::translate("ROSGUI", "SIMPLE ROBOT", Q_NULLPTR));
        checkBox3DOFs->setText(QApplication::translate("ROSGUI", "3DOF", Q_NULLPTR));
        checkBox4DOFs->setText(QApplication::translate("ROSGUI", "4DOF", Q_NULLPTR));
        checkBox5DOFs->setText(QApplication::translate("ROSGUI", "5DOF", Q_NULLPTR));
        checkBox6DOFs->setText(QApplication::translate("ROSGUI", "6DOF", Q_NULLPTR));
        checkBox2DOFs->setText(QApplication::translate("ROSGUI", "2DOF", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("ROSGUI", "Page 2", Q_NULLPTR));
        label_5->setText(QApplication::translate("ROSGUI", "X", Q_NULLPTR));
        label_10->setText(QApplication::translate("ROSGUI", "Y", Q_NULLPTR));
        label_11->setText(QApplication::translate("ROSGUI", "Z", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ROSGUI", "CINEMATICA DIRECTA", Q_NULLPTR));
        label_8->setText(QApplication::translate("ROSGUI", "Cinematica Inversa", Q_NULLPTR));
        label_9->setText(QApplication::translate("ROSGUI", "El problema se plantea de la siguiente manera: dada la posici\303\263n y orientaci\303\263n del efector final del manipulador, se calcula todos los conjuntos posibles de \303\241ngulos articulares que podr\303\255an utilizarse para obtener esta posici\303\263n y orientaci\303\263n dadas. Este es un problema fundamental en el uso pr\303\241ctico de los manipuladores. ", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ROSGUI", "+TEORIA CI", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ROSGUI", "TCP", Q_NULLPTR));
        label_4->setText(QApplication::translate("ROSGUI", "Y", Q_NULLPTR));
        label_18->setText(QApplication::translate("ROSGUI", "Roll", Q_NULLPTR));
        label_16->setText(QApplication::translate("ROSGUI", "Yaw", Q_NULLPTR));
        label_19->setText(QApplication::translate("ROSGUI", "Z", Q_NULLPTR));
        label_17->setText(QApplication::translate("ROSGUI", "Pitch", Q_NULLPTR));
        label_2->setText(QApplication::translate("ROSGUI", "X", Q_NULLPTR));
        checkBox->setText(QApplication::translate("ROSGUI", "EJECUTAR", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ROSGUI", "CINEMATICA INVERSA", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ROSGUI", "LINK", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ROSGUI", "ai", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ROSGUI", "a1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ROSGUI", "alpha i", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ROSGUI", "theta i", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("ROSGUI", "New Row", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("ROSGUI", "joint1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("ROSGUI", "joint2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("ROSGUI", "joint3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("ROSGUI", "joint4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("ROSGUI", "joint6", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("ROSGUI", "+TEORIA", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ROSGUI", "DENAVITH HATEMEBERG", Q_NULLPTR));
        label_15->setText(QApplication::translate("ROSGUI", "RVIZ", Q_NULLPTR));
        label->setText(QApplication::translate("ROSGUI", "LABORATORIO VIRTUAL ROB\303\223TICA B\303\201SICA", Q_NULLPTR));
        menuFILE->setTitle(QApplication::translate("ROSGUI", "FILE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ROSGUI: public Ui_ROSGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROSGUI_H
