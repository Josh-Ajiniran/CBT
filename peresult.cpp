#include "peresult.h"
#include "ui_peresult.h"
#include <QMessageBox>
#include<QFile>
#include<QTextStream>
#include <QMessageBox>
#include<QFileDialog>
#include <QPicture>
#include <QTime>
#include <QLabel>
peresult::peresult(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::peresult)
{
    ui->setupUi(this);
    ui->label_7->setText(getInformationTxtInfo(2) + "("+getInformationTxtInfo(4) + ")");
    ui->label_9->setText(getresult(1));
    ui->label_10->setText(getresult(2));
    ui->label_11->setText(getresult(3));
    ui->label_12->setText(getresult(4));
    ui->label_13->setText(getresult(5));
    ui->label_14->setText(getresult(6));



}

peresult::~peresult()
{

    delete ui;
}
QString peresult::getInformationTxtInfo(int x){
       QString information;

       QFile file("C:/DLCF CBTest/SUB/files/system/sling/file/current/current.dpt");
       file.open(QFile::ReadOnly | QFile::Text);
       QTextStream in(&file);
       QString line[x];   //the index of this array is the line of the text you want to extract
       for(int i = 1;i<=x;i++){
                line[0] = in.readLine();   //the index here only stores the value of the extracted text
               information = line[0]; //prints out the extracted text
}
       file.close();
       return information;
   }
QString peresult::getresult(int x){
       QString information;

       QFile fileh("C:/SUB/files/system/sling/file/datafile/result/"+getInformationTxtInfo(1)+".dpt");
       fileh.open(QFile::ReadOnly | QFile::Text);
       QTextStream in(&fileh);
       QString line[x];   //the index of this array is the line of the text you want to extract
       for(int i = 1;i<=x;i++){
                line[0] = in.readLine();   //the index here only stores the value of the extracted text
               information = line[0]; //prints out the extracted text
}
       fileh.close();
       return information;
   }

void peresult::on_pushButton_clicked()
{hide();
    loginDialog = new LoginDialog(this);
    loginDialog->show();
}
