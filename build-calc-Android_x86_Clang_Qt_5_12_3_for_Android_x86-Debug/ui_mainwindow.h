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
    QPushButton *pushButton_10;
    QPushButton *clear_btn;
    QPushButton *pushButton_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_14;
    QPushButton *pushButton_2;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton;
    QPushButton *pushButton_13;
    QPushButton *pushButton_18;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_12;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_16;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(439, 590);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(173, 115, 86)"));
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
        QFont font;
        font.setPointSize(72);
        result->setFont(font);
        result->setAutoFillBackground(false);
        result->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 127);\n"
"border: 1px solid rgb(255, 170, 0)"));
        result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        result->setClearButtonEnabled(true);

        verticalLayout->addWidget(result);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setBaseSize(QSize(0, 0));
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0)"));

        gridLayout->addWidget(pushButton_10, 4, 0, 1, 2);

        clear_btn = new QPushButton(centralWidget);
        clear_btn->setObjectName(QString::fromUtf8("clear_btn"));
        sizePolicy1.setHeightForWidth(clear_btn->sizePolicy().hasHeightForWidth());
        clear_btn->setSizePolicy(sizePolicy1);
        clear_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 0)"));

        gridLayout->addWidget(clear_btn, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setBaseSize(QSize(0, 0));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0)"));

        gridLayout->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setBaseSize(QSize(0, 0));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0)"));

        gridLayout->addWidget(pushButton_3, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setBaseSize(QSize(0, 0));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0)"));

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_14 = new QPushButton(centralWidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        sizePolicy1.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy1);
        pushButton_14->setBaseSize(QSize(0, 0));
        pushButton_14->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 135, 0)"));

        gridLayout->addWidget(pushButton_14, 2, 3, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setBaseSize(QSize(0, 0));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0)"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_19 = new QPushButton(centralWidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        sizePolicy1.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy1);
        pushButton_19->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 135, 0)"));

        gridLayout->addWidget(pushButton_19, 0, 2, 1, 1);

        pushButton_20 = new QPushButton(centralWidget);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        sizePolicy1.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy1);
        pushButton_20->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 135, 0)"));

        gridLayout->addWidget(pushButton_20, 0, 3, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setBaseSize(QSize(0, 0));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0)"));

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);

        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);
        pushButton_13->setBaseSize(QSize(0, 0));
        pushButton_13->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 135, 0)"));

        gridLayout->addWidget(pushButton_13, 1, 3, 1, 1);

        pushButton_18 = new QPushButton(centralWidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        sizePolicy1.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy1);
        pushButton_18->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 135, 0)"));

        gridLayout->addWidget(pushButton_18, 0, 1, 1, 1);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setBaseSize(QSize(0, 0));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0)"));

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setBaseSize(QSize(0, 0));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0)"));

        gridLayout->addWidget(pushButton_9, 3, 2, 1, 1);

        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setBaseSize(QSize(0, 0));
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0)"));

        gridLayout->addWidget(pushButton_12, 4, 2, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setBaseSize(QSize(0, 0));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0)"));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setBaseSize(QSize(0, 0));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0)"));

        gridLayout->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_16 = new QPushButton(centralWidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        sizePolicy1.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy1);
        pushButton_16->setBaseSize(QSize(0, 0));
        pushButton_16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 0)"));

        gridLayout->addWidget(pushButton_16, 3, 3, 2, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        result->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "0", nullptr));
        clear_btn->setText(QApplication::translate("MainWindow", "AC", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_14->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_19->setText(QApplication::translate("MainWindow", "*", nullptr));
        pushButton_20->setText(QApplication::translate("MainWindow", "%", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_13->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_18->setText(QApplication::translate("MainWindow", "/", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_12->setText(QApplication::translate("MainWindow", ".", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_16->setText(QApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
