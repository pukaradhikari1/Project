#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include<QSqlDatabase>


namespace Ui {
class SignUp;
}

class SignUp : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();

private slots:
    void on_btnSave_clicked();

private:
    Ui::SignUp *ui;
};

#endif // SIGNUP_H
