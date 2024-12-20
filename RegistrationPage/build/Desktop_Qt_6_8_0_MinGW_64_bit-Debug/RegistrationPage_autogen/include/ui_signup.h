/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtFirstName;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtLastName;
    QLabel *label_4;
    QLineEdit *txtEmail;
    QLabel *label_5;
    QLineEdit *txtPhone;
    QLabel *label_6;
    QLineEdit *txtPassword;
    QLineEdit *txtMiddle;
    QPushButton *btnSave;
    QPushButton *btnReset;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->setWindowModality(Qt::WindowModality::WindowModal);
        SignUp->resize(507, 304);
        SignUp->setMaximumSize(QSize(1000, 800));
        formLayoutWidget = new QWidget(SignUp);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 20, 471, 221));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtFirstName = new QLineEdit(formLayoutWidget);
        txtFirstName->setObjectName("txtFirstName");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtFirstName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtLastName = new QLineEdit(formLayoutWidget);
        txtLastName->setObjectName("txtLastName");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtLastName);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        txtEmail = new QLineEdit(formLayoutWidget);
        txtEmail->setObjectName("txtEmail");

        formLayout->setWidget(3, QFormLayout::FieldRole, txtEmail);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        txtPhone = new QLineEdit(formLayoutWidget);
        txtPhone->setObjectName("txtPhone");

        formLayout->setWidget(4, QFormLayout::FieldRole, txtPhone);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        txtPassword = new QLineEdit(formLayoutWidget);
        txtPassword->setObjectName("txtPassword");

        formLayout->setWidget(5, QFormLayout::FieldRole, txtPassword);

        txtMiddle = new QLineEdit(formLayoutWidget);
        txtMiddle->setObjectName("txtMiddle");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtMiddle);

        btnSave = new QPushButton(SignUp);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(330, 260, 83, 29));
        btnReset = new QPushButton(SignUp);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(210, 260, 83, 29));

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "SignUP Page", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "First Name", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "Middle Name", nullptr));
        label_3->setText(QCoreApplication::translate("SignUp", "Last Name", nullptr));
        label_4->setText(QCoreApplication::translate("SignUp", "Email Address", nullptr));
        label_5->setText(QCoreApplication::translate("SignUp", "Phone Number", nullptr));
        label_6->setText(QCoreApplication::translate("SignUp", "Password", nullptr));
        btnSave->setText(QCoreApplication::translate("SignUp", "Save", nullptr));
        btnReset->setText(QCoreApplication::translate("SignUp", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
