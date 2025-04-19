#include "model.h"

const std::vector<std::pair<int, int>>& model::Piece::getPossibleMovements() const {
    return possibleMovements_;
}

void model::Piece::clearMovements() {
    possibleMovements_.clear();
}

model::Color model::Piece::getColor() {
    return color_;
}


