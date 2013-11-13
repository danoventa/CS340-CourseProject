#include "mainwindow.h"
#include "ui_mainwindow.h"
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



MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  Hero=new Character(100,0,10,2);
  //Enemies = (Enemy*)malloc(sizeof(Enemy*)*3);
  //Enemies[0]=new Bomber(20,0,0);
  /*battledata* bd=new battledata('h',25,1,1,'c',50,2,2,'0',1,1,1,50);
  Enemy** elist=bd->retEnemies();
  Enemies[0]=elist[0];
  Enemies[1]=elist[1];
  Enemies[2]=elist[2];
  */
  //Enemies=bd->retEnemies();
  //Enemies[0]=new Hunter(20,0,0,false);


  /*-------------enemy----------------
  Enemies[0]=new Bomber(20,0,0);
  Enemies[1]=new Cannon(20,1,1);
  Enemies[2]=new Enemy(20,2,2);
  Enemies[0]->setAlive(true);
  Enemies[1]->setAlive(true);
  Enemies[2]->setAlive(false);
  */

  //mainAttack=new attackmove(10);
  mainAttack=new attackmove(10);
  aL=new attackList();
  aL->addMove(new shotgun(20));
  aL->addMove(new xgun(10));
  aL->addMove(new attackmove(15));
  //connect(&parent,MainWindow::on_enemyDead(),&Enemies[1],Enemy::Died());

  //std::cout<<"initialized characters\n";

  //before
  ui->setupUi(this);


  Labels[0]=ui->panel0;
  Labels[1]=ui->panel1;
  Labels[2]=ui->panel2;
  QFont serifFont("Times", 12, QFont::Bold);
  for(int i=0;i<3;i++){
     Labels[i]->setStyleSheet("QLabel {color : white; }");
    Labels[i]->setFont(serifFont);
    Labels[i]->setVisible(false);
  }
  ui->HeroHealthBar->setFont(serifFont);
  ui->HeroHealthBar->setStyleSheet("QProgressBar {color : white; }");
    ui->HeroHealthBar->setVisible(false);
  //Labels[0]->setPalette();

  //after
  //ui->gDisplay->resize(201,201);
ui->HeroHealthBar->setValue(Hero->getHP());
  //ui->setupUi(this);
//ui->gDisplay->setText(QDir::currentPath());
ui->gDisplay->setVisible(false);
  qApp->installEventFilter( this );


  //updateArena();
  //startHeroTurn();
    //startBattle();
  inOver=true;
  inBattle=false;
  inStory=false;

  //paintEvent;
  repaint();


}

MainWindow::~MainWindow()
{
  delete ui;
}



void MainWindow::keyReleaseEvent(QKeyEvent *ke){
   //std::cout << ke->key() << "\n";
    if(inBattle){
   if(ke->key()==16777236){
       moveCharRight();
       endHeroTurn();
       updateArena();
       repaint();
       //std::cout<<"right\n";
     }else if(ke->key()==16777234){
       //std::cout<<"left\n";
       moveCharLeft();
       endHeroTurn();
       updateArena();
       repaint();
     }else if(ke->key()==32){
       if(Hero->isTurn()){
          doAttack();
          endHeroTurn();
          updateArena();
          repaint();
         }
     }else if(ke->key()==90){
       if(Hero->isTurn()){
          doSpecialAttack();
          //endHeroTurn();
          //updateArena();
          //repaint();
         }
     }else if(ke->key()==88){
              //if(Hero->isTurn()){
                 endHeroTurn();
                 //endHeroTurn();
                 //updateArena();
                 //repaint();


     }
    }else if(inOver){
        if(ke->key()==32){
            startBattle();
            repaint();
        }

    }

}
void MainWindow::startBattle(){
    inBattle=true;
    inOver=false;
    inStory=false;
    int i;

    //ui->
    Enemies[0]=new Bomber(20,0,0);
    Enemies[1]=new Cannon(20,1,1);
    Enemies[2]=new Enemy(20,2,2);
    Enemies[0]->setAlive(true);
    Enemies[1]->setAlive(true);
    Enemies[2]->setAlive(false);
    for(i=0;i<3;i++){
        if(Enemies[i]->getAlive()){
            Labels[i]->setVisible(true);

         }
    }
    ui->HeroHealthBar->setVisible(true);

    startHeroTurn();
}

