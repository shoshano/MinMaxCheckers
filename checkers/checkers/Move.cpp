#include "Move.h"

bool Move::isPositionCorrect(char Vposition, char Hposition, bool player, Board& board, int *pos) {
	int _position[2];

	if (Vposition > 64 && Vposition < 73 && Hposition > 48 && Hposition < 57) {
		_position[0] = Vposition - 65;
		_position[1] = Hposition - 49;
	}
	else if (Vposition > 96 && Vposition < 105 && Hposition > 48 && Hposition < 57) {
		_position[0] = Vposition - 97;
		_position[1] = Hposition - 49;
	}
	else {
		std::cout << "ZLA POZYCJA\n";
		return 0;
	}
	if (board.getBoard()[_position[1]][_position[0]] == board.getWhitePiece()) {
		pos[0] = _position[0];
		pos[1] = _position[1];
		return 1;
	}
	else {
		std::cout << "NIE MA TU TWOJEGO PIONKA\n";
		return 0;
	}
}

bool Move::isMoveCorrect(char Hposition, char Vposition, bool player, Board& board, int* pos, int piece[2])
{
	int _position[2];

	if (Hposition > 64 && Hposition < 73 && Vposition > 48 && Vposition < 57) {
		_position[0] = Hposition - 65;
		_position[1] = Vposition - 49;
	}
	else if (Hposition > 96 && Hposition < 105 && Vposition > 48 && Vposition < 57) {
		_position[0] = Hposition - 97;
		_position[1] = Vposition - 49;
	}
	else {
		std::cout << "ZLA POZYCJA\n";
		return 0;
	}

	if ((piece[0] + 1 == _position[0] || piece[0] - 1 == _position[0]) && piece[1] + 1 == _position[1]) {
		pos[0] = Hposition;
		pos[1] = Vposition;
		return 1;
	}
	else {
		return 0;
	}
}
