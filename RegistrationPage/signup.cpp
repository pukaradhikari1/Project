#include "signup.h"
#include "ui_signup.h"
#include <qsqldatabase.h>
#include <QFile>
#include <QSqlQuery>
#include <QSqlError>


SignUp::SignUp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}




void SignUp::on_btnSave_clicked()
{
    QString FirstName=ui->txtFirstName->text();
    QString MiddleName=ui->txtMiddle->text();
    QString LastName=ui->txtLastName->text();
    QString EmailAddress=ui->txtEmail->text();
    QString PhoneNumber=ui->txtPhone->text();
    QString Password=ui->txtPassword->text();

    qDebug()<<"First Name"<<FirstName<<"Middle Name "<<MiddleName<<"Last Name "<<LastName<<"Email Address: "<<EmailAddress<<"Phone NUmber"<<PhoneNumber<<"Password "<<Password;
    QSqlDatabase database= QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/Hp Victus/Desktop/project/Database/data");
    if(QFile::exists("C:/Users/Hp Victus/Desktop/project/Database/data"))
    {
        qDebug() << "Database file exists";
    }
    else
    {
        qDebug() <<"Database file doesnot exists";
    }
    if(!database.open())
    {
        qDebug() <<"Error:Unable to open database";
    }
    else
    {
        qDebug() <<"Database open successfully";
    }
    QSqlQuery query(database);

    query.prepare("insert into User(FirstName,MiddleName,LastName,EmailAddress,PhoneNumber,Password) values('"+FirstName+"','"+MiddleName+ "','"+LastName +"','"+EmailAddress+"','"+PhoneNumber+"','"+Password+"') ");
    query.exec();
    qDebug()<<"last error:"<<query.lastError().text();
    database.close();
}

