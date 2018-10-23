/********************************************************************************
** Form generated from reading UI file 'fy_wlemg_test_terminal.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FY_WLEMG_TEST_TERMINAL_H
#define UI_FY_WLEMG_TEST_TERMINAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FY_WLEMG_TEST_TERMINAL
{
public:
    QWidget *centralWidget;
    QComboBox *CB;
    QPushButton *PB_OPEN_SERIAL;
    QPushButton *PB_CLOSE_SERIAL;
    QTextBrowser *TB;
    QLineEdit *LE_PKT_COUNTER;
    QLineEdit *LE_PKT_BYTE_SUM;
    QLineEdit *LE_PKT_DATA;
    QPushButton *PB_PRINT;
    QPushButton *PB_CLEAR;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FY_WLEMG_TEST_TERMINAL)
    {
        if (FY_WLEMG_TEST_TERMINAL->objectName().isEmpty())
            FY_WLEMG_TEST_TERMINAL->setObjectName(QStringLiteral("FY_WLEMG_TEST_TERMINAL"));
        FY_WLEMG_TEST_TERMINAL->resize(816, 660);
        centralWidget = new QWidget(FY_WLEMG_TEST_TERMINAL);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        CB = new QComboBox(centralWidget);
        CB->setObjectName(QStringLiteral("CB"));
        CB->setGeometry(QRect(10, 30, 69, 22));
        PB_OPEN_SERIAL = new QPushButton(centralWidget);
        PB_OPEN_SERIAL->setObjectName(QStringLiteral("PB_OPEN_SERIAL"));
        PB_OPEN_SERIAL->setGeometry(QRect(110, 30, 75, 23));
        PB_CLOSE_SERIAL = new QPushButton(centralWidget);
        PB_CLOSE_SERIAL->setObjectName(QStringLiteral("PB_CLOSE_SERIAL"));
        PB_CLOSE_SERIAL->setGeometry(QRect(210, 30, 75, 23));
        TB = new QTextBrowser(centralWidget);
        TB->setObjectName(QStringLiteral("TB"));
        TB->setGeometry(QRect(25, 131, 751, 451));
        LE_PKT_COUNTER = new QLineEdit(centralWidget);
        LE_PKT_COUNTER->setObjectName(QStringLiteral("LE_PKT_COUNTER"));
        LE_PKT_COUNTER->setGeometry(QRect(50, 90, 113, 21));
        LE_PKT_BYTE_SUM = new QLineEdit(centralWidget);
        LE_PKT_BYTE_SUM->setObjectName(QStringLiteral("LE_PKT_BYTE_SUM"));
        LE_PKT_BYTE_SUM->setGeometry(QRect(180, 90, 113, 20));
        LE_PKT_DATA = new QLineEdit(centralWidget);
        LE_PKT_DATA->setObjectName(QStringLiteral("LE_PKT_DATA"));
        LE_PKT_DATA->setGeometry(QRect(320, 90, 113, 20));
        PB_PRINT = new QPushButton(centralWidget);
        PB_PRINT->setObjectName(QStringLiteral("PB_PRINT"));
        PB_PRINT->setGeometry(QRect(310, 30, 75, 23));
        PB_CLEAR = new QPushButton(centralWidget);
        PB_CLEAR->setObjectName(QStringLiteral("PB_CLEAR"));
        PB_CLEAR->setGeometry(QRect(400, 30, 75, 23));
        FY_WLEMG_TEST_TERMINAL->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FY_WLEMG_TEST_TERMINAL);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 816, 23));
        FY_WLEMG_TEST_TERMINAL->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FY_WLEMG_TEST_TERMINAL);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FY_WLEMG_TEST_TERMINAL->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FY_WLEMG_TEST_TERMINAL);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FY_WLEMG_TEST_TERMINAL->setStatusBar(statusBar);

        retranslateUi(FY_WLEMG_TEST_TERMINAL);

        QMetaObject::connectSlotsByName(FY_WLEMG_TEST_TERMINAL);
    } // setupUi

    void retranslateUi(QMainWindow *FY_WLEMG_TEST_TERMINAL)
    {
        FY_WLEMG_TEST_TERMINAL->setWindowTitle(QApplication::translate("FY_WLEMG_TEST_TERMINAL", "FY_WLEMG_TEST_TERMINAL", nullptr));
        PB_OPEN_SERIAL->setText(QApplication::translate("FY_WLEMG_TEST_TERMINAL", "OPEN", nullptr));
        PB_CLOSE_SERIAL->setText(QApplication::translate("FY_WLEMG_TEST_TERMINAL", "CLOSE", nullptr));
        PB_PRINT->setText(QApplication::translate("FY_WLEMG_TEST_TERMINAL", "PRINT", nullptr));
        PB_CLEAR->setText(QApplication::translate("FY_WLEMG_TEST_TERMINAL", "CLEAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FY_WLEMG_TEST_TERMINAL: public Ui_FY_WLEMG_TEST_TERMINAL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FY_WLEMG_TEST_TERMINAL_H
