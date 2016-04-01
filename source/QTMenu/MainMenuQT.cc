#include <QtGui>

#include "MainMenuQT.h"

#include <vector>
#include <iostream>
MainMenuQT::MainMenuQT()
{
  //Creating all the used widgets
  
  //Help
  endMenu = new EndMenuQT(this);
  loginMenu = new LoginMenuQT(this);
  tournamentMenu = new TournamentMenuQT(this);
  

    //connections for the menus
   QFont font("League Gothic",22, true );
  font.setBold(true);
  font.setItalic(true);


  //Creating all the buttons that will be created on this screen
  onePlayer = new QPushButton("One Player");
  twoPlayer = new QPushButton("Two Player");
  load = new QPushButton("Load");
  replay = new QPushButton("Replay");
  login = new QPushButton("Login");
  leaderBoard = new QPushButton("Leader Board");
  eexit = new QPushButton("Exit"); 


  //button set up
    onePlayer->setStyleSheet("border-image:url(QTMenu/Art/woodbackground.png);");
    twoPlayer->setStyleSheet("border-image:url(QTMenu/Art/woodbackground.png);");
    load->setStyleSheet("border-image:url(QTMenu/Art/woodbackground.png);");
    replay->setStyleSheet("border-image:url(QTMenu/Art/woodbackground.png);");
    login->setStyleSheet("border-image:url(QTMenu/Art/woodbackground.png);");
    leaderBoard->setStyleSheet("border-image:url(QTMenu/Art/woodbackground.png);");
    eexit->setStyleSheet("border-image:url(QTMenu/Art/woodbackground.png);");
    eexit->setMaximumHeight(60);
    leaderBoard->setMaximumHeight(60);
    login->setMaximumHeight(60);
    replay->setMaximumHeight(60);
    load->setMaximumHeight(60);
    twoPlayer->setMaximumHeight(60);
    onePlayer->setMaximumHeight(60);
    
    login->setFont(font);
    replay->setFont(font);
    onePlayer->setFont(font); 
    twoPlayer->setFont(font);
    load->setFont(font);
    leaderBoard->setFont(font);
    eexit->setFont(font);

        // onePlayer 
    // twoPlayer
    // load
    // leaderBoard
    // eexit

    
   //TODO - I Dont know what the hell this does
   QWidget *centralWidget = new QWidget;
   setCentralWidget(centralWidget);


      //TODO Make button style sheet
   //Creating the connections for the buttons
    connect(onePlayer, SIGNAL(clicked()), this, SLOT(OpenChessBoard())); 
    connect(twoPlayer, SIGNAL(clicked()), this, SLOT(OpenTournamentMenu())); 
    //connect(load, SIGNAL(clicked()), this, SLOT(OpenWindow(endMenu))); 
    connect(login, SIGNAL(clicked()), this, SLOT(OpenLoginMenu())); 
    connect(leaderBoard, SIGNAL(clicked()), this, SLOT(OpenLeaderBoard())); 
    connect(eexit, SIGNAL(clicked()), this, SLOT(close())); 

    
  //setLayout(layout);
   QGridLayout *gridLayout = new QGridLayout;
    gridLayout-> setRowMinimumHeight(0,250);
   gridLayout-> setColumnMinimumWidth(0,500);

   gridLayout -> addWidget(onePlayer,1,1,1,1);
   

   gridLayout -> addWidget(twoPlayer,5,1,1,1);
   

   gridLayout -> addWidget(load,3,1,1,1);
   
   gridLayout -> addWidget(replay,4,1,1,1);
   

   gridLayout -> addWidget(login,2,1,1,1);
   

   gridLayout -> addWidget(leaderBoard,6,1,1,1);  
   gridLayout -> addWidget(eexit,7,1,1,1);

   gridLayout-> setColumnMinimumWidth(2,500);
    gridLayout-> setRowMinimumHeight(8,75);

   centralWidget->setLayout(gridLayout);
   

   chessBoard = 0;

}

void MainMenuQT::OpenChessBoard(){
  chessBoard = new ChessBoardQT(this); 
  connect(chessBoard, SIGNAL(newWindowFunction(int &)), this ,SLOT(recieveWindow(int &)));
  chessBoard->showFullScreen();
}

void MainMenuQT::OpenLeaderBoard(){
  leaderBoardMenu = new LeaderBoardQT(this);
  connect(leaderBoardMenu, SIGNAL(newWindowFunction(int &)), this, SLOT(recieveWindow( int &)));
  leaderBoardMenu->showFullScreen();
}
void MainMenuQT::OpenLoginMenu(){
  loginMenu = new LoginMenuQT(this);
  loginMenu->showFullScreen();
}
void MainMenuQT::OpenTournamentMenu(){
  tournamentMenu = new TournamentMenuQT(this);
  tournamentMenu->showFullScreen();
}

//TODO what buttons should be handled at the main Menu
void MainMenuQT::keyPressEvent(QKeyEvent *e) {
    if(e->key() == Qt::Key_Escape){
    	pauseMenu = new PauseMenuQT(this);
    	connect(pauseMenu, SIGNAL(closeWin(int &)), this, SLOT(recieveWindow(int &)));
    	pauseMenu->showFullScreen();
    	
    }
}

void MainMenuQT::recieveWindow(int &newWin)
{
  switch (newWin)
  {
    //this->hide();
    case 1:
    {
     
      pauseMenu = new PauseMenuQT(this);
      connect(pauseMenu, SIGNAL(closeWin(int &)), this, SLOT(recieveWindow(int &)));
      pauseMenu->show();
      break;
    }
    case 2:
    {
      
      if (chessBoard!=0){
      chessBoard->close();
      
     }
     this->showFullScreen();
      break;
    }
    case 3:
    {
      close();
      break;
    }
    case 4:
    {
      close();
      break;
    }
    case 5: // login menu
    {
      loginMenu->close();
      this->showFullScreen();
    }
    case 6: // login menu
    {
      leaderBoardMenu->close();
      this->showFullScreen();
    }
  }

}
void MainMenuQT::paintEvent(QPaintEvent *PE)
{

  QImage logo("QTMenu/Art/ChessMasterLogo.png");
  QPainter paint(this); 
  paint.drawImage(375,70, logo);

}