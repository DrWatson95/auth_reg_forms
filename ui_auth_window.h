/********************************************************************************
** Form generated from reading UI file 'auth_window.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTH_WINDOW_H
#define UI_AUTH_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_auth_window
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *loginPushButton;
    QLabel *label_Name;
    QLineEdit *lineEdit;
    QLabel *label_Password;
    QLineEdit *lineEdit_2;
    QPushButton *registerPushButton_2;
    QLabel *labelWelcome;

    void setupUi(QWidget *auth_window)
    {
        if (auth_window->objectName().isEmpty())
            auth_window->setObjectName(QString::fromUtf8("auth_window"));
        auth_window->resize(417, 192);
        horizontalLayout = new QHBoxLayout(auth_window);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        loginPushButton = new QPushButton(auth_window);
        loginPushButton->setObjectName(QString::fromUtf8("loginPushButton"));

        gridLayout->addWidget(loginPushButton, 4, 1, 1, 1);

        label_Name = new QLabel(auth_window);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));
        QFont font;
        font.setPointSize(12);
        label_Name->setFont(font);
        label_Name->setMidLineWidth(0);
        label_Name->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_Name, 2, 0, 1, 1);

        lineEdit = new QLineEdit(auth_window);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 1, 1, 1);

        label_Password = new QLabel(auth_window);
        label_Password->setObjectName(QString::fromUtf8("label_Password"));
        label_Password->setFont(font);
        label_Password->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_Password, 3, 0, 1, 1);

        lineEdit_2 = new QLineEdit(auth_window);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 3, 1, 1, 1);

        registerPushButton_2 = new QPushButton(auth_window);
        registerPushButton_2->setObjectName(QString::fromUtf8("registerPushButton_2"));

        gridLayout->addWidget(registerPushButton_2, 5, 1, 1, 1);

        labelWelcome = new QLabel(auth_window);
        labelWelcome->setObjectName(QString::fromUtf8("labelWelcome"));
        labelWelcome->setFont(font);
        labelWelcome->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelWelcome, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, loginPushButton);
        QWidget::setTabOrder(loginPushButton, registerPushButton_2);

        retranslateUi(auth_window);

        QMetaObject::connectSlotsByName(auth_window);
    } // setupUi

    void retranslateUi(QWidget *auth_window)
    {
        auth_window->setWindowTitle(QCoreApplication::translate("auth_window", "Form", nullptr));
        loginPushButton->setText(QCoreApplication::translate("auth_window", "Log In", nullptr));
        label_Name->setText(QCoreApplication::translate("auth_window", "name", nullptr));
        label_Password->setText(QCoreApplication::translate("auth_window", "password", nullptr));
        registerPushButton_2->setText(QCoreApplication::translate("auth_window", "Register", nullptr));
        labelWelcome->setText(QCoreApplication::translate("auth_window", "authentificate yourself", nullptr));
    } // retranslateUi

};

namespace Ui {
    class auth_window: public Ui_auth_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTH_WINDOW_H
