#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this);
}

void MainWindow::tcpConnect(QString str){
    socket->connectToHost(str,1234);
    if(socket->waitForConnected(3000)){
        qDebug() << "Connected";
    }
    else{
        qDebug() << "Disconnected";
    }
}

void MainWindow::timerEvent(QTimerEvent *e){
    putData();
}

void MainWindow::putData()
{
    QDateTime datetime;
    QString str;
    qint64 msecdate;

    if(socket->state()== QAbstractSocket::ConnectedState){

        msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
        str = "set "+ QString::number(msecdate) + " " + QString::number(qrand()%(ui->sliderMax->value() - ui->sliderMin->value() + 1) + ui->sliderMin->value())+" \r\n";
        qDebug() << str;
        qDebug() << socket->write(str.toStdString().c_str()) << " bytes written";
        if(socket->waitForBytesWritten(3000)){
            qDebug() << "wrote";
        }
    }
    ui->textEdit->append(str);
}
void MainWindow::mataTempo(){
    killTimer(id);
}

void MainWindow::xablau(int tempo)
{
    //temporizador int id = startTimer(1000); killTimer(id)
    id = startTimer(tempo*1000);
}
MainWindow::~MainWindow()
{
    delete socket;
    delete ui;
}

void MainWindow::on_buttonConnect_clicked()
{
    tcpConnect(ui->lineEdit->text());
}

void MainWindow::on_buttonDisconnect_clicked()
{
    //disconnect
    socket->disconnectFromHost();
}

void MainWindow::on_buttonStart_clicked()
{
    xablau(ui->sliderTiming->value());
}

void MainWindow::on_buttonStop_clicked()
{
    mataTempo();
}
