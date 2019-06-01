#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "particula.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(650,650);
    this->setFixedSize(650,650);

    timer = new QTimer(this);
    escena = new QGraphicsScene();
    ui->fondo->setScene(escena);
    particle = new Particula(10,30,5,5,5);
    timer->stop();
    escena->addItem(particle);
    connect(timer,SIGNAL(timeout()),this,SLOT(actualizarEscena()));

}

void MainWindow::actualizarEscena(void)
{
    particle->moverParticula(2, 500);
    particle->colisionParticula(500, 500);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_boton_clicked()
{
   timer->start(50);
}
