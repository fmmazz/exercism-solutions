#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H

#include <stdexcept>

#include<utility>
#include <string>

namespace queen_attack {

	class chess_board
	{
	private:
		std::pair <int,int> whiteQueen;
		std::pair <int,int> blackQueen;
	public:
		chess_board();
		chess_board(std::pair <int,int> whiteQ, std::pair <int,int> blackQ);
		std::pair <int,int> white() const;
		std::pair <int,int> black() const;
		operator std::string() const;
		bool can_attack() const;
	};

}  // namespace queen_attack

#endif // QUEEN_ATTACK_H