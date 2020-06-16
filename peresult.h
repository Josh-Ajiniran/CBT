#ifndef PERESULT_H
#define PERESULT_H
#include "logindialog.h"
#include <QDialog>

namespace Ui {
class peresult;
}
class LoginDialog;
class peresult : public QDialog
{
    Q_OBJECT

public:
    explicit peresult(QWidget *parent = 0);
    ~peresult();
private slots:
    QString getInformationTxtInfo(int x);
    QString getresult(int x);

    void on_pushButton_clicked();

private:
    Ui::peresult *ui;
    LoginDialog *loginDialog;
};

#endif // PERESULT_H
