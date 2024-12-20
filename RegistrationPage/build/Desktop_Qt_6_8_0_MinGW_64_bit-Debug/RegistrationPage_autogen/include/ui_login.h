/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtEmail;
    QLabel *label_2;
    QLineEdit *txtPassword;
    QPushButton *btnSave;
    QPushButton *btnReset;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(394, 179);
        Login->setMinimumSize(QSize(0, 0));
        formLayoutWidget = new QWidget(Login);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(29, 29, 341, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtEmail = new QLineEdit(formLayoutWidget);
        txtEmail->setObjectName("txtEmail");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtEmail);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtPassword = new QLineEdit(formLayoutWidget);
        txtPassword->setObjectName("txtPassword");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtPassword);

        btnSave = new QPushButton(Login);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(300, 120, 61, 31));
        btnReset = new QPushButton(Login);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(190, 120, 61, 31));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login Page", nullptr));
        label->setText(QCoreApplication::translate("Login", "Email Address", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Password", nullptr));
        btnSave->setText(QCoreApplication::translate("Login", "Save", nullptr));
        btnReset->setText(QCoreApplication::translate("Login", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
