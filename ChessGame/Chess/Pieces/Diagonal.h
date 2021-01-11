#ifndef DIAGONAL_H
#define DIAGONAL_H

#include <cstdlib>
#include "ChessPiece.h"
#include "PieceType.h"

class Board;

// Diamond pattern c++ multiple inheritence
class Diagonal : public virtual ChessPiece{

	public:
		virtual ~Diagonal() = default;
		virtual bool isValid(int newX, int newY, const Board* board) const;

};

#endif