#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrSignUp = new SignUp();
    ptrLogin = new Login();
    ptrForgotPassword = new ForgotPassword();
}

MainWindow::~MainWindow()
{
    delete ptrSignUp;
    delete ptrLogin;
    delete ptrForgotPassword;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ptrSignUp->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    ptrLogin->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    ptrForgotPassword->show();
}

