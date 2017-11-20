/********************************************************************************
** Form generated from reading UI file 'rosgui.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QHBoxLayout>
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
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_9;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QLabel *label_3;
    QWidget *tab_2;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_11;
    QPushButton *pushButton_3;
    QLabel *label_6;
    QLabel *label_7;
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
    QGridLayout *gridLayout_8;
    QGroupBox *gridGroupBox_2;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBox3DOFs;
    QCheckBox *checkBox4DOFs;
    QCheckBox *checkBox5DOFs;
    QCheckBox *checkBox6DOFs;
    QCheckBox *checkBox2DOFs;
    QGridLayout *gridLayout_12;
    QGroupBox *gridGroupBox;
    QGridLayout *gridLayout_5;
    QDoubleSpinBox *spinBox4DOF;
    QFrame *line_6;
    QFrame *line_8;
    QDoubleSpinBox *spinBox6DOF;
    QDial *dial2DOF;
    QFrame *line_7;
    QFrame *line_19;
    QLabel *label_21;
    QLabel *label_13;
    QFrame *line_13;
    QLabel *label_22;
    QDoubleSpinBox *spinBox3DOF;
    QFrame *line_17;
    QDoubleSpinBox *spinBox2DOF;
    QFrame *line_11;
    QDial *dial1DOF;
    QLabel *label_20;
    QFrame *line_5;
    QFrame *line_14;
    QDoubleSpinBox *spinBox1DOF;
    QFrame *line_10;
    QLabel *label_14;
    QDial *dial4DOF;
    QFrame *line_16;
    QDial *dial6DOF;
    QFrame *line_9;
    QLabel *label_12;
    QFrame *line_18;
    QFrame *line_12;
    QDial *dial3DOF;
    QDial *dial5DOF;
    QFrame *line_4;
    QDoubleSpinBox *spinBox5DOF;
    QFrame *line_15;
    QGroupBox *gridGroupBox2;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QLabel *label_10;
    QWidget *tab_3;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
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
    QGridLayout *gridLayout_7;
    QPushButton *pushButton_4;
    QTableWidget *tableWidget;
    QFrame *line;
    QMdiArea *mdiArea;
    QFrame *line_3;
    QLabel *label;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout;
    QFrame *line_2;
    QMenuBar *menuBar;
    QMenu *menuFILE;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ROSGUI)
    {
        if (ROSGUI->objectName().isEmpty())
            ROSGUI->setObjectName(QStringLiteral("ROSGUI"));
        ROSGUI->resize(1468, 932);
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
        gridLayout_10 = new QGridLayout(centralWidget);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
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
        gridLayout_13 = new QGridLayout(tab_2);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_11->addWidget(pushButton_3, 2, 0, 1, 1);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setTextFormat(Qt::RichText);
        label_6->setWordWrap(true);

        gridLayout_11->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);

        gridLayout_11->addWidget(label_7, 0, 0, 1, 1);

        toolBox = new QToolBox(tab_2);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 429, 80));
        gridGroupBox_3 = new QGroupBox(page);
        gridGroupBox_3->setObjectName(QStringLiteral("gridGroupBox_3"));
        gridGroupBox_3->setGeometry(QRect(9, 9, 505, 61));
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
        page_2->setGeometry(QRect(0, 0, 419, 79));
        gridLayout_8 = new QGridLayout(page_2);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridGroupBox_2 = new QGroupBox(page_2);
        gridGroupBox_2->setObjectName(QStringLiteral("gridGroupBox_2"));
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


        gridLayout_8->addWidget(gridGroupBox_2, 0, 0, 1, 1);

        toolBox->addItem(page_2, QStringLiteral("Page 2"));

        gridLayout_11->addWidget(toolBox, 3, 0, 1, 1);


        gridLayout_13->addLayout(gridLayout_11, 0, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridGroupBox = new QGroupBox(tab_2);
        gridGroupBox->setObjectName(QStringLiteral("gridGroupBox"));
        gridLayout_5 = new QGridLayout(gridGroupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        spinBox4DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox4DOF->setObjectName(QStringLiteral("spinBox4DOF"));
        spinBox4DOF->setMinimum(-180);
        spinBox4DOF->setMaximum(180);

        gridLayout_5->addWidget(spinBox4DOF, 11, 3, 1, 1);

        line_6 = new QFrame(gridGroupBox);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_6, 10, 2, 2, 2);

        line_8 = new QFrame(gridGroupBox);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_8, 17, 2, 2, 1);

        spinBox6DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox6DOF->setObjectName(QStringLiteral("spinBox6DOF"));
        spinBox6DOF->setMinimum(-180);
        spinBox6DOF->setMaximum(180);

        gridLayout_5->addWidget(spinBox6DOF, 18, 3, 1, 1);

        dial2DOF = new QDial(gridGroupBox);
        dial2DOF->setObjectName(QStringLiteral("dial2DOF"));
        dial2DOF->setMinimum(-180);
        dial2DOF->setMaximum(180);
        dial2DOF->setNotchesVisible(true);

        gridLayout_5->addWidget(dial2DOF, 4, 1, 2, 1);

        line_7 = new QFrame(gridGroupBox);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_7, 13, 2, 2, 2);

        line_19 = new QFrame(gridGroupBox);
        line_19->setObjectName(QStringLiteral("line_19"));
        line_19->setFrameShape(QFrame::HLine);
        line_19->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_19, 16, 3, 1, 1);

        label_21 = new QLabel(gridGroupBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMaximumSize(QSize(16, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("FreeMono"));
        font2.setPointSize(14);
        label_21->setFont(font2);

        gridLayout_5->addWidget(label_21, 14, 0, 1, 1);

        label_13 = new QLabel(gridGroupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMaximumSize(QSize(16, 16));
        label_13->setFont(font2);

        gridLayout_5->addWidget(label_13, 5, 0, 1, 1);

        line_13 = new QFrame(gridGroupBox);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_13, 6, 3, 1, 1);

        label_22 = new QLabel(gridGroupBox);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMaximumSize(QSize(16, 16));
        label_22->setFont(font2);

        gridLayout_5->addWidget(label_22, 18, 0, 1, 1);

        spinBox3DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox3DOF->setObjectName(QStringLiteral("spinBox3DOF"));
        spinBox3DOF->setMinimum(-180);
        spinBox3DOF->setMaximum(180);

        gridLayout_5->addWidget(spinBox3DOF, 8, 3, 1, 1);

        line_17 = new QFrame(gridGroupBox);
        line_17->setObjectName(QStringLiteral("line_17"));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_17, 12, 3, 1, 1);

        spinBox2DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox2DOF->setObjectName(QStringLiteral("spinBox2DOF"));
        spinBox2DOF->setMinimum(-180);
        spinBox2DOF->setMaximum(180);

        gridLayout_5->addWidget(spinBox2DOF, 5, 3, 1, 1);

        line_11 = new QFrame(gridGroupBox);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_11, 3, 1, 1, 1);

        dial1DOF = new QDial(gridGroupBox);
        dial1DOF->setObjectName(QStringLiteral("dial1DOF"));
        dial1DOF->setMinimum(-180);
        dial1DOF->setMaximum(180);
        dial1DOF->setTracking(true);
        dial1DOF->setWrapping(false);
        dial1DOF->setNotchesVisible(true);

        gridLayout_5->addWidget(dial1DOF, 0, 1, 2, 1);

        label_20 = new QLabel(gridGroupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMaximumSize(QSize(16, 16));
        label_20->setFont(font2);

        gridLayout_5->addWidget(label_20, 11, 0, 1, 1);

        line_5 = new QFrame(gridGroupBox);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setMaximumSize(QSize(16777215, 16777215));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_5, 7, 2, 2, 2);

        line_14 = new QFrame(gridGroupBox);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_14, 9, 1, 1, 1);

        spinBox1DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox1DOF->setObjectName(QStringLiteral("spinBox1DOF"));
        spinBox1DOF->setMinimum(-180);
        spinBox1DOF->setMaximum(180);

        gridLayout_5->addWidget(spinBox1DOF, 1, 3, 1, 1);

        line_10 = new QFrame(gridGroupBox);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_10, 0, 2, 2, 2);

        label_14 = new QLabel(gridGroupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMaximumSize(QSize(16, 16));
        label_14->setFont(font2);

        gridLayout_5->addWidget(label_14, 8, 0, 1, 1);

        dial4DOF = new QDial(gridGroupBox);
        dial4DOF->setObjectName(QStringLiteral("dial4DOF"));
        dial4DOF->setMinimum(-180);
        dial4DOF->setNotchesVisible(true);

        gridLayout_5->addWidget(dial4DOF, 10, 1, 2, 1);

        line_16 = new QFrame(gridGroupBox);
        line_16->setObjectName(QStringLiteral("line_16"));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_16, 12, 1, 1, 1);

        dial6DOF = new QDial(gridGroupBox);
        dial6DOF->setObjectName(QStringLiteral("dial6DOF"));
        dial6DOF->setMinimum(-180);
        dial6DOF->setMaximum(180);
        dial6DOF->setNotchTarget(3.7);
        dial6DOF->setNotchesVisible(true);

        gridLayout_5->addWidget(dial6DOF, 17, 1, 2, 1);

        line_9 = new QFrame(gridGroupBox);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_9, 4, 2, 2, 1);

        label_12 = new QLabel(gridGroupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(16, 16));
        label_12->setFont(font2);

        gridLayout_5->addWidget(label_12, 1, 0, 1, 1);

        line_18 = new QFrame(gridGroupBox);
        line_18->setObjectName(QStringLiteral("line_18"));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_18, 16, 1, 1, 1);

        line_12 = new QFrame(gridGroupBox);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_12, 6, 1, 1, 1);

        dial3DOF = new QDial(gridGroupBox);
        dial3DOF->setObjectName(QStringLiteral("dial3DOF"));
        dial3DOF->setMinimum(-180);
        dial3DOF->setMaximum(180);
        dial3DOF->setNotchesVisible(true);

        gridLayout_5->addWidget(dial3DOF, 7, 1, 2, 1);

        dial5DOF = new QDial(gridGroupBox);
        dial5DOF->setObjectName(QStringLiteral("dial5DOF"));
        dial5DOF->setMinimum(-180);
        dial5DOF->setMaximum(180);
        dial5DOF->setNotchesVisible(true);

        gridLayout_5->addWidget(dial5DOF, 13, 1, 2, 1);

        line_4 = new QFrame(gridGroupBox);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_4, 3, 3, 1, 1);

        spinBox5DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox5DOF->setObjectName(QStringLiteral("spinBox5DOF"));
        spinBox5DOF->setMinimum(-180);
        spinBox5DOF->setMaximum(180);

        gridLayout_5->addWidget(spinBox5DOF, 14, 3, 1, 1);

        line_15 = new QFrame(gridGroupBox);
        line_15->setObjectName(QStringLiteral("line_15"));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_15, 9, 3, 1, 1);


        gridLayout_12->addWidget(gridGroupBox, 1, 0, 1, 1);

        gridGroupBox2 = new QGroupBox(tab_2);
        gridGroupBox2->setObjectName(QStringLiteral("gridGroupBox2"));
        gridLayout_2 = new QGridLayout(gridGroupBox2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_11 = new QLabel(gridGroupBox2);
        label_11->setObjectName(QStringLiteral("label_11"));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        label_11->setFont(font3);

        gridLayout_2->addWidget(label_11, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridGroupBox2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 1, 1, 1, 1);

        lineEdit_3 = new QLineEdit(gridGroupBox2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_2->addWidget(lineEdit_3, 2, 1, 1, 1);

        lineEdit = new QLineEdit(gridGroupBox2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        label_5 = new QLabel(gridGroupBox2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font3);

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        label_10 = new QLabel(gridGroupBox2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font3);

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);


        gridLayout_12->addWidget(gridGroupBox2, 1, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        label_6->raise();
        label_7->raise();
        pushButton_3->raise();
        gridGroupBox->raise();
        toolBox->raise();
        gridGroupBox2->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout = new QGridLayout(tab_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_9->setFont(font4);
        label_9->setWordWrap(true);

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);

        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        xSlider = new QSlider(groupBox);
        xSlider->setObjectName(QStringLiteral("xSlider"));
        xSlider->setGeometry(QRect(48, 56, 84, 20));
        xSlider->setMinimum(-100);
        xSlider->setMaximum(100);
        xSlider->setSingleStep(10);
        xSlider->setOrientation(Qt::Horizontal);
        xSlider->setTickPosition(QSlider::TicksAbove);
        xSlider->setTickInterval(5);
        xBox = new QDoubleSpinBox(groupBox);
        xBox->setObjectName(QStringLiteral("xBox"));
        xBox->setGeometry(QRect(138, 55, 80, 23));
        xBox->setMinimumSize(QSize(80, 0));
        xBox->setDecimals(2);
        xBox->setMinimum(-100);
        xBox->setMaximum(100);
        xBox->setSingleStep(1);
        rollSlider = new QSlider(groupBox);
        rollSlider->setObjectName(QStringLiteral("rollSlider"));
        rollSlider->setGeometry(QRect(48, 201, 84, 20));
        rollSlider->setMinimum(-180);
        rollSlider->setMaximum(180);
        rollSlider->setSingleStep(5);
        rollSlider->setPageStep(5);
        rollSlider->setOrientation(Qt::Horizontal);
        rollSlider->setTickPosition(QSlider::TicksAbove);
        rollSlider->setTickInterval(5);
        pitchBox = new QDoubleSpinBox(groupBox);
        pitchBox->setObjectName(QStringLiteral("pitchBox"));
        pitchBox->setGeometry(QRect(138, 171, 80, 23));
        pitchBox->setMinimumSize(QSize(80, 0));
        pitchBox->setDecimals(2);
        pitchBox->setMinimum(-180);
        pitchBox->setMaximum(180);
        pitchBox->setSingleStep(1);
        yBox = new QDoubleSpinBox(groupBox);
        yBox->setObjectName(QStringLiteral("yBox"));
        yBox->setGeometry(QRect(138, 84, 80, 23));
        yBox->setMinimumSize(QSize(80, 0));
        yBox->setDecimals(2);
        yBox->setMinimum(-100);
        yBox->setMaximum(100);
        yBox->setSingleStep(1);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(12, 84, 16, 16));
        ySlider = new QSlider(groupBox);
        ySlider->setObjectName(QStringLiteral("ySlider"));
        ySlider->setGeometry(QRect(48, 85, 84, 20));
        ySlider->setMinimum(-100);
        ySlider->setMaximum(100);
        ySlider->setSingleStep(10);
        ySlider->setOrientation(Qt::Horizontal);
        ySlider->setTickPosition(QSlider::TicksAbove);
        ySlider->setTickInterval(5);
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(12, 200, 23, 16));
        zBox = new QDoubleSpinBox(groupBox);
        zBox->setObjectName(QStringLiteral("zBox"));
        zBox->setGeometry(QRect(138, 113, 80, 23));
        zBox->setMinimumSize(QSize(80, 0));
        zBox->setDecimals(2);
        zBox->setMinimum(-100);
        zBox->setMaximum(100);
        zBox->setSingleStep(1);
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(12, 142, 25, 16));
        yawSlider = new QSlider(groupBox);
        yawSlider->setObjectName(QStringLiteral("yawSlider"));
        yawSlider->setGeometry(QRect(48, 143, 84, 20));
        yawSlider->setMinimum(-180);
        yawSlider->setMaximum(180);
        yawSlider->setSingleStep(5);
        yawSlider->setPageStep(5);
        yawSlider->setOrientation(Qt::Horizontal);
        yawSlider->setTickPosition(QSlider::TicksAbove);
        yawSlider->setTickInterval(5);
        pitchSlider = new QSlider(groupBox);
        pitchSlider->setObjectName(QStringLiteral("pitchSlider"));
        pitchSlider->setGeometry(QRect(48, 172, 84, 20));
        pitchSlider->setMinimum(-180);
        pitchSlider->setMaximum(180);
        pitchSlider->setSingleStep(5);
        pitchSlider->setPageStep(5);
        pitchSlider->setOrientation(Qt::Horizontal);
        pitchSlider->setTickPosition(QSlider::TicksAbove);
        pitchSlider->setTickInterval(5);
        rollBox = new QDoubleSpinBox(groupBox);
        rollBox->setObjectName(QStringLiteral("rollBox"));
        rollBox->setGeometry(QRect(138, 200, 80, 23));
        rollBox->setMinimumSize(QSize(80, 0));
        rollBox->setDecimals(2);
        rollBox->setMinimum(-180);
        rollBox->setMaximum(180);
        rollBox->setSingleStep(1);
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(12, 113, 16, 16));
        zSlider = new QSlider(groupBox);
        zSlider->setObjectName(QStringLiteral("zSlider"));
        zSlider->setGeometry(QRect(48, 114, 84, 20));
        zSlider->setMinimum(-100);
        zSlider->setMaximum(100);
        zSlider->setSingleStep(10);
        zSlider->setOrientation(Qt::Horizontal);
        zSlider->setInvertedAppearance(false);
        zSlider->setTickPosition(QSlider::TicksAbove);
        zSlider->setTickInterval(5);
        yawBox = new QDoubleSpinBox(groupBox);
        yawBox->setObjectName(QStringLiteral("yawBox"));
        yawBox->setGeometry(QRect(138, 142, 124, 23));
        yawBox->setMinimumSize(QSize(80, 0));
        yawBox->setDecimals(2);
        yawBox->setMinimum(-1.8e+08);
        yawBox->setMaximum(180);
        yawBox->setSingleStep(1);
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(12, 171, 30, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(12, 55, 16, 16));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(138, 29, 85, 20));

        gridLayout->addWidget(groupBox, 3, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_7 = new QGridLayout(tab_4);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        pushButton_4 = new QPushButton(tab_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_7->addWidget(pushButton_4, 0, 0, 1, 1);

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

        gridLayout_7->addWidget(tableWidget, 1, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());

        gridLayout_9->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_9, 9, 0, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        QFont font5;
        font5.setFamily(QStringLiteral("Abyssinica SIL"));
        font5.setPointSize(16);
        line->setFont(font5);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line, 1, 0, 1, 2);

        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));

        gridLayout_6->addWidget(mdiArea, 9, 1, 1, 1);

        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line_3, 8, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font6;
        font6.setFamily(QStringLiteral("Arial Black"));
        font6.setPointSize(14);
        font6.setBold(true);
        font6.setWeight(75);
        label->setFont(font6);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        gridLayout_6->addWidget(label, 0, 0, 1, 2);

        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        QFont font7;
        font7.setFamily(QStringLiteral("Abyssinica SIL"));
        font7.setPointSize(15);
        label_23->setFont(font7);

        gridLayout_6->addWidget(label_23, 2, 0, 1, 1);


        gridLayout_10->addLayout(gridLayout_6, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        gridLayout_10->addLayout(horizontalLayout, 1, 0, 1, 1);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_2, 1, 1, 1, 1);

        ROSGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ROSGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1468, 19));
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
        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ROSGUI);
    } // setupUi

    void retranslateUi(QMainWindow *ROSGUI)
    {
        ROSGUI->setWindowTitle(QApplication::translate("ROSGUI", "ROSGUI", 0));
        actionOpen->setText(QApplication::translate("ROSGUI", "Open", 0));
        actionOpen->setShortcut(QApplication::translate("ROSGUI", "Ctrl+O", 0));
        actionSave->setText(QApplication::translate("ROSGUI", "Save", 0));
        actionSave->setShortcut(QApplication::translate("ROSGUI", "Ctrl+S", 0));
        actionSave_as->setText(QApplication::translate("ROSGUI", "Save as", 0));
        actionExit->setText(QApplication::translate("ROSGUI", "Exit", 0));
        actionExit->setShortcut(QApplication::translate("ROSGUI", "Ctrl+E", 0));
        pushButton->setText(QApplication::translate("ROSGUI", "PushButton", 0));
        label_3->setText(QString());
        pushButton_3->setText(QApplication::translate("ROSGUI", "+TEORIA", 0));
        label_6->setText(QApplication::translate("ROSGUI", "La cinem\303\241tica es la ciencia que trata el movimiento sin considerar las fuerzas que lo ocasionan. Dentro de la cinem\303\241tica se estudian la posici\303\263n, velocidad, aceleraci\303\263n y todas las derivadas de mayor orden de las variables de posici\303\263n. ", 0));
        label_7->setText(QApplication::translate("ROSGUI", "Cinematica Directa", 0));
        gridGroupBox_3->setTitle(QApplication::translate("ROSGUI", "ROBOTS INDUSTRIALES", 0));
        checkBox2DOFI->setText(QApplication::translate("ROSGUI", "ABB IRB5400", 0));
        checkBox3DOFI->setText(QApplication::translate("ROSGUI", "MM BMDA3", 0));
        checkBox4DOFI->setText(QApplication::translate("ROSGUI", "KK KR210", 0));
        checkBox5DOFI->setText(QApplication::translate("ROSGUI", "MM MH5", 0));
        checkBox6DOFI->setText(QApplication::translate("ROSGUI", "ABB IRB120", 0));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("ROSGUI", "Page 1", 0));
        gridGroupBox_2->setTitle(QApplication::translate("ROSGUI", "SIMPLE ROBOT", 0));
        checkBox3DOFs->setText(QApplication::translate("ROSGUI", "3DOF", 0));
        checkBox4DOFs->setText(QApplication::translate("ROSGUI", "4DOF", 0));
        checkBox5DOFs->setText(QApplication::translate("ROSGUI", "5DOF", 0));
        checkBox6DOFs->setText(QApplication::translate("ROSGUI", "6DOF", 0));
        checkBox2DOFs->setText(QApplication::translate("ROSGUI", "2DOF", 0));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("ROSGUI", "Page 2", 0));
        gridGroupBox->setTitle(QApplication::translate("ROSGUI", "DOF", 0));
        label_21->setText(QApplication::translate("ROSGUI", "5", 0));
        label_13->setText(QApplication::translate("ROSGUI", "2", 0));
        label_22->setText(QApplication::translate("ROSGUI", "6", 0));
        label_20->setText(QApplication::translate("ROSGUI", "4", 0));
        label_14->setText(QApplication::translate("ROSGUI", "3", 0));
        label_12->setText(QApplication::translate("ROSGUI", "1", 0));
        label_11->setText(QApplication::translate("ROSGUI", "Z", 0));
        label_5->setText(QApplication::translate("ROSGUI", "X", 0));
        label_10->setText(QApplication::translate("ROSGUI", "Y", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ROSGUI", "CINEMATICA DIRECTA", 0));
        label_8->setText(QApplication::translate("ROSGUI", "Cinematica Inversa", 0));
        label_9->setText(QApplication::translate("ROSGUI", "El problema se plantea de la siguiente manera: dada la posici\303\263n y orientaci\303\263n del efector final del manipulador, se calcula todos los conjuntos posibles de \303\241ngulos articulares que podr\303\255an utilizarse para obtener esta posici\303\263n y orientaci\303\263n dadas. Este es un problema fundamental en el uso pr\303\241ctico de los manipuladores. ", 0));
        pushButton_2->setText(QApplication::translate("ROSGUI", "+TEORIA CI", 0));
        groupBox->setTitle(QApplication::translate("ROSGUI", "TCP", 0));
        label_4->setText(QApplication::translate("ROSGUI", "Y", 0));
        label_18->setText(QApplication::translate("ROSGUI", "Roll", 0));
        label_16->setText(QApplication::translate("ROSGUI", "Yaw", 0));
        label_19->setText(QApplication::translate("ROSGUI", "Z", 0));
        label_17->setText(QApplication::translate("ROSGUI", "Pitch", 0));
        label_2->setText(QApplication::translate("ROSGUI", "X", 0));
        checkBox->setText(QApplication::translate("ROSGUI", "EJECUTAR", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ROSGUI", "CINEMATICA INVERSA", 0));
        pushButton_4->setText(QApplication::translate("ROSGUI", "+TEORIA", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ROSGUI", "LINK", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ROSGUI", "ai", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ROSGUI", "a1", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ROSGUI", "alpha i", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ROSGUI", "theta i", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("ROSGUI", "New Row", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("ROSGUI", "joint1", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("ROSGUI", "joint2", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("ROSGUI", "joint3", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("ROSGUI", "joint4", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("ROSGUI", "joint6", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ROSGUI", "DENAVITH HATEMEBERG", 0));
        label->setText(QApplication::translate("ROSGUI", "LABORATORIO VIRTUAL ROB\303\223TICA B\303\201SICA", 0));
        label_23->setText(QApplication::translate("ROSGUI", "RVIZ", 0));
        menuFILE->setTitle(QApplication::translate("ROSGUI", "FILE", 0));
    } // retranslateUi

};

namespace Ui {
    class ROSGUI: public Ui_ROSGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROSGUI_H
