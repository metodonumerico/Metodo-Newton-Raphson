#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>  //Bookstore for use of text strings
#include <cmath>    //Library for use of mathematical functions


#define MAX_ITERACIONES 100



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Conexiones
    connect(ui->Procesar,SIGNAL(clicked()),this,SLOT(metodo()));
    connect(ui->Borrar,SIGNAL(clicked()),this,SLOT(borrar()));
    connect(ui->Salir,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

double MainWindow::funcion(double c)  {

    return (exp(-c)-c);//returns the calculation of the equation

    return (-exp(-c)-c);//returns the calculation of the derivative
}

void MainWindow::metodo() {
    QString temp,temp2,temp3,temp4; //Temporary use text strings
    double x1=ui->X1->value();   //Retrieves the X1 value of the spinbox
    double x2=ui->X2->value();   //Recupera el valor de X2 del spinbox
    double err=ui->Err->value(); //Retrieves the X2 value of the spinbox
    double xr=0.0;
    double ea=100.0;
  double iter=0;
    while((ea>err)&&(iter<x2)) {
        xr=(x1-(funcion(x1))/funcion(xr)); //The equation is calculated numerically to enter the cycle
        ea=100*std::abs((xr-x1)/xr);//The error is calculated
        if ((x1-(funcion(x1))/funcion(xr))<0)  //The function in X1 and Xr is evaluated
            x2=xr;
        if ((x1-(funcion(x1))/funcion(xr))>0)  //The function in X1 and Xr is evaluated
           x1=xr;
        iter=iter+1;

    }
    temp.append("Raiz=").append(temp2.setNum(xr)).append("\nError=").append(temp3.setNum(ea)).append("\nIteraciones=").append(temp4.setNum(iter));
    //The text is prepared to be presented
    ui->Texto->setText(temp);   //The text is presented
}

void MainWindow::borrar(){
    ui->X1->setValue(0.0);  //The spinbox is deleted
    ui->X2->setValue(0.0);
    ui->Err->setValue(0.0);
    ui->Texto->clear();     //Text is deleted
}