void MainWindow::paintEvent(QPaintEvent *){
    QPainter* g = new QPainter(this);


    QString bgfn="images/bg.jpg";
    //QString sandfn="images/sand.png";
    QString sandfn="images/sandpanel.png";
    //QString redfn="images/red.png";
    //QString purpfn="images/cann.png";
    //QString herofn="images/pirate.gif";
    QString herofn="images/piratebat.png";
    QImage bgpic(bgfn);
    QImage sandpic(sandfn);
    //QImage redpic(redfn);
    //QImage purppic(purpfn);
    QImage heropic(herofn);
    if(inBattle){
        drawBattle(g);
        /*
    g->drawImage(0,0,bgpic);

    int x;
    int y;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            x=90+j*72;
            y=180-i*66;
            g->drawImage(x,y,sandpic);
            if(i==Enemies[0]->getY() && j==Enemies[0]->getX()){
               //Tiles[i][j]->setPixmap(QPixmap::fromImage(redpic));
                g->drawImage(x,y,Enemies[0]->getPic());


              }else if(i==Enemies[1]->getY() && j==Enemies[1]->getX()){
               //Tiles[i][j]->setPixmap(QPixmap::fromImage(purppic));
                g->drawImage(x,y,Enemies[1]->getPic());

              }else if(i==Enemies[2]->getY() && j==Enemies[2]->getX()){
             // Tiles[i][j]->setPixmap(QPixmap::fromImage(purppic));
                g->drawImage(x,y,Enemies[2]->getPic());
            }
                       //else{
                 //Tiles[i][j]->setPixmap(QPixmap::fromImage(sandpic));
               // g->drawImage(x,y,sandpic);
              //}
          }
      }
    //rbgpic.
    /*
    g->drawImage(100,250,sandpic);
    g->drawImage(140,250,heropic);
    g->drawImage(180,250,sandpic);


    g->drawImage(90,250,sandpic);
    g->drawImage(162,250,sandpic);
    g->drawImage(234,250,sandpic);
    if(Hero->getPanel()==0){
        g->drawImage(100,230,heropic);
    }else if(Hero->getPanel()==1){

        g->drawImage(172,230,heropic);

    }else if(Hero->getPanel()==2){

        g->drawImage(244,230,heropic);
    }*/
    }else if(inOver){//end if in battle
        //draws over world
       // g->setBrush(Qt::BrushStyle->);

        g->drawRect(100,100,100,100);
        g->drawText(110,140,"Click to");
        g->drawText(110,160,"Start Battle");
    }


    //g->end();
    g->end();
}
void MainWindow::drawBattle(QPainter* g){
    QString bgfn="images/bg.jpg";
    //QString sandfn="images/sand.png";
    QString sandfn="images/sandpanel.png";
    //QString redfn="images/red.png";
    //QString purpfn="images/cann.png";
    //QString herofn="images/pirate.gif";
    QString herofn="images/piratebat.png";
    QImage bgpic(bgfn);
    QImage sandpic(sandfn);
    //QImage redpic(redfn);
    //QImage purppic(purpfn);
    QImage heropic(herofn);
    g->drawImage(0,0,bgpic);

    int x;
    int y;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            x=90+j*72;
            y=180-i*66;
            g->drawImage(x,y,sandpic);
            if(i==Enemies[0]->getY() && j==Enemies[0]->getX()){
               //Tiles[i][j]->setPixmap(QPixmap::fromImage(redpic));
                g->drawImage(x,y,Enemies[0]->getPic());


              }else if(i==Enemies[1]->getY() && j==Enemies[1]->getX()){
               //Tiles[i][j]->setPixmap(QPixmap::fromImage(purppic));
                g->drawImage(x,y,Enemies[1]->getPic());

              }else if(i==Enemies[2]->getY() && j==Enemies[2]->getX()){
             // Tiles[i][j]->setPixmap(QPixmap::fromImage(purppic));
                g->drawImage(x,y,Enemies[2]->getPic());
            }
                       //else{
                 //Tiles[i][j]->setPixmap(QPixmap::fromImage(sandpic));
               // g->drawImage(x,y,sandpic);
              //}
          }
      }
    //rbgpic.
    /*
    g->drawImage(100,250,sandpic);
    g->drawImage(140,250,heropic);
    g->drawImage(180,250,sandpic);
    */

    g->drawImage(90,250,sandpic);
    g->drawImage(162,250,sandpic);
    g->drawImage(234,250,sandpic);
    if(Hero->getPanel()==0){
        g->drawImage(100,230,heropic);
    }else if(Hero->getPanel()==1){

        g->drawImage(172,230,heropic);

    }else if(Hero->getPanel()==2){

        g->drawImage(244,230,heropic);
    }
}

