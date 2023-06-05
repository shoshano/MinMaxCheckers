#include "Board.h"

void Board::defineStrings() {
    ws = w;
    ws = ws + ws + ws;
    bp = bp + b + bp;
    wp = wp + wh + wp;
}

void Board::print() {
    std::cout <<"    A  B  C  D  E  F  G  H ";
    for (int i = 0; i < 8; i++) {
        std::cout << "\n " << i + 1 << " ";
        for (int j = 0; j < 8; j++) {
            std::cout << _board[i][j];
        }
    }
    std::cout << "\n";
}

void Board::createBoard()
{

    _board = { {ws, bs, ws, bs, ws, bs, ws, bs },
               {bs, ws, bs, ws, bs, ws, bs, ws },
               {ws, bs, ws, bs, ws, bs, ws, bs }, 
               {bs, ws, bs, ws, bs, ws, bs, ws },
               {ws, bs, ws, bs, ws, bs, ws, bs }, 
               {bs, ws, bs, ws, bs, ws, bs, ws },
               {ws, bs, ws, bs, ws, bs, ws, bs },
               {bs, ws, bs, ws, bs, ws, bs, ws } };
}

Board::Board() {
    defineStrings();
    createBoard();
}

dVector Board::getBoard()
{
    return _board;
}

void Board::setPositionOnBoard(int x, int y, std::string img)
{
    _board[x][y] = img;
}

std::string Board::getWhiteSquere()
{
    return ws;
}

std::string Board::getWhitePiece()
{
    return wp;
}

std::string Board::getBlackPiece()
{
    return bp;
}

std::string Board::getBlackSquere()
{
    return bs;
}
