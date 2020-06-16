#include "result.h"
#include "ui_result.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
Result::Result(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Result)
{
    ui->setupUi(this);
//    QString totalReg;
//    QFile file20("C:/DLCF CBTest/SUB/files/system/sling/file/datafile/Registered.dpt");
//        if(!file20.open(QFile::ReadOnly | QFile::Text)){
//            QMessageBox::warning(this, "WARNING", "Error 200.\nFailed to read data. Contact Technical personnel for help");
//        }
//        QTextStream out20(&file20);
//            totalReg = out20.readAll();
//            file20.close();


    csvModel = new QStandardItemModel(this);
    csvModel->setColumnCount(4);
//    csvModel->setHorizontalHeaderLabels(QStringList() /*<< "1st Column" << "2nd Column" << "3rd Column"*/);
    ui->tableView->setModel(csvModel);


    QFile file("C:/SUB/files/system/sling/file/GENERALRESULT.csv");
    if ( !file.open(QFile::ReadOnly | QFile::Text) ) {
        QMessageBox::warning(this, "WARNING", "Error 200.\nFailed to read data. Contact Technical personnel for help");
    } else {
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            line.replace('"',"");

            QList<QStandardItem *> standardItemsList;
            for (QString item : line.split(",")) {
                standardItemsList.append(new QStandardItem(item));
            }
            csvModel->insertRow(csvModel->rowCount(), standardItemsList);
        }
        file.close();
    }

}

Result::~Result()
{
    delete ui;
     delete csvModel;
}



