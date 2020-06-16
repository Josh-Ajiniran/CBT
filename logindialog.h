#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H
#include "profiledialog.h"
#include "result.h"
#include <QDialog>

namespace Ui {
class LoginDialog;
}
class ProfileDialog;
class Result;
class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();



private:
    Ui::LoginDialog *ui;
    ProfileDialog *profileDialog;
    Result *result;
};

#endif // LOGINDIALOG_H
