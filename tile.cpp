#include "model.h"
#include "piece.h"

model::Tile::Tile(const std::string& name, bool occupied)
    : name_(name), occupied_(occupied), occupyingPiece_(nullptr) {
}

bool model::Tile::getOccupation() const {
    return occupied_;
}

void model::Tile::setOccupyingPiece(std::unique_ptr<Piece> piece) {
    occupyingPiece_ = std::move(piece);
    occupied_ = (occupyingPiece_ != nullptr);
}

model::Piece* model::Tile::getOccupyingPiece() const {
    return occupyingPiece_.get();
}

void model::Tile::destroyOccupyingPiece() {
    occupyingPiece_.reset();
    occupied_ = false;
}
