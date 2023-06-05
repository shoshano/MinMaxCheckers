#include "Piece.h"

void Piece::setVPosition(int position)
{
	this->verticalPosition = position;
}

void Piece::setHPosition(int position)
{
	this->horizontalPosition = position;
}

void Piece::setPlayer(bool player)
{
	this->pleyer = player;
}

void Piece::setQueen(bool isQueen)
{
	this->isQueen = isQueen;
}

bool Piece::getQueen()
{
	return isQueen;
}

bool Piece::getPleyer()
{
	return pleyer;
}

int Piece::getVPosition()
{
	return verticalPosition;
}

int Piece::getHPosition()
{
	return horizontalPosition;
}

Piece::Piece(bool pleyer, int vposition, int hposition)
{
	this->pleyer = pleyer;
	this->isQueen = 0;
	while (1) {
		if (vposition >= 0 && vposition < 8 && hposition >= 0 && hposition < 8) {
			this->verticalPosition = vposition;
			this->horizontalPosition = hposition;
			return;
		}
		else {
			std::cout << "Podaj prawidlowe wspolrzedne: "; 
			std::cin >> vposition >> hposition;
		}
	}
	
}
