#include "model.h"
#include "tile.h"
#include "piece.h"

namespace model {

    Tile::Tile(const std::string& name, bool occupied)
        : name_(name), occupied_(occupied), occupyingPiece_(nullptr) {
    }

    bool Tile::getOccupation() const {
        return occupied_;
    }

    void Tile::setOccupyingPiece(std::unique_ptr<Piece> piece) {
        occupyingPiece_ = std::move(piece);
        occupied_ = (occupyingPiece_ != nullptr);
    }

    Piece* Tile::getOccupyingPiece() const {
        return occupyingPiece_.get();
    }

    void Tile::destroyOccupyingPiece() {
        occupyingPiece_.reset();
        occupied_ = false;
    }

}
