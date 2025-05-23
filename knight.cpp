#include "model.h"

void model::Knight::calculatePossibleMovements(const std::pair<int, int>& position, const Board* board) {
    possibleMovements_.clear();
    const std::vector<std::pair<int, int>> moves = {
        {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
        {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
    };
    for (const auto& move : moves) {
        std::pair<int, int> newPos = { position.first + move.first, position.second + move.second };//a completer
    }
}