void MainWindow::updateArena(){


    if(Enemies[0]->getY()>=0 && Enemies[0]->getY()<=2&&Enemies[0]->getAlive()){
        Labels[0]->setText(QString::number(Enemies[0]->getHP()));
        Labels[0]->setGeometry(40*Enemies[0]->getX()+110,30*(2-Enemies[0]->getY())+174,31,17);
      }else{
        Labels[0]->setText(QString::number(Enemies[0]->getHP()));
        //Labels[0]->setBaseSize(0,0);
        Labels[0]->setVisible(false);
      }
    if(Enemies[1]->getY()>=0 && Enemies[1]->getY()<=2&&Enemies[1]->getAlive()){
        Labels[1]->setText(QString::number(Enemies[1]->getHP()));
         Labels[1]->setGeometry(40*Enemies[1]->getX()+110,30*(2-Enemies[1]->getY())+174,31,17);
      }else{
        Labels[1]->setText(QString::number(Enemies[1]->getHP()));
       // Labels[1]->setBaseSize(0,0);
        Labels[1]->setVisible(false);
      }
    if(Enemies[2]->getY()>=0 && Enemies[2]->getY()<=2 &&Enemies[2]->getAlive()){
        Labels[2]->setText(QString::number(Enemies[2]->getHP()));
         Labels[2]->setGeometry(40*Enemies[2]->getX()+110,30*(2-Enemies[2]->getY())+174,31,17);
      }else{
          Labels[2]->setText(QString::number(Enemies[0]->getHP()));
        //Labels[2]->setGeometry(-100,-100,10,10);
        Labels[2]->setVisible(false);
      }


    ui->HeroHealthBar->setValue(Hero->getHP());

    repaint();

}
void MainWindow::startHeroTurn(){
 /*ui->gDisplay->append("HeroTurn ");
 ui->gDisplay->append(QString::number(Enemies[0]->getHP()));
ui->gDisplay->append(QString::number(Enemies[1]->getHP()));
 */
Hero->setCanMove(true);
  Hero->setTurn(true);
  //ui->leftButton->setDisabled(false);
  //ui->leftButton->setDisabled(false);
}

void MainWindow::endHeroTurn(){
  if(on_enemyDead()){
     return;
    }
   Hero->setCanMove(false);
  Hero->setTurn(false);
  updateArena();
  repaint();
  //ui->leftButton->setDisabled(true);
  //ui->leftButton->setDisabled(true);
  startEnemyTurn();

}

void MainWindow::startEnemyTurn(){
  //ui->gDisplay->append("Enemyturn ");

  //connect(mainclock, SIGNAL(timeout()), this, SLOT(update()));
  //mainclock->start(1000);

  //ui->gDisplay->append(QString::number(Enemies[0]->getHP()));
  //ui->gDisplay->append(QString::number(Enemies[1]->getHP()));

  if(Enemies[0]->getAlive()==true){
    Enemies[0]->doTurn(Hero);
    }

  if(Enemies[1]->getAlive()==true){
      Enemies[1]->doTurn(Hero);
    }
 // updateArena();
  //Enemies[2]->doTurn(Hero);
 updateArena();
  endEnemyTurn();


}

void MainWindow::endEnemyTurn(){
  updateArena();
  repaint();
  startHeroTurn();
}










