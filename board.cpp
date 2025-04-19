#include <memory>   
#include <string>   
#include <utility>

#include "model.h"

std::unique_ptr<model::Tile> model::Board::createTile(const std::string& tileName, bool isOccupied) const {
    return std::make_unique<Tile>(tileName, isOccupied);
}

std::unique_ptr<model::Piece> model::Board::createPiece(char pieceName) const {
    switch (pieceName) {
    case WHITE_KING: return std::make_unique<King>(Color::White);
    case BLACK_KING: return std::make_unique<King>(Color::Black);
    default: return nullptr;
    }
}

void model::Board::create(const std::string& configuration) {
    int row = 0, col = 0;

    for (char ch : configuration) {
        if (ch == SEPARATOR) {
            ++row;
            col = 0;
            continue;
        }

        if (std::isdigit(ch)) {
            col += ch - '0';
            continue;
        }

        if (row >= BOARD_DIMENSION_X || col >= BOARD_DIMENSION_Y) {
            continue;
        }

        auto piece = createPiece(ch);
        if (piece) {
            board_[row][col]->setOccupyingPiece(std::move(piece));
        }
        ++col;
    }
}

std::pair<model::Tile*, std::pair<int, int>> model::Board::findTile(const char pieceName, bool adv) const {
    for (int i = 0; i < BOARD_DIMENSION_X; ++i) {
        for (int j = 0; j < BOARD_DIMENSION_Y; ++j) {
            Piece* p = board_[i][j]->getOccupyingPiece();
            if (p && p->getName() == pieceName) {
                if ((adv && p->getColor() != model::Color::White) ||
                    (!adv && p->getColor() == model::Color::White)) {
                    return { board_[i][j].get(), {i, j} };
                }
            }
        }
    }
    return { nullptr, {-1, -1} };
}


void model::Board::resetValidPiecePositions() {
    for (int i = 0; i < BOARD_DIMENSION_X; ++i) {
        for (int j = 0; j < BOARD_DIMENSION_Y; ++j) {
            Piece* p = board_[i][j]->getOccupyingPiece();
            if (p) p->clearMovements();
        }
    }
}

void model::Board::switchTurn() {
    turn_ = (turn_ == model::Color::White) ? model::Color::Black : model::Color::White;
}

void model::Board::setTurn(Color& newTurn) {
    turn_ = newTurn;
}

model::Color model::Board::getTurn() const {
    return turn_;
}

void model::Board::movePiece(Tile* initialTile, Tile* finalTile) {
    if (initialTile && finalTile) {
        std::unique_ptr<Piece> movingPiece;
        movingPiece = std::make_unique<King>(*(dynamic_cast<King*>(initialTile->getOccupyingPiece())));
        finalTile->setOccupyingPiece(std::move(movingPiece));
        initialTile->destroyOccupyingPiece();
    }
}

model::Tile* model::Board::getTile(const int x, const int y) const {
    if (x >= 0 && x < BOARD_DIMENSION_X && y >= 0 && y < BOARD_DIMENSION_Y)
        return board_[x][y].get();
    return nullptr;
}

bool model::Board::getCheckState() const {
    return check_;
}

std::pair<int, int> model::Board::getTilePosition(Tile* tile) const {
    for (int i = 0; i < BOARD_DIMENSION_X; ++i) {
        for (int j = 0; j < BOARD_DIMENSION_Y; ++j) {
            if (board_[i][j].get() == tile) return { i, j };
        }
    }
    return { -1, -1 };
}
