#include <Book/Player.hpp>
#include <Book/Foreach.hpp>

#include <map>
#include <string>
#include <algorithm>


Player::Player()
{
	piecesType = boardType = musicTheme = musicMission = 1;
	promotionStatus = '\0';
	Undo = Redo = Reset = 0;
	team = 0;
	level = 0;
	mode = 0;
	RealTEAM = 0;
	turn = 0;
	fenCode = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1";
}
