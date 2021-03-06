######################################################################
# Automatically generated by qmake (2.01a) Fri Apr 1 16:52:43 2016
######################################################################
QMAKE_CXXFLAGS+= -std=c++0x
QMAKE_LFLAGS += -std=c++0x
QMAKE_CXX = g++11
QMAKE_LINK = g++11
TEMPLATE = app
TARGET = chessMaster
DEPENDPATH += . Menu Piece Players QTMenu Rules
INCLUDEPATH += . Piece Rules Menu Players QTMenu

# Input
HEADERS += Board.h \
           Chat.h \
           ChessBoard.h \
           chessGameGUI.h \
           Database.h \
           Definitions.h \
           Errors.h \
           status.h \
           Tournament.h \
           userInfo.h \
           Menu/EndMenu.h \
           Menu/GenericMenu.h \
           Menu/LeaderBoard.h \
           Menu/LoginMenu.h \
           Menu/MainMenu.h \
           Menu/PauseMenu.h \
           Menu/TournamentMenu.h \
           Piece/BishopPiece.h \
           Piece/EmptyPiece.h \
           Piece/KingPiece.h \
           Piece/KnightPiece.h \
           Piece/PawnPiece.h \
           Piece/Piece.h \
           Piece/QueenPiece.h \
           Piece/RookPiece.h \
           Players/AIPlayer.h \
           Players/Player.h \
           Players/RegisteredPlayer.h \
           Players/ReplayPlayer.h \
           QTMenu/ChessBoardQT.h \
           QTMenu/EndMenuQT.h \
           QTMenu/getStringWindowQT.h \
           QTMenu/LeaderBoardQT.h \
           QTMenu/loadMenuQT.h \
           QTMenu/LoginMenuQT.h \
           QTMenu/MainMenuQT.h \
           QTMenu/PauseMenuQT.h \
           QTMenu/QTClock.h \
           QTMenu/QTDisplayWindow.h \
           QTMenu/TournamentMenuQT.h \
           Rules/BishopMove.h \
           Rules/CastlingMove.h \
           Rules/CheckTurn.h \
           Rules/ConsecutiveMove.h \
           Rules/FriendlyPiece.h \
           Rules/KingInCheck.h \
           Rules/KingMove.h \
           Rules/KnightMove.h \
           Rules/MyKingInCheck.h \
           Rules/NotEnoughPieces.h \
           Rules/PawnCapture.h \
           Rules/PawnMove.h \
           Rules/PieceInWay.h \
           Rules/Promotion.h \
           Rules/QueenMove.h \
           Rules/RookMove.h \
           Rules/Rule.h
SOURCES += Board.cc \
           Chat.cc \
           ChessBoard.cc \
           chessGameGUI.cc \
           Database.cc \
           Definitions.cc \
           main.cpp \
           status.cc \
           Tournament.cc \
           userInfo.cpp \
           Menu/EndMenu.cc \
           Menu/LeaderBoard.cc \
           Menu/LoginMenu.cc \
           Menu/MainMenu.cc \
           Menu/PauseMenu.cc \
           Menu/TournamentMenu.cc \
           Piece/BishopPiece.cc \
           Piece/EmptyPiece.cc \
           Piece/KingPiece.cc \
           Piece/KnightPiece.cc \
           Piece/PawnPiece.cc \
           Piece/QueenPiece.cc \
           Piece/RookPiece.cc \
           Players/Player.cc \
           Players/RegisteredPlayer.cc \
           QTMenu/ChessBoardQT.cc \
           QTMenu/EndMenuQT.cc \
           QTMenu/getStringWindowQT.cc \
           QTMenu/LeaderBoardQT.cc \
           QTMenu/loadMenuQT.cc \
           QTMenu/LoginMenuQT.cc \
           QTMenu/MainMenuQT.cc \
           QTMenu/PauseMenuQT.cc \
           QTMenu/QTClock.cpp \
           QTMenu/QTDisplayWindow.cpp \
           QTMenu/TournamentMenuQT.cc \
           Rules/BishopMove.cc \
           Rules/CastlingMove.cc \
           Rules/CheckTurn.cc \
           Rules/ConsecutiveMove.cc \
           Rules/FriendlyPiece.cc \
           Rules/KingInCheck.cc \
           Rules/KingMove.cc \
           Rules/KnightMove.cc \
           Rules/MyKingInCheck.cc \
           Rules/NotEnoughPieces.cc \
           Rules/PawnCapture.cc \
           Rules/PawnMove.cc \
           Rules/PieceInWay.cc \
           Rules/Promotion.cc \
           Rules/QueenMove.cc \
           Rules/RookMove.cc
