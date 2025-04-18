#pragma once
#include "model.h"	

namespace model {
    const std::vector<std::pair<int, int>>& Piece::getPossibleMovements() const { return possibleMovements_; }

    void Piece::clearMovements() {
        possibleMovements_.clear();
    }
}
