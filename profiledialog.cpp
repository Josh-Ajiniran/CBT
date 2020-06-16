#include "profiledialog.h"
#include "ui_profiledialog.h"
#include <QFile>
#include <QTextStream>
ProfileDialog::ProfileDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProfileDialog)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(stopwatch()));
   timer->start(100);

}

ProfileDialog::~ProfileDialog()
{
    delete ui;
}
 void ProfileDialog::stopwatch(){

     ui->regno->setText(getInformationTxtInfo(2));
     ui->gender->setText(getInformationTxtInfo(3));
     ui->dept->setText(last_time() + " Minutes");
 }
void ProfileDialog::on_pushButton_clicked()
{   hide();
    mainCbtWindow = new MainCbtWindow(this);
    mainCbtWindow->showMaximized();
}
QString ProfileDialog::getInformationTxtInfo(int x){
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
QString ProfileDialog::last_time(){
QString information;
    QFile file("C:/SUB/files/system/sling/file/left/" + getInformationTxtInfo(4) + ".dpt");
    file.open(QFile::ReadOnly | QFile::Text);
    QTextStream in(&file);
    QString line[1];   //the index of this array is the line of the text you want to extract
    for(int i = 1;i<=1;i++){
             line[0] = in.readLine();   //the index here only stores the value of the extracted text
            information = line[0]; //prints out the extracted text
}
    file.close();

return information;
}