/*
void MainWindow::on_leftButton_released()
{

}

void MainWindow::on_rightButton_released()
{

}
*/
void MainWindow::moveCharLeft(){
  if(Hero->getCanMove() && Hero->isTurn()){
      if(Hero->getPanel()==2){
          Hero->setPanel(1);
          Hero->setCanMove(false);
          //getHero()->setTurn(false);
          //endHeroTurn();
        }else if(Hero->getPanel()==1){
          Hero->setPanel(0);
          Hero->setCanMove(false);
          //getHero()->setTurn(false);
          //endHeroTurn();
        }
    }

}
/*
void MainWindow::on_leftButton_clicked()
{
  //std::cout<<"leftclicked\n";
  moveCharLeft();
  endHeroTurn();
  updateArena();
  repaint();

}
*/
void MainWindow::moveCharRight(){
  if(Hero->getCanMove()&& Hero->isTurn()){
      if(Hero->getPanel()==0){
          Hero->setPanel(1);
          Hero->setCanMove(false);
          //getHero()->setTurn(false);
          //endHeroTurn();
        }else if(Hero->getPanel()==1){
          Hero->setPanel(2);
          Hero->setCanMove(false);
          //getHero()->setTurn(false);
          //endHeroTurn();
        }
    }
}
/*
void MainWindow::on_rightButton_clicked()
{
  //std::cout<<"rightclicked\n";

  moveCharRight();
  endHeroTurn();
  updateArena();
  repaint();
}
*/
bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
  /*
    switch( event->type() ){

        case QEvent::MouseButtonDblClick:
            qDebug() << "Mouse Button Double Clicked";
            break;
        case QEvent::MouseButtonPress:
            qDebug() << "Mouse Button Pressed";
            break;
        case QEvent::MouseButtonRelease:
            qDebug() << "Mouse Button Released";
            break;
        default:
            break;

    }
    */
    // pass the event on to the parent class
    if(inOver && event->type()==QEvent::MouseButtonRelease){
        //if(event->)
        //event->
        if(((QMouseEvent*)event)->x()>100 && ((QMouseEvent*)event)->x()<200 &&((QMouseEvent*)event)->y()>100 && ((QMouseEvent*)event)->x()<200){
            startBattle();
            repaint();
        }
    }


    return QMainWindow::eventFilter(obj, event);
}
void MainWindow::doAttack(){

  int hpanel=Hero->getPanel();
  mainAttack->doAttack(hpanel,Enemies);

  /*
  Enemy *closest=NULL;
  for(int i=0;i<3;i++){
      if(Enemies[i]->getX()==hpanel){
          //if(closest!=NULL){
            //  if(closest->getY()<Enemies[i]->getY()){
              //    closest=Enemies[i];
                //}
            //}else{
             // closest=Enemies[i];
           // }
            //
          closest=Enemies[i];
        }
    }
  if(closest==NULL){
      return;
    }else{
      closest->getDamaged(10);
    }
    */



  }
void MainWindow::doSpecialAttack(){
  attackmove* am=aL->getAttack();
  if(am!=NULL){
      am->doAttack(Hero->getPanel(),Enemies);
      endHeroTurn();
      updateArena();
      repaint();

    }
}

bool MainWindow::on_enemyDead(){
  //std::cout<<"onenemydead\n";
  bool alldead=true;
  int i;
  for(i=0;i<3;i++){
      if(Enemies[i]->getAlive()==true){
          alldead=false;
        }
    }
  if(alldead){
      endBattle();
    }
  return alldead;

}

void MainWindow::endBattle(){
  //std::cout<<"onendbattle\n";
  //int i;
 // int j;
  /*
  for(i=0;i<3;i++){
      for(j=0;j<3;j++){
          Tiles[i][j]->setVisible(false);
          Tiles[i][j]->setEnabled(false);
        }
    }
  ui->HeroHealthBar->setVisible(false);
  ui->panelH0->setVisible(false);
  ui->panelH1->setVisible(false);
  ui->panelH2->setVisible(false);
  ui->panel1->setVisible(false);
  ui->panel2->setVisible(false);
  ui->endButton->setVisible(false);
  ui->endButton->setEnabled(false);
  ui->attButton->setVisible(false);
  ui->attButton->setEnabled(false);
  ui->leftButton->setVisible(false);
  ui->leftButton->setEnabled(false);
  ui->rightButton->setVisible(false);
  ui->rightButton->setEnabled(false);
  */

  //ui->gDisplay->setVisible(true);
  //ui->gDisplay->setText("You Win!\nGained n XP");
    for(int i=0;i<3;i++){

      Labels[i]->setVisible(false);
    }

      ui->HeroHealthBar->setVisible(false);

  inBattle=false;
  inOver=true;
  inStory=false;
}




