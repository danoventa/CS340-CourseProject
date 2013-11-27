#include "mainwindow.h"
#include "ui_mainwindow.h"
//battle includes------------------
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "QEvent"
#include "QKeyEvent"
#include "QImage"
#include "QPainter"
#include "QButtonGroup"
//#in
#include "QLabel"
#include "QDebug"
#include <string.h>
#include "QTextBrowser"
#include "shotgun.h"
#include "xgun.h"
#include "QDir"
#include "brokengun.h"
#include "swordsman.h"
#include "brokenshot.h"
#include "skeleton.h"
#include "hookslash.h"
#include "swordslash.h"
//end battle includes------------

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //wm.setModal(true);
    //wm.exec(); //things remain the same as when the window was closed.
   // wm.show();
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    inStory=false;
    inOver=true;
}

void MainWindow::on_pushButton_4_clicked()
{
    wm.~worldmap();
    exit(0);
}
bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    // pass the event on to the parent class
    /*if(inOver && event->type()==QEvent::MouseButtonRelease){
        //if(event->)
        //event->
        if(((QMouseEvent*)event)->x()>100 && ((QMouseEvent*)event)->x()<200 &&((QMouseEvent*)event)->y()>100 && ((QMouseEvent*)event)->y()<200){
            //startBattle('b',2,0,0,'c',2,1,1,'0',0,2,2);
            startBattle('e',2,0,0,'h',2,1,1,'c',1,2,2);
            repaint();
        }
        if(((QMouseEvent*)event)->x()>250 && ((QMouseEvent*)event)->x()<350 &&((QMouseEvent*)event)->y()>100 && ((QMouseEvent*)event)->y()<200){
            startBattle('s',1,0,0,'k',1,1,1,'0',0,2,2);
            repaint();
        }
    }
    */


    return QMainWindow::eventFilter(obj, event);
}

void MainWindow::paintEvent(QPaintEvent *){
    QPainter* g = new QPainter(this);
    //if(inBattle){
        //drawBattle(g);

   // }else if(inOver){//end if in battle
        //draws over world
       // g->setBrush(Qt::BrushStyle->);
        drawOverWorld(g);

    //}


    //g->end();
    g->end();
}
void MainWindow::drawOverWorld(QPainter* g){
    /*QString goldt="Gold:";
    goldt.append(QString::number(Hero->getGold()));
    g->drawText(20,50,goldt);
    g->drawRect(100,100,100,100);
    g->drawText(110,140,"Click to");
    g->drawText(110,160,"Start Battle");
    g->drawRect(250,100,100,100);
    g->drawText(260,140,"Click to");
    g->drawText(260,160,"Start 2nd Battle");
    */

    g->drawImage(0,0,QImage("images/level1.png"));
    //g->drawEllipse();
    g->drawImage(10,10,QImage("images/piratebat.png"));
}
