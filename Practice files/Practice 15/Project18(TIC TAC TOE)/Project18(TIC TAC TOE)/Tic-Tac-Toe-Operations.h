#ifndef TIC_TAC_TOE_OPERATIONS_H
#define TIC_TAC_TOE_OPERATIONS_H

void drawBoard(char [][3]);
bool fillBoard(char [][3], int , int , char , int );
bool checkHorizontally(char [][3], int , int );
bool checkVertically(char [][3], int , int );
bool isBoardFull(char [][3], int , int );
bool checkFirstDiagonal(char [][3], int , int );
bool checkSecondDiagonal(char [][3], int , int );
bool isGameFinished(char [][3], int , int );



#endif 
