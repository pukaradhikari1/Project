/********************************************************************************
** Form generated from reading UI file 'forgotpassword.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPASSWORD_H
#define UI_FORGOTPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ForgotPassword
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *txtEmail;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtPassword;
    QPushButton *btnNext;

    void setupUi(QDialog *ForgotPassword)
    {
        if (ForgotPassword->objectName().isEmpty())
            ForgotPassword->setObjectName("ForgotPassword");
        ForgotPassword->resize(450, 282);
        ForgotPassword->setMaximumSize(QSize(1000, 756));
        formLayoutWidget = new QWidget(ForgotPassword);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(60, 50, 361, 101));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        txtEmail = new QLineEdit(formLayoutWidget);
        txtEmail->setObjectName("txtEmail");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtEmail);

        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtPassword = new QLineEdit(formLayoutWidget);
        txtPassword->setObjectName("txtPassword");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtPassword);

        btnNext = new QPushButton(ForgotPassword);
        btnNext->setObjectName("btnNext");
        btnNext->setGeometry(QRect(350, 170, 61, 41));

        retranslateUi(ForgotPassword);

        QMetaObject::connectSlotsByName(ForgotPassword);
    } // setupUi

    void retranslateUi(QDialog *ForgotPassword)
    {
        ForgotPassword->setWindowTitle(QCoreApplication::translate("ForgotPassword", "Forgot Password Page", nullptr));
        label->setText(QCoreApplication::translate("ForgotPassword", "Email Address", nullptr));
        label_2->setText(QCoreApplication::translate("ForgotPassword", "Phone Number", nullptr));
        btnNext->setText(QCoreApplication::translate("ForgotPassword", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ForgotPassword: public Ui_ForgotPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSWORD_H
