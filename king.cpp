#include "model.h"

void model::King::calculatePossibleMovements(const std::pair<int, int>& position, const Board* board) {
    possibleMovements_.clear();
    const std::vector<std::pair<int, int>> directions = {
        {0, 1},   // Droit
        {0, -1},  // Gauche
        {-1, 0},  // Haut
        {1, 0},   // Bas
        {-1, -1}, // Diagonale Haut-Gauche
        {-1, 1},  // Diagonale Haut-Droit
        {1, -1},  // Diagonale Bas-Gauche
        {1, 1}    // Diagonale Bas-Droit
    };
    for (const auto& direction : directions) {
        std::pair<int, int> newPos = { position.first + direction.first, position.second + direction.second };//a completer
    }
}
