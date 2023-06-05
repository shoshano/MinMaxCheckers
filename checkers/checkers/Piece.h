#ifndef PIECE_H
#define PIECE_H
#include <vector>
#include <iostream>

class Piece
{
	bool isQueen;			// 0 zwykly, 1 damka
	bool pleyer;			// 0 bialy, 1 czarny
	int verticalPosition;	// pozycja pionowa 
	int horizontalPosition;	// pozycja pozioma 

public:
	//settery 
	void setVPosition(int position);
	void setHPosition(int position);
	void setPlayer(bool player);
	void setQueen(bool isQueen);

	//gettery 
	bool getQueen();
	bool getPleyer();
	int getVPosition();
	int getHPosition();

	Piece(bool pleyer, int vposition, int hposition);

};

//using whitePieces = std::vector<Piece>;
//using blackPieces = std::vector<Piece>;

#endif // !PIECE_H


