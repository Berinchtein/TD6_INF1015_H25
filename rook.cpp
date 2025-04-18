#include "model.h"
namespace model {

    void Rook::calculatePossibleMovements(const std::pair<int, int>& position, const Board* board) {
        possibleMovements.clear();
        const std::vector<std::pair<int, int>> directions = {
            {0, 1},  // Droit
            {0, -1}, // Gauche
            {-1, 0}, // Haut
            {1, 0}   // Bas
        };

        for (const auto& direction : directions) {
            addLinearMovements(position, board, direction.first, direction.second, possibleMovements);
        }
    }

    void Rook::calculatePossibleSimpleMovements(const std::pair<int, int>& position, const Board* board) {
        possibleSimpleMovements.clear();
        const std::vector<std::pair<int, int>> directions = {
            {0, 1},  // Droit
            {0, -1}, // Gauche
            {-1, 0}, // Haut
            {1, 0}   // Bas
        };

        for (const auto& direction : directions) {
            addLinearMovements(position, board, direction.first, direction.second, possibleSimpleMovements);
        }
    }
    //a modifier
    void addLinearMovements(const std::pair<int, int>& position, const Board* board, int dx, int dy, std::vector<std::pair<int, int>>& movements) {
		int x = position.first;
		int y = position.second;
		while (true) {
			x += dx;
			y += dy;
			if (x < 0 || x >= BOARD_DIMENSION_X || y < 0 || y >= BOARD_DIMENSION_Y) {
				break; // Sortir si on sort du plateau
			}
			Tile* tile = board->getTile(x, y);
			if (tile->getOccupation()) {
				Piece* occupyingPiece = tile->getOccupyingPiece();
				// V�rifier si la pi�ce est de la m�me couleur que la tour 
				break; // Sortir si on rencontre une pi�ce
			}
			else {
				movements.push_back({ x, y }); // Ajouter la case vide
			}
		}

