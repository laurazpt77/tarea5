#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsItem>
#include <QPainter>
#include <QTimer>
#include "particula.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Particula *particle;
    QGraphicsScene *escena;
    QTimer *timer;


private slots:
    void on_boton_clicked();
    void actualizarEscena(void);

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
