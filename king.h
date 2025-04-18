#include "model.h"
#include <utility>
namespace model {
    class King : public Piece {
    public:
        King(const Color& color);

        char getName() const override;

        void calculatePossibleMovements(const std::pair<int, int>& position, const Board* board) override;
        void calculatePossibleSimpleMovements(const std::pair<int, int>& position, const Board* board) override;
		bool isConfrontingAdversaryKing(const std::pair<int, int>& position, const std::pair<int, int> adversaryPosition) const; 

	private:
		char pieceCharacter_;

    };
}

