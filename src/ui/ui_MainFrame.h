/********************************************************************************
** Form generated from reading UI file 'MainFramedcTLHu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINFRAMEDCTLHU_H
#define MAINFRAMEDCTLHU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListView *studentsList;
    QPushButton *fileLoaderButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *MathCheckbox;
    QCheckBox *MathCheckboxExclude;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *PhysicsCheckbox;
    QCheckBox *PhysicsCheckboxExclude;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *BiologyCheckbox;
    QCheckBox *BiologyCheckboxExclude;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *ChemistryCheckbox;
    QCheckBox *ChemistryCheckboxExclude;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 590);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        studentsList = new QListView(centralwidget);
        studentsList->setObjectName(QString::fromUtf8("studentsList"));
        studentsList->setGeometry(QRect(20, 20, 611, 521));
        studentsList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        fileLoaderButton = new QPushButton(centralwidget);
        fileLoaderButton->setObjectName(QString::fromUtf8("fileLoaderButton"));
        fileLoaderButton->setGeometry(QRect(640, 120, 151, 23));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(640, 20, 151, 96));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        MathCheckbox = new QCheckBox(verticalLayoutWidget);
        MathCheckbox->setObjectName(QString::fromUtf8("MathCheckbox"));
        MathCheckbox->setTristate(false);

        horizontalLayout->addWidget(MathCheckbox);

        MathCheckboxExclude = new QCheckBox(verticalLayoutWidget);
        MathCheckboxExclude->setObjectName(QString::fromUtf8("MathCheckboxExclude"));

        horizontalLayout->addWidget(MathCheckboxExclude);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        PhysicsCheckbox = new QCheckBox(verticalLayoutWidget);
        PhysicsCheckbox->setObjectName(QString::fromUtf8("PhysicsCheckbox"));
        PhysicsCheckbox->setTristate(false);

        horizontalLayout_6->addWidget(PhysicsCheckbox);

        PhysicsCheckboxExclude = new QCheckBox(verticalLayoutWidget);
        PhysicsCheckboxExclude->setObjectName(QString::fromUtf8("PhysicsCheckboxExclude"));

        horizontalLayout_6->addWidget(PhysicsCheckboxExclude);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        BiologyCheckbox = new QCheckBox(verticalLayoutWidget);
        BiologyCheckbox->setObjectName(QString::fromUtf8("BiologyCheckbox"));
        BiologyCheckbox->setTristate(false);

        horizontalLayout_7->addWidget(BiologyCheckbox);

        BiologyCheckboxExclude = new QCheckBox(verticalLayoutWidget);
        BiologyCheckboxExclude->setObjectName(QString::fromUtf8("BiologyCheckboxExclude"));

        horizontalLayout_7->addWidget(BiologyCheckboxExclude);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        ChemistryCheckbox = new QCheckBox(verticalLayoutWidget);
        ChemistryCheckbox->setObjectName(QString::fromUtf8("ChemistryCheckbox"));
        ChemistryCheckbox->setTristate(false);

        horizontalLayout_5->addWidget(ChemistryCheckbox);

        ChemistryCheckboxExclude = new QCheckBox(verticalLayoutWidget);
        ChemistryCheckboxExclude->setObjectName(QString::fromUtf8("ChemistryCheckboxExclude"));

        horizontalLayout_5->addWidget(ChemistryCheckboxExclude);


        verticalLayout->addLayout(horizontalLayout_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        fileLoaderButton->setText(QCoreApplication::translate("MainWindow", "Load file", nullptr));
        MathCheckbox->setText(QCoreApplication::translate("MainWindow", "Math", nullptr));
        MathCheckboxExclude->setText(QCoreApplication::translate("MainWindow", "Exclude", nullptr));
        PhysicsCheckbox->setText(QCoreApplication::translate("MainWindow", "Physics", nullptr));
        PhysicsCheckboxExclude->setText(QCoreApplication::translate("MainWindow", "Exclude", nullptr));
        BiologyCheckbox->setText(QCoreApplication::translate("MainWindow", "Biology", nullptr));
        BiologyCheckboxExclude->setText(QCoreApplication::translate("MainWindow", "Exclude", nullptr));
        ChemistryCheckbox->setText(QCoreApplication::translate("MainWindow", "Chemistry", nullptr));
        ChemistryCheckboxExclude->setText(QCoreApplication::translate("MainWindow", "Exclude", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINFRAMEDCTLHU_H
