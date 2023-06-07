#ifndef GAME_H
#define GAME_H
#include "Board.h"
#include "Piece.h"
#include "Move.h"


class Game
{
public:
	void start();
	void play();
	void end();
	Game();

private:
	Board board;
	std::vector<Piece> _whitePieces;
	std::vector<Piece> _blackPieces;


};


#endif // !GAME_H


