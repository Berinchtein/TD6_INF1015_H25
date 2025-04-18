#pragma once  

#include "model.h"  
#include <vector>  
#include <utility>  

namespace model {
    class Rook : public Piece {
    public:
        Rook() = default;
        ~Rook() override = default;

        void calculatePossibleMovements(const std::pair<int, int>& position, const Board* board) override;
        void calculatePossibleSimpleMovements(const std::pair<int, int>& position, const Board* board) override;

    private:
        std::vector<std::pair<int, int>> possibleMovements;
        std::vector<std::pair<int, int>> possibleSimpleMovements;
        void addLinearMovements(const std::pair<int, int>& position, const Board* board, int dx, int dy, std::vector<std::pair<int, int>>& movements);

    };
}
