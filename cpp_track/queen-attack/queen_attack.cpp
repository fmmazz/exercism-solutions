#include "queen_attack.h"

namespace queen_attack {

	chess_board::chess_board(){
		whiteQueen = std::make_pair(0, 3);
		blackQueen = std::make_pair(7, 3);
	}

	chess_board::chess_board(std::pair <int,int> whiteQ, std::pair <int,int> blackQ){

		if (whiteQ == blackQ)
		{
			throw std::domain_error("Queen positions must be distinct");
		}
		else{ 
			whiteQueen = whiteQ;
			blackQueen = blackQ;
		}
	}

	std::pair <int,int> chess_board::white() const{
		return whiteQueen;
	}

	std::pair <int,int> chess_board::black() const{
		return blackQueen;
	}

	bool chess_board::can_attack() const{
		if ( (white().first == black().first) || (white().second == black().second) || (std::max(black().second,white().second) - std::min(black().second,white().second) == std::max(black().first,white().first) - std::min(black().first,white().first)) )
			return true;
		else
			return false;
	}

	chess_board::operator std::string() const{

		std::string stringBoard = "";

		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (i == white().first && j == white().second)
				{
					stringBoard += "W";
				}
				else if (i == black().first && j == black().second)
				{
					stringBoard += "B";
				}
				else{
					stringBoard += "_";
				}
			
				if (j < 7)
				{
					stringBoard += " ";
				}

			}
			stringBoard += "\n";
		}
		
		return stringBoard;
	}

}  // namespace queen_attack
