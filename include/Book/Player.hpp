#ifndef BOOK_PLAYER_HPP
#define BOOK_PLAYER_HPP


#include <SFML/Window/Event.hpp>

#include <map>


class CommandQueue;

class Player
{

	public:
								Player();

		char 					promotionStatus;
		bool					Undo, Redo, Reset;
		int 					piecesType, boardType, musicTheme, musicMission, team, level, mode, RealTEAM, turn;
		std::string				fenCode;

};

#endif // BOOK_PLAYER_HPP
