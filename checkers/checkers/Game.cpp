#include "Game.h"

void Game::start()
{
	
	//tu dodac instrukcje

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
		{
			if (i < 3 && i >= 0 && board.getBoard()[i][j] == board.getBlackSquere()) {
				board.setPositionOnBoard(i, j, board.getWhitePiece());
				Piece piece = Piece(0, i, j);
				_whitePieces.push_back(piece);
			}
			else if (i < 8 && i >= 5 && board.getBoard()[i][j] == board.getBlackSquere()) {
				board.setPositionOnBoard(i, j, board.getBlackPiece());
				Piece piece = Piece(1, i, j);
				_blackPieces.push_back(piece);
			}
		}
	}
	board.print();
	play();
}

void Game::play()
{
	Move _move;
	bool _player = 0;
	char _choice[2];
	int startPosition[2];
	int movePosition[2];
	bool correctPosition = 0;
	bool correctMove = 0;
	//int _position[2];
	// gracz bialy - czlowiek
	while(1){
		if (!_player) {
			while (!correctPosition) {
				std::cout << "Wybierz pionek (litera cyfra): "; std::cin >> _choice;
				correctPosition = _move.isPositionCorrect(_choice[0], _choice[1], _player, board, startPosition);
			}
			while (!correctMove) {
				std::cout << "Wybierz pole docelowe wybranegopionka (litera cyfra): "; std::cin >> _choice;
				correctMove = _move.isMoveCorrect(_choice[0], _choice[1], _player, board, movePosition, startPosition);
			}
		}


		//gracz czarny komputer
		else if (_player)
		{

		}

		_player = !_player;
	}
}


void Game::end()
{
}

Game::Game()
{
	_whitePieces;
	_blackPieces;
	board;
}
