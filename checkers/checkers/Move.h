#ifndef MOVE_H
#define MOVE_H
#include <iostream>
#include "Board.h"
class Move
{

public:
	bool isPositionCorrect(char Hposition, char Vposition, bool player, Board& board, int *pos);

	bool isMoveCorrect(char Hposition, char Vposition, bool player, Board& board, int* pos, int piece[2]);

};



#endif // !MOVE_H

