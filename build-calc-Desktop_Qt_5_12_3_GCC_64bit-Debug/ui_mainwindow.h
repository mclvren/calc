/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *result;
    QGridLayout *gridLayout;
    QPushButton *pushButton_0;
    QPushButton *pushButton_9;
    QPushButton *pushButton_3;
    QPushButton *plus;
    QPushButton *equal;
    QPushButton *dot;
    QPushButton *pushButton_4;
    QPushButton *pushButton_1;
    QPushButton *pushButton_6;
    QPushButton *percent;
    QPushButton *multiply;
    QPushButton *pushButton_8;
    QPushButton *clear_btn;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QPushButton *divide;
    QPushButton *minus;
    QPushButton *pushButton_2;
    QPushButton *plus_minus;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(439, 672);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(165, 110, 82)"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        result = new QLineEdit(centralWidget);
        result->setObjectName(QString::fromUtf8("result"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(result->sizePolicy().hasHeightForWidth());
        result->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 170, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(165, 110, 82, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 170, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        QBrush brush3(QColor(255, 170, 127, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        QBrush brush4(QColor(255, 170, 127, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        QBrush brush5(QColor(255, 170, 127, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        result->setPalette(palette);
        QFont font;
        font.setPointSize(48);
        result->setFont(font);
        result->setMouseTracking(false);
        result->setTabletTracking(true);
        result->setAutoFillBackground(false);
        result->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 127);\n"
"border: 1px solid rgb(255, 170, 0);"));
        result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        result->setClearButtonEnabled(true);

        verticalLayout->addWidget(result);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy1);
        pushButton_0->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(14);
        pushButton_0->setFont(font1);
        pushButton_0->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(134, 89, 0);"));

        gridLayout->addWidget(pushButton_0, 4, 0, 1, 2);

        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setBaseSize(QSize(0, 0));
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(134, 89, 0);"));

        gridLayout->addWidget(pushButton_9, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setBaseSize(QSize(0, 0));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(134, 89, 0);"));

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        plus = new QPushButton(centralWidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        sizePolicy1.setHeightForWidth(plus->sizePolicy().hasHeightForWidth());
        plus->setSizePolicy(sizePolicy1);
        plus->setBaseSize(QSize(0, 0));
        plus->setFont(font1);
        plus->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 146, 109);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(255, 190, 0)"));

        gridLayout->addWidget(plus, 3, 3, 1, 1);

        equal = new QPushButton(centralWidget);
        equal->setObjectName(QString::fromUtf8("equal"));
        sizePolicy1.setHeightForWidth(equal->sizePolicy().hasHeightForWidth());
        equal->setSizePolicy(sizePolicy1);
        equal->setBaseSize(QSize(0, 0));
        equal->setFont(font1);
        equal->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 146, 109);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(255, 190, 0)"));

        gridLayout->addWidget(equal, 4, 3, 1, 1);

        dot = new QPushButton(centralWidget);
        dot->setObjectName(QString::fromUtf8("dot"));
        sizePolicy1.setHeightForWidth(dot->sizePolicy().hasHeightForWidth());
        dot->setSizePolicy(sizePolicy1);
        dot->setBaseSize(QSize(0, 0));
        dot->setFont(font1);
        dot->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(134, 89, 0);"));

        gridLayout->addWidget(dot, 4, 2, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setBaseSize(QSize(0, 0));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(134, 89, 0);"));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy1.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy1);
        pushButton_1->setBaseSize(QSize(0, 0));
        pushButton_1->setFont(font1);
        pushButton_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(134, 89, 0);"));

        gridLayout->addWidget(pushButton_1, 3, 0, 1, 1);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setBaseSize(QSize(0, 0));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(134, 89, 0);"));

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        percent = new QPushButton(centralWidget);
        percent->setObjectName(QString::fromUtf8("percent"));
        sizePolicy1.setHeightForWidth(percent->sizePolicy().hasHeightForWidth());
        percent->setSizePolicy(sizePolicy1);
        percent->setFont(font1);
        percent->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 146, 109);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(255, 190, 0)"));

        gridLayout->addWidget(percent, 0, 2, 1, 1);

        multiply = new QPushButton(centralWidget);
        multiply->setObjectName(QString::fromUtf8("multiply"));
        sizePolicy1.setHeightForWidth(multiply->sizePolicy().hasHeightForWidth());
        multiply->setSizePolicy(sizePolicy1);
        multiply->setFont(font1);
        multiply->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 146, 109);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(255, 190, 0)"));

        gridLayout->addWidget(multiply, 1, 3, 1, 1);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setBaseSize(QSize(0, 0));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(134, 89, 0);"));

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        clear_btn = new QPushButton(centralWidget);
        clear_btn->setObjectName(QString::fromUtf8("clear_btn"));
        sizePolicy1.setHeightForWidth(clear_btn->sizePolicy().hasHeightForWidth());
        clear_btn->setSizePolicy(sizePolicy1);
        clear_btn->setFont(font1);
        clear_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 146, 109);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(255, 190, 0)"));

        gridLayout->addWidget(clear_btn, 0, 0, 1, 1);

        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setBaseSize(QSize(0, 0));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(134, 89, 0);"));

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setBaseSize(QSize(0, 0));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(134, 89, 0);"));

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        divide = new QPushButton(centralWidget);
        divide->setObjectName(QString::fromUtf8("divide"));
        sizePolicy1.setHeightForWidth(divide->sizePolicy().hasHeightForWidth());
        divide->setSizePolicy(sizePolicy1);
        divide->setFont(font1);
        divide->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 146, 109);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(255, 190, 0)"));

        gridLayout->addWidget(divide, 0, 3, 1, 1);

        minus = new QPushButton(centralWidget);
        minus->setObjectName(QString::fromUtf8("minus"));
        sizePolicy1.setHeightForWidth(minus->sizePolicy().hasHeightForWidth());
        minus->setSizePolicy(sizePolicy1);
        minus->setBaseSize(QSize(0, 0));
        minus->setFont(font1);
        minus->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 146, 109);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(255, 190, 0)"));

        gridLayout->addWidget(minus, 2, 3, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setBaseSize(QSize(0, 0));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 127);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(134, 89, 0);"));

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        plus_minus = new QPushButton(centralWidget);
        plus_minus->setObjectName(QString::fromUtf8("plus_minus"));
        sizePolicy1.setHeightForWidth(plus_minus->sizePolicy().hasHeightForWidth());
        plus_minus->setSizePolicy(sizePolicy1);
        plus_minus->setFont(font1);
        plus_minus->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 146, 109);\n"
"border: 1px solid rgb(255, 170, 0);\n"
"color: rgb(255, 190, 0)"));

        gridLayout->addWidget(plus_minus, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        result->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        equal->setText(QApplication::translate("MainWindow", "=", nullptr));
        dot->setText(QApplication::translate("MainWindow", ".", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        percent->setText(QApplication::translate("MainWindow", "%", nullptr));
        multiply->setText(QApplication::translate("MainWindow", "X", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        clear_btn->setText(QApplication::translate("MainWindow", "AC", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        divide->setText(QApplication::translate("MainWindow", "/", nullptr));
        minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        plus_minus->setText(QApplication::translate("MainWindow", "+/-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
