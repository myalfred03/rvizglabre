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
#include <QtWidgets/QComboBox>
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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ROSGUI
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionExit;
    QAction *actionTF_RVIZ;
    QWidget *centralWidget;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_18;
    QFrame *line_22;
    QHBoxLayout *horizontalLayout_5;
    QGridLayout *gridLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QLabel *label_3;
    QWidget *tab_2;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_12;
    QGroupBox *gridGroupBox2;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QGroupBox *gridGroupBox;
    QGridLayout *gridLayout_5;
    QFrame *line_6;
    QDoubleSpinBox *spinBox4DOF;
    QDial *dial4DOF;
    QDoubleSpinBox *spinBox3DOF;
    QFrame *line_5;
    QFrame *line_9;
    QLabel *label_13;
    QLabel *label_14;
    QFrame *line_7;
    QDial *dial2DOF;
    QLabel *label_21;
    QFrame *line_8;
    QDoubleSpinBox *spinBox5DOF;
    QFrame *line_15;
    QDial *dial6DOF;
    QDoubleSpinBox *spinBox2DOF;
    QFrame *line_10;
    QFrame *line_4;
    QLabel *label_12;
    QFrame *line_19;
    QDoubleSpinBox *spinBox1DOF;
    QDial *dial5DOF;
    QLabel *label_20;
    QFrame *line_18;
    QDial *dial3DOF;
    QFrame *line_17;
    QFrame *line_11;
    QFrame *line_14;
    QFrame *line_12;
    QLabel *label_22;
    QFrame *line_16;
    QFrame *line_13;
    QDial *dial1DOF;
    QDoubleSpinBox *spinBox6DOF;
    QGridLayout *gridLayout_11;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_3;
    QGridLayout *gridLayout_16;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_15;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_14;
    QCheckBox *checkBox;
    QLabel *label_2;
    QSlider *xSlider;
    QDoubleSpinBox *xBox;
    QLabel *label_4;
    QSlider *ySlider;
    QDoubleSpinBox *yBox;
    QLabel *label_19;
    QSlider *zSlider;
    QDoubleSpinBox *zBox;
    QLabel *label_16;
    QSlider *yawSlider;
    QDoubleSpinBox *yawBox;
    QLabel *label_17;
    QSlider *pitchSlider;
    QDoubleSpinBox *pitchBox;
    QLabel *label_18;
    QSlider *rollSlider;
    QDoubleSpinBox *rollBox;
    QWidget *tab_4;
    QGridLayout *gridLayout_7;
    QPushButton *pushButton_4;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget1;
    QWidget *tabWidgetPage1;
    QGridLayout *gridLayout_3;
    QGroupBox *gridGroupBox_3;
    QGridLayout *gridLayout_17;
    QCheckBox *checkBox4DOFI;
    QCheckBox *checkBox6DOFI;
    QCheckBox *checkBox3DOFI;
    QCheckBox *checkBox5DOFI;
    QCheckBox *checkBox2DOFI;
    QWidget *tabWidgetPage2;
    QGridLayout *gridLayout_8;
    QGroupBox *gridGroupBox_2;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBox5DOFs;
    QCheckBox *checkBox6DOFs;
    QCheckBox *checkBox4DOFs;
    QCheckBox *checkBox3DOFs;
    QCheckBox *checkBox2DOFs;
    QFrame *line_21;
    QVBoxLayout *verticalLayout_7;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox;
    QLabel *label_23;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QFrame *line_3;
    QGridLayout *gridLayout_10;
    QMdiArea *mdiArea;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuFILE;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ROSGUI)
    {
        if (ROSGUI->objectName().isEmpty())
            ROSGUI->setObjectName(QStringLiteral("ROSGUI"));
        ROSGUI->resize(1000, 844);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ROSGUI->sizePolicy().hasHeightForWidth());
        ROSGUI->setSizePolicy(sizePolicy);
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
        actionTF_RVIZ = new QAction(ROSGUI);
        actionTF_RVIZ->setObjectName(QStringLiteral("actionTF_RVIZ"));
        centralWidget = new QWidget(ROSGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_9 = new QGridLayout(centralWidget);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_18 = new QGridLayout();
        gridLayout_18->setSpacing(6);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        line_22 = new QFrame(centralWidget);
        line_22->setObjectName(QStringLiteral("line_22"));
        line_22->setFrameShape(QFrame::HLine);
        line_22->setFrameShadow(QFrame::Sunken);

        gridLayout_18->addWidget(line_22, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMaximumSize(QSize(16777215, 600));
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
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridGroupBox2 = new QGroupBox(tab_2);
        gridGroupBox2->setObjectName(QStringLiteral("gridGroupBox2"));
        gridLayout_2 = new QGridLayout(gridGroupBox2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_10 = new QLabel(gridGroupBox2);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_10->setFont(font);

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        label_11 = new QLabel(gridGroupBox2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);

        gridLayout_2->addWidget(label_11, 2, 0, 1, 1);

        label_5 = new QLabel(gridGroupBox2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridGroupBox2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 1, 1, 1, 1);

        lineEdit = new QLineEdit(gridGroupBox2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_3 = new QLineEdit(gridGroupBox2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_2->addWidget(lineEdit_3, 2, 1, 1, 1);


        gridLayout_12->addWidget(gridGroupBox2, 1, 1, 1, 1);

        gridGroupBox = new QGroupBox(tab_2);
        gridGroupBox->setObjectName(QStringLiteral("gridGroupBox"));
        gridLayout_5 = new QGridLayout(gridGroupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        line_6 = new QFrame(gridGroupBox);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_6, 10, 2, 2, 2);

        spinBox4DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox4DOF->setObjectName(QStringLiteral("spinBox4DOF"));
        spinBox4DOF->setMinimum(-180);
        spinBox4DOF->setMaximum(180);

        gridLayout_5->addWidget(spinBox4DOF, 11, 3, 1, 1);

        dial4DOF = new QDial(gridGroupBox);
        dial4DOF->setObjectName(QStringLiteral("dial4DOF"));
        dial4DOF->setMinimum(-180);
        dial4DOF->setNotchesVisible(true);

        gridLayout_5->addWidget(dial4DOF, 10, 1, 2, 1);

        spinBox3DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox3DOF->setObjectName(QStringLiteral("spinBox3DOF"));
        spinBox3DOF->setMinimum(-180);
        spinBox3DOF->setMaximum(180);

        gridLayout_5->addWidget(spinBox3DOF, 8, 3, 1, 1);

        line_5 = new QFrame(gridGroupBox);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setMaximumSize(QSize(16777215, 16777215));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_5, 7, 2, 2, 2);

        line_9 = new QFrame(gridGroupBox);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_9, 4, 2, 2, 1);

        label_13 = new QLabel(gridGroupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMaximumSize(QSize(16, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("FreeMono"));
        font1.setPointSize(14);
        label_13->setFont(font1);

        gridLayout_5->addWidget(label_13, 5, 0, 1, 1);

        label_14 = new QLabel(gridGroupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMaximumSize(QSize(16, 16));
        label_14->setFont(font1);

        gridLayout_5->addWidget(label_14, 8, 0, 1, 1);

        line_7 = new QFrame(gridGroupBox);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_7, 13, 2, 2, 2);

        dial2DOF = new QDial(gridGroupBox);
        dial2DOF->setObjectName(QStringLiteral("dial2DOF"));
        dial2DOF->setMinimum(-180);
        dial2DOF->setMaximum(180);
        dial2DOF->setNotchesVisible(true);

        gridLayout_5->addWidget(dial2DOF, 4, 1, 2, 1);

        label_21 = new QLabel(gridGroupBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMaximumSize(QSize(16, 16));
        label_21->setFont(font1);

        gridLayout_5->addWidget(label_21, 14, 0, 1, 1);

        line_8 = new QFrame(gridGroupBox);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_8, 17, 2, 2, 1);

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

        dial6DOF = new QDial(gridGroupBox);
        dial6DOF->setObjectName(QStringLiteral("dial6DOF"));
        dial6DOF->setMinimum(-180);
        dial6DOF->setMaximum(180);
        dial6DOF->setNotchTarget(3.7);
        dial6DOF->setNotchesVisible(true);

        gridLayout_5->addWidget(dial6DOF, 17, 1, 2, 1);

        spinBox2DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox2DOF->setObjectName(QStringLiteral("spinBox2DOF"));
        spinBox2DOF->setMinimum(-180);
        spinBox2DOF->setMaximum(180);

        gridLayout_5->addWidget(spinBox2DOF, 5, 3, 1, 1);

        line_10 = new QFrame(gridGroupBox);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_10, 0, 2, 2, 2);

        line_4 = new QFrame(gridGroupBox);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_4, 3, 3, 1, 1);

        label_12 = new QLabel(gridGroupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(16, 16));
        label_12->setFont(font1);

        gridLayout_5->addWidget(label_12, 1, 0, 1, 1);

        line_19 = new QFrame(gridGroupBox);
        line_19->setObjectName(QStringLiteral("line_19"));
        line_19->setFrameShape(QFrame::HLine);
        line_19->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_19, 16, 3, 1, 1);

        spinBox1DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox1DOF->setObjectName(QStringLiteral("spinBox1DOF"));
        spinBox1DOF->setMinimum(-180);
        spinBox1DOF->setMaximum(180);

        gridLayout_5->addWidget(spinBox1DOF, 1, 3, 1, 1);

        dial5DOF = new QDial(gridGroupBox);
        dial5DOF->setObjectName(QStringLiteral("dial5DOF"));
        dial5DOF->setMinimum(-180);
        dial5DOF->setMaximum(180);
        dial5DOF->setNotchesVisible(true);

        gridLayout_5->addWidget(dial5DOF, 13, 1, 2, 1);

        label_20 = new QLabel(gridGroupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMaximumSize(QSize(16, 16));
        label_20->setFont(font1);

        gridLayout_5->addWidget(label_20, 11, 0, 1, 1);

        line_18 = new QFrame(gridGroupBox);
        line_18->setObjectName(QStringLiteral("line_18"));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_18, 16, 1, 1, 1);

        dial3DOF = new QDial(gridGroupBox);
        dial3DOF->setObjectName(QStringLiteral("dial3DOF"));
        dial3DOF->setMinimum(-180);
        dial3DOF->setMaximum(180);
        dial3DOF->setNotchesVisible(true);

        gridLayout_5->addWidget(dial3DOF, 7, 1, 2, 1);

        line_17 = new QFrame(gridGroupBox);
        line_17->setObjectName(QStringLiteral("line_17"));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_17, 12, 3, 1, 1);

        line_11 = new QFrame(gridGroupBox);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_11, 3, 1, 1, 1);

        line_14 = new QFrame(gridGroupBox);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_14, 9, 1, 1, 1);

        line_12 = new QFrame(gridGroupBox);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_12, 6, 1, 1, 1);

        label_22 = new QLabel(gridGroupBox);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMaximumSize(QSize(16, 16));
        label_22->setFont(font1);

        gridLayout_5->addWidget(label_22, 18, 0, 1, 1);

        line_16 = new QFrame(gridGroupBox);
        line_16->setObjectName(QStringLiteral("line_16"));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_16, 12, 1, 1, 1);

        line_13 = new QFrame(gridGroupBox);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_13, 6, 3, 1, 1);

        dial1DOF = new QDial(gridGroupBox);
        dial1DOF->setObjectName(QStringLiteral("dial1DOF"));
        dial1DOF->setMinimum(-180);
        dial1DOF->setMaximum(180);
        dial1DOF->setTracking(true);
        dial1DOF->setWrapping(false);
        dial1DOF->setNotchesVisible(true);

        gridLayout_5->addWidget(dial1DOF, 0, 1, 2, 1);

        spinBox6DOF = new QDoubleSpinBox(gridGroupBox);
        spinBox6DOF->setObjectName(QStringLiteral("spinBox6DOF"));
        spinBox6DOF->setMinimum(-180);
        spinBox6DOF->setMaximum(180);

        gridLayout_5->addWidget(spinBox6DOF, 18, 3, 1, 1);


        gridLayout_12->addWidget(gridGroupBox, 1, 0, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 1, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        label_6->setFont(font2);
        label_6->setTextFormat(Qt::RichText);
        label_6->setWordWrap(true);

        gridLayout_11->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setWeight(50);
        label_7->setFont(font3);

        gridLayout_11->addWidget(label_7, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_11->addWidget(pushButton_3, 2, 0, 1, 1);


        gridLayout_13->addLayout(gridLayout_11, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(344, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer, 2, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_16 = new QGridLayout(tab_3);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_4, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font3);

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font2);
        label_9->setWordWrap(true);

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 0, 1, 1);


        gridLayout_16->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setSpacing(6);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_14 = new QGridLayout(groupBox);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_14->addWidget(checkBox, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_14->addWidget(label_2, 1, 0, 1, 1);

        xSlider = new QSlider(groupBox);
        xSlider->setObjectName(QStringLiteral("xSlider"));
        xSlider->setMinimum(-100);
        xSlider->setMaximum(100);
        xSlider->setSingleStep(10);
        xSlider->setOrientation(Qt::Horizontal);
        xSlider->setTickPosition(QSlider::TicksAbove);
        xSlider->setTickInterval(5);

        gridLayout_14->addWidget(xSlider, 1, 1, 1, 1);

        xBox = new QDoubleSpinBox(groupBox);
        xBox->setObjectName(QStringLiteral("xBox"));
        xBox->setMinimumSize(QSize(80, 0));
        xBox->setDecimals(2);
        xBox->setMinimum(-100);
        xBox->setMaximum(100);
        xBox->setSingleStep(1);

        gridLayout_14->addWidget(xBox, 1, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_14->addWidget(label_4, 2, 0, 1, 1);

        ySlider = new QSlider(groupBox);
        ySlider->setObjectName(QStringLiteral("ySlider"));
        ySlider->setMinimum(-100);
        ySlider->setMaximum(100);
        ySlider->setSingleStep(10);
        ySlider->setOrientation(Qt::Horizontal);
        ySlider->setTickPosition(QSlider::TicksAbove);
        ySlider->setTickInterval(5);

        gridLayout_14->addWidget(ySlider, 2, 1, 1, 1);

        yBox = new QDoubleSpinBox(groupBox);
        yBox->setObjectName(QStringLiteral("yBox"));
        yBox->setMinimumSize(QSize(80, 0));
        yBox->setDecimals(2);
        yBox->setMinimum(-100);
        yBox->setMaximum(100);
        yBox->setSingleStep(1);

        gridLayout_14->addWidget(yBox, 2, 2, 1, 1);

        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_14->addWidget(label_19, 3, 0, 1, 1);

        zSlider = new QSlider(groupBox);
        zSlider->setObjectName(QStringLiteral("zSlider"));
        zSlider->setMinimum(-100);
        zSlider->setMaximum(100);
        zSlider->setSingleStep(10);
        zSlider->setOrientation(Qt::Horizontal);
        zSlider->setInvertedAppearance(false);
        zSlider->setTickPosition(QSlider::TicksAbove);
        zSlider->setTickInterval(5);

        gridLayout_14->addWidget(zSlider, 3, 1, 1, 1);

        zBox = new QDoubleSpinBox(groupBox);
        zBox->setObjectName(QStringLiteral("zBox"));
        zBox->setMinimumSize(QSize(80, 0));
        zBox->setDecimals(2);
        zBox->setMinimum(-100);
        zBox->setMaximum(100);
        zBox->setSingleStep(1);

        gridLayout_14->addWidget(zBox, 3, 2, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_14->addWidget(label_16, 4, 0, 1, 1);

        yawSlider = new QSlider(groupBox);
        yawSlider->setObjectName(QStringLiteral("yawSlider"));
        yawSlider->setMinimum(-180);
        yawSlider->setMaximum(180);
        yawSlider->setSingleStep(5);
        yawSlider->setPageStep(5);
        yawSlider->setOrientation(Qt::Horizontal);
        yawSlider->setTickPosition(QSlider::TicksAbove);
        yawSlider->setTickInterval(5);

        gridLayout_14->addWidget(yawSlider, 4, 1, 1, 1);

        yawBox = new QDoubleSpinBox(groupBox);
        yawBox->setObjectName(QStringLiteral("yawBox"));
        yawBox->setMinimumSize(QSize(80, 0));
        yawBox->setDecimals(2);
        yawBox->setMinimum(-1.8e+08);
        yawBox->setMaximum(180);
        yawBox->setSingleStep(1);

        gridLayout_14->addWidget(yawBox, 4, 2, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_14->addWidget(label_17, 5, 0, 1, 1);

        pitchSlider = new QSlider(groupBox);
        pitchSlider->setObjectName(QStringLiteral("pitchSlider"));
        pitchSlider->setMinimum(-180);
        pitchSlider->setMaximum(180);
        pitchSlider->setSingleStep(5);
        pitchSlider->setPageStep(5);
        pitchSlider->setOrientation(Qt::Horizontal);
        pitchSlider->setTickPosition(QSlider::TicksAbove);
        pitchSlider->setTickInterval(5);

        gridLayout_14->addWidget(pitchSlider, 5, 1, 1, 1);

        pitchBox = new QDoubleSpinBox(groupBox);
        pitchBox->setObjectName(QStringLiteral("pitchBox"));
        pitchBox->setMinimumSize(QSize(80, 0));
        pitchBox->setDecimals(2);
        pitchBox->setMinimum(-180);
        pitchBox->setMaximum(180);
        pitchBox->setSingleStep(1);

        gridLayout_14->addWidget(pitchBox, 5, 2, 1, 1);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_14->addWidget(label_18, 6, 0, 1, 1);

        rollSlider = new QSlider(groupBox);
        rollSlider->setObjectName(QStringLiteral("rollSlider"));
        rollSlider->setMinimum(-180);
        rollSlider->setMaximum(180);
        rollSlider->setSingleStep(5);
        rollSlider->setPageStep(5);
        rollSlider->setOrientation(Qt::Horizontal);
        rollSlider->setTickPosition(QSlider::TicksAbove);
        rollSlider->setTickInterval(5);

        gridLayout_14->addWidget(rollSlider, 6, 1, 1, 1);

        rollBox = new QDoubleSpinBox(groupBox);
        rollBox->setObjectName(QStringLiteral("rollBox"));
        rollBox->setMinimumSize(QSize(80, 0));
        rollBox->setDecimals(2);
        rollBox->setMinimum(-180);
        rollBox->setMaximum(180);
        rollBox->setSingleStep(1);

        gridLayout_14->addWidget(rollBox, 6, 2, 1, 1);


        gridLayout_15->addWidget(groupBox, 0, 0, 1, 1);


        gridLayout_16->addLayout(gridLayout_15, 1, 0, 1, 1);

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

        gridLayout_6->addWidget(tabWidget, 1, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tabWidget1 = new QTabWidget(centralWidget);
        tabWidget1->setObjectName(QStringLiteral("tabWidget1"));
        tabWidget1->setMaximumSize(QSize(1080, 720));
        QFont font4;
        font4.setPointSize(10);
        font4.setItalic(false);
        tabWidget1->setFont(font4);
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName(QStringLiteral("tabWidgetPage1"));
        gridLayout_3 = new QGridLayout(tabWidgetPage1);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridGroupBox_3 = new QGroupBox(tabWidgetPage1);
        gridGroupBox_3->setObjectName(QStringLiteral("gridGroupBox_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gridGroupBox_3->sizePolicy().hasHeightForWidth());
        gridGroupBox_3->setSizePolicy(sizePolicy2);
        gridGroupBox_3->setMaximumSize(QSize(550, 100));
        gridGroupBox_3->setAutoFillBackground(true);
        gridLayout_17 = new QGridLayout(gridGroupBox_3);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        checkBox4DOFI = new QCheckBox(gridGroupBox_3);
        checkBox4DOFI->setObjectName(QStringLiteral("checkBox4DOFI"));
        checkBox4DOFI->setAutoFillBackground(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/img/1448635827949.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkBox4DOFI->setIcon(icon1);
        checkBox4DOFI->setIconSize(QSize(37, 23));

        gridLayout_17->addWidget(checkBox4DOFI, 0, 0, 1, 1);

        checkBox6DOFI = new QCheckBox(gridGroupBox_3);
        checkBox6DOFI->setObjectName(QStringLiteral("checkBox6DOFI"));
        checkBox6DOFI->setAutoFillBackground(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/img/ABB.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkBox6DOFI->setIcon(icon2);
        checkBox6DOFI->setIconSize(QSize(27, 24));

        gridLayout_17->addWidget(checkBox6DOFI, 0, 2, 1, 1);

        checkBox3DOFI = new QCheckBox(gridGroupBox_3);
        checkBox3DOFI->setObjectName(QStringLiteral("checkBox3DOFI"));
        checkBox3DOFI->setAutoFillBackground(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/img/Yaskawa_Motoman_Logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkBox3DOFI->setIcon(icon3);
        checkBox3DOFI->setIconSize(QSize(28, 23));

        gridLayout_17->addWidget(checkBox3DOFI, 0, 4, 1, 1);

        checkBox5DOFI = new QCheckBox(gridGroupBox_3);
        checkBox5DOFI->setObjectName(QStringLiteral("checkBox5DOFI"));
        checkBox5DOFI->setLayoutDirection(Qt::LeftToRight);
        checkBox5DOFI->setAutoFillBackground(true);
        checkBox5DOFI->setIcon(icon3);
        checkBox5DOFI->setIconSize(QSize(28, 23));
        checkBox5DOFI->setTristate(false);

        gridLayout_17->addWidget(checkBox5DOFI, 0, 3, 1, 1);

        checkBox2DOFI = new QCheckBox(gridGroupBox_3);
        checkBox2DOFI->setObjectName(QStringLiteral("checkBox2DOFI"));
        checkBox2DOFI->setAutoFillBackground(true);
        checkBox2DOFI->setIcon(icon2);
        checkBox2DOFI->setIconSize(QSize(27, 24));

        gridLayout_17->addWidget(checkBox2DOFI, 0, 1, 1, 1);


        gridLayout_3->addWidget(gridGroupBox_3, 0, 0, 1, 1);

        tabWidget1->addTab(tabWidgetPage1, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName(QStringLiteral("tabWidgetPage2"));
        gridLayout_8 = new QGridLayout(tabWidgetPage2);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridGroupBox_2 = new QGroupBox(tabWidgetPage2);
        gridGroupBox_2->setObjectName(QStringLiteral("gridGroupBox_2"));
        gridGroupBox_2->setMaximumSize(QSize(460, 200));
        gridLayout_4 = new QGridLayout(gridGroupBox_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        checkBox5DOFs = new QCheckBox(gridGroupBox_2);
        checkBox5DOFs->setObjectName(QStringLiteral("checkBox5DOFs"));

        gridLayout_4->addWidget(checkBox5DOFs, 0, 3, 1, 1);

        checkBox6DOFs = new QCheckBox(gridGroupBox_2);
        checkBox6DOFs->setObjectName(QStringLiteral("checkBox6DOFs"));

        gridLayout_4->addWidget(checkBox6DOFs, 0, 4, 1, 1);

        checkBox4DOFs = new QCheckBox(gridGroupBox_2);
        checkBox4DOFs->setObjectName(QStringLiteral("checkBox4DOFs"));

        gridLayout_4->addWidget(checkBox4DOFs, 0, 2, 1, 1);

        checkBox3DOFs = new QCheckBox(gridGroupBox_2);
        checkBox3DOFs->setObjectName(QStringLiteral("checkBox3DOFs"));

        gridLayout_4->addWidget(checkBox3DOFs, 0, 1, 1, 1);

        checkBox2DOFs = new QCheckBox(gridGroupBox_2);
        checkBox2DOFs->setObjectName(QStringLiteral("checkBox2DOFs"));

        gridLayout_4->addWidget(checkBox2DOFs, 0, 0, 1, 1);


        gridLayout_8->addWidget(gridGroupBox_2, 0, 0, 1, 1);

        tabWidget1->addTab(tabWidgetPage2, QString());

        verticalLayout_6->addWidget(tabWidget1);


        gridLayout_6->addLayout(verticalLayout_6, 0, 0, 1, 1);


        horizontalLayout_5->addLayout(gridLayout_6);

        line_21 = new QFrame(centralWidget);
        line_21->setObjectName(QStringLiteral("line_21"));
        line_21->setMaximumSize(QSize(16777215, 630));
        line_21->setFrameShape(QFrame::VLine);
        line_21->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_21);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        QFont font5;
        font5.setFamily(QStringLiteral("Abyssinica SIL"));
        font5.setPointSize(16);
        line->setFont(font5);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        comboBox = new QComboBox(centralWidget);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/img/noun_1450480_cc.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon4, QString());
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/img/noun_1036042_cc.png"), QSize(), QIcon::Active, QIcon::Off);
        comboBox->addItem(icon5, QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_3->addWidget(comboBox);

        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        QFont font6;
        font6.setFamily(QStringLiteral("Abyssinica SIL"));
        font6.setPointSize(15);
        label_23->setFont(font6);

        horizontalLayout_3->addWidget(label_23);

        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout_3->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(centralWidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setChecked(true);

        horizontalLayout_3->addWidget(checkBox_3);


        verticalLayout_7->addLayout(horizontalLayout_3);

        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_3);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        sizePolicy2.setHeightForWidth(mdiArea->sizePolicy().hasHeightForWidth());
        mdiArea->setSizePolicy(sizePolicy2);

        gridLayout_10->addWidget(mdiArea, 0, 0, 1, 1);


        verticalLayout_7->addLayout(gridLayout_10);


        horizontalLayout_5->addLayout(verticalLayout_7);


        gridLayout_18->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
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

        gridLayout_18->addWidget(label, 0, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_18, 0, 0, 1, 1);

        ROSGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ROSGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 19));
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
        QObject::connect(checkBox2DOFI, SIGNAL(toggled(bool)), checkBox6DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFI, SIGNAL(toggled(bool)), gridGroupBox_2, SLOT(setDisabled(bool)));
        QObject::connect(checkBox2DOFI, SIGNAL(toggled(bool)), checkBox3DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox2DOFI, SIGNAL(toggled(bool)), checkBox4DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox2DOFI, SIGNAL(toggled(bool)), checkBox5DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFI, SIGNAL(toggled(bool)), gridGroupBox_2, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFI, SIGNAL(toggled(bool)), gridGroupBox_2, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFI, SIGNAL(toggled(bool)), gridGroupBox_2, SLOT(setDisabled(bool)));
        QObject::connect(checkBox2DOFI, SIGNAL(toggled(bool)), gridGroupBox_2, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFI, SIGNAL(toggled(bool)), checkBox3DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFI, SIGNAL(toggled(bool)), checkBox2DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFI, SIGNAL(toggled(bool)), checkBox4DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFs, SIGNAL(toggled(bool)), checkBox6DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFI, SIGNAL(toggled(bool)), checkBox3DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFI, SIGNAL(toggled(bool)), checkBox2DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFI, SIGNAL(toggled(bool)), checkBox4DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFI, SIGNAL(toggled(bool)), checkBox5DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFI, SIGNAL(toggled(bool)), checkBox5DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFI, SIGNAL(toggled(bool)), checkBox4DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFI, SIGNAL(toggled(bool)), checkBox2DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFs, SIGNAL(toggled(bool)), checkBox5DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFI, SIGNAL(toggled(bool)), checkBox5DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFI, SIGNAL(toggled(bool)), checkBox6DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFs, SIGNAL(toggled(bool)), checkBox5DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFs, SIGNAL(toggled(bool)), checkBox4DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox2DOFs, SIGNAL(toggled(bool)), checkBox5DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFI, SIGNAL(toggled(bool)), checkBox6DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox2DOFs, SIGNAL(toggled(bool)), checkBox3DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFI, SIGNAL(toggled(bool)), checkBox2DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFI, SIGNAL(toggled(bool)), checkBox6DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFs, SIGNAL(toggled(bool)), gridGroupBox_3, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFs, SIGNAL(toggled(bool)), checkBox6DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFs, SIGNAL(toggled(bool)), checkBox2DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFI, SIGNAL(toggled(bool)), checkBox3DOFI, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFs, SIGNAL(toggled(bool)), checkBox2DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFs, SIGNAL(toggled(bool)), checkBox3DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox2DOFs, SIGNAL(toggled(bool)), gridGroupBox_3, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFs, SIGNAL(toggled(bool)), checkBox3DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox2DOFs, SIGNAL(toggled(bool)), checkBox6DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFs, SIGNAL(toggled(bool)), checkBox4DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox4DOFs, SIGNAL(toggled(bool)), gridGroupBox_3, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFs, SIGNAL(toggled(bool)), gridGroupBox_3, SLOT(setDisabled(bool)));
        QObject::connect(checkBox3DOFs, SIGNAL(toggled(bool)), checkBox6DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFs, SIGNAL(toggled(bool)), checkBox4DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFs, SIGNAL(toggled(bool)), checkBox3DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFs, SIGNAL(toggled(bool)), checkBox2DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox5DOFs, SIGNAL(toggled(bool)), gridGroupBox_3, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFs, SIGNAL(toggled(bool)), checkBox5DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox2DOFs, SIGNAL(toggled(bool)), checkBox4DOFs, SLOT(setDisabled(bool)));
        QObject::connect(checkBox6DOFs, SIGNAL(toggled(bool)), checkBox2DOFs, SLOT(setDisabled(bool)));

        tabWidget->setCurrentIndex(0);
        tabWidget1->setCurrentIndex(0);


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
        actionTF_RVIZ->setText(QApplication::translate("ROSGUI", "TF RVIZ", 0));
        pushButton->setText(QApplication::translate("ROSGUI", "PushButton", 0));
        label_3->setText(QString());
        label_10->setText(QApplication::translate("ROSGUI", "Y", 0));
        label_11->setText(QApplication::translate("ROSGUI", "Z", 0));
        label_5->setText(QApplication::translate("ROSGUI", "X", 0));
        gridGroupBox->setTitle(QApplication::translate("ROSGUI", "DOF", 0));
        label_13->setText(QApplication::translate("ROSGUI", "2", 0));
        label_14->setText(QApplication::translate("ROSGUI", "3", 0));
        label_21->setText(QApplication::translate("ROSGUI", "5", 0));
        label_12->setText(QApplication::translate("ROSGUI", "1", 0));
        label_20->setText(QApplication::translate("ROSGUI", "4", 0));
        label_22->setText(QApplication::translate("ROSGUI", "6", 0));
        label_6->setText(QApplication::translate("ROSGUI", "La cinem\303\241tica es la ciencia que trata el movimiento sin considerar las fuerzas que lo ocasionan. Dentro de la cinem\303\241tica se estudian la posici\303\263n, velocidad, aceleraci\303\263n y todas las derivadas de mayor orden de las variables de posici\303\263n. ", 0));
        label_7->setText(QApplication::translate("ROSGUI", "Cinematica Directa", 0));
        pushButton_3->setText(QApplication::translate("ROSGUI", "+TEORIA", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ROSGUI", "CINEMATICA DIRECTA", 0));
        label_8->setText(QApplication::translate("ROSGUI", "Cinematica Inversa", 0));
        label_9->setText(QApplication::translate("ROSGUI", "El problema se plantea de la siguiente manera: dada la posici\303\263n y orientaci\303\263n del efector final del manipulador, se calcula todos los conjuntos posibles de \303\241ngulos articulares que podr\303\255an utilizarse para obtener esta posici\303\263n y orientaci\303\263n dadas. Este es un problema fundamental en el uso pr\303\241ctico de los manipuladores. ", 0));
        pushButton_2->setText(QApplication::translate("ROSGUI", "+TEORIA CI", 0));
        groupBox->setTitle(QApplication::translate("ROSGUI", "TCP", 0));
        checkBox->setText(QApplication::translate("ROSGUI", "EJECUTAR", 0));
        label_2->setText(QApplication::translate("ROSGUI", "X", 0));
        label_4->setText(QApplication::translate("ROSGUI", "Y", 0));
        label_19->setText(QApplication::translate("ROSGUI", "Z", 0));
        label_16->setText(QApplication::translate("ROSGUI", "Yaw", 0));
        label_17->setText(QApplication::translate("ROSGUI", "Pitch", 0));
        label_18->setText(QApplication::translate("ROSGUI", "Roll", 0));
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
        gridGroupBox_3->setTitle(QString());
        checkBox4DOFI->setText(QApplication::translate("ROSGUI", "KR210", 0));
        checkBox6DOFI->setText(QApplication::translate("ROSGUI", "IRB120", 0));
        checkBox3DOFI->setText(QApplication::translate("ROSGUI", "BMDA3", 0));
        checkBox5DOFI->setText(QApplication::translate("ROSGUI", "MH5", 0));
        checkBox2DOFI->setText(QApplication::translate("ROSGUI", "IRB5400", 0));
        tabWidget1->setTabText(tabWidget1->indexOf(tabWidgetPage1), QApplication::translate("ROSGUI", "Robots Industriales", 0));
        gridGroupBox_2->setTitle(QString());
        checkBox5DOFs->setText(QApplication::translate("ROSGUI", "5DOF", 0));
        checkBox6DOFs->setText(QApplication::translate("ROSGUI", "6DOF", 0));
        checkBox4DOFs->setText(QApplication::translate("ROSGUI", "4DOF", 0));
        checkBox3DOFs->setText(QApplication::translate("ROSGUI", "3DOF", 0));
        checkBox2DOFs->setText(QApplication::translate("ROSGUI", "2DOF", 0));
        tabWidget1->setTabText(tabWidget1->indexOf(tabWidgetPage2), QApplication::translate("ROSGUI", "Robots Simples", 0));
        comboBox->setItemText(0, QApplication::translate("ROSGUI", "New Item", 0));
        comboBox->setItemText(1, QApplication::translate("ROSGUI", "New Item", 0));

        label_23->setText(QApplication::translate("ROSGUI", "RVIZ  TOOLS", 0));
        checkBox_2->setText(QApplication::translate("ROSGUI", "TF ", 0));
        checkBox_3->setText(QApplication::translate("ROSGUI", "RM", 0));
        label->setText(QApplication::translate("ROSGUI", "LABORATORIO VIRTUAL ROB\303\223TICA B\303\201SICA", 0));
        menuFILE->setTitle(QApplication::translate("ROSGUI", "FILE", 0));
    } // retranslateUi

};

namespace Ui {
    class ROSGUI: public Ui_ROSGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROSGUI_H
