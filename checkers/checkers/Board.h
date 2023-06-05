#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <string>
#include <vector>
#include "Piece.h"

using dVector = std::vector<std::vector<std::string>>;

class Board
{
    dVector _board;



    

public:

    void print();
    void createBoard();
    Board();
    dVector getBoard();
    void setPositionOnBoard(int x, int y, std::string img);

    std::string getWhiteSquere();
    std::string getBlackSquere();
    std::string getWhitePiece();
    std::string getBlackPiece();
private:
    // do wyswitlania
    char w = 219; // to jest bia³e pole u mnie 1/3 bia³ego pola
    char b = 4; // czerny pionek znaczek
    char wh = 111; // czerny pionek znaczek

    std::string ws; // puste biale pole
    std::string bs = "   "; // puste czarne pole
    std::string wp = " "; // pole z bia³ym pionkeim
    std::string bp = " ";   // pole z czrnym pionkiem
    void defineStrings();

};


#endif // !BOARD_H


