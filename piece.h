#pragma once
#include "model.h"
#include <vector>
#include <utility>

namespace model {

    class Piece {
    public:
        virtual ~Piece() = default;

        virtual char getName() const = 0;
        virtual void calculatePossibleMovements(const std::pair<int, int>& position, const Board* board) = 0;
        virtual void calculatePossibleSimpleMovements(const std::pair<int, int>& position, const Board* board) = 0;

        const std::vector<std::pair<int, int>>& getPossibleMovements() const;
        void clearMovements();

    protected:
        std::vector<std::pair<int, int>> possibleMovements_;
        bool isWhite_; //true=blanc,false=noir
    };

}