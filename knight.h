#pragma once
#include "model.h"
namespace model {
	class Knight : public Piece {
	public:
		Knight(const Color& color);
		~Knight() override = default;
		char getName() const override; 
		void calculatePossibleMovements(const std::pair<int, int>& position, const Board* board) override;
		void calculatePossibleSimpleMovements(const std::pair<int, int>& position, const Board* board) override;
	private:
		char pieceCharacter_;	
}
