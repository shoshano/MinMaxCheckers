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
	bool _player = 0;
	char _choice[2];
	int _position[2];
	// gracz bialy - czlowiek
	while(1){
	if (!_player) {
		while (1) {
			std::cout << "Wybierz pionek (litera cyfra): "; std::cin >> _choice;
			if (_choice[0] > 64 && _choice[0] < 73 && _choice[1] > 48 && _choice[1] < 57 ) {
				_position[0] = _choice[0] - 65;
				_position[1] = _choice[1] - 49;
			}
			else if (_choice[0] > 96 && _choice[0] < 105 && _choice[1] > 48 && _choice[1] < 57) {
				_position[0] = _choice[0] - 97;
				_position[1] = _choice[1] - 49;
			}
			else {
				std::cout << "ZLA POZYCJA\n";
				continue;
			}
			if (board.getBoard()[_position[1]][_position[0]] == board.getWhitePiece()) {
				std::cout << "Podaj ruch: \n";
				break;
			}
			else {
				std::cout << "NIE MA TU TWOJEGO PIONKA\n";
				continue;
			}
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
