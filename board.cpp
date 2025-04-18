#include <model.h>
#include <memory>   
#include <string>   
#include <utility>
namespace model {
   std::unique_ptr<Tile> Board::createTile(const std::string& name, bool isOccupied) const {
       return std::make_unique<Tile>(name, isOccupied);
   }

   std::unique_ptr<Piece> Board::createPiece(char character) const {
       switch (character) { //je sais pas si c switch case c bon ou si ta une autre idee
           case WHITE_KING: return std::make_unique<King>(Color::White); 
           case BLACK_KING: return std::make_unique<King>(Color::Black);
           default: return nullptr;
       }
   }

   void Board::create(const std::string& configuration) {  
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
   }
    std::pair<Tile*, std::pair<int, int>> findTile(const char pieceName, bool adv) const { 
	    for (int i = 0; i < BOARD_DIMENSION_X; ++i) {
		    for (int j = 0; j < BOARD_DIMENSION_Y; ++j) {
			    Piece* p = board_[i][j]->getOccupyingPiece();
			    if (p && p->getName() == pieceName) {
				    if ((adv && p->isWhite_ != (turn_ == model::Color::White)) ||
					    (!adv && p->isWhite_ == (turn_ == model::Color::White))) {
					    return { board_[i][j].get(), {i, j} };
				    }
			    }
		    }
	    }
	    return { nullptr, {-1, -1} };
    }


   void Board::resetValidPiecePositions() {
       for (int i = 0; i < BOARD_DIMENSION_X; ++i) {
           for (int j = 0; j < BOARD_DIMENSION_Y; ++j) {
               Piece* p = board_[i][j]->getOccupyingPiece();
               if (p) p->clearMovements();
           }
       }
   }

   void Board::switchTurn() {
       turn_ = (turn_ == model::Color::White) ? model::Color::Black : model::Color::White;
   }

   void Board::setTurn(Color& newTurn) {
       turn_ = newTurn;
   }

   Color Board::getTurn() const {
       return turn_;
   }

   void Board::movePiece(Tile* initialTile, Tile* finalTile) {
       if (initialTile && finalTile) {
           std::unique_ptr<Piece> movingPiece;
           movingPiece = std::make_unique<King>(*(dynamic_cast<King*>(initialTile->getOccupyingPiece())));
           finalTile->setOccupyingPiece(std::move(movingPiece));
           initialTile->destroyOccupyingPiece();
       }
   }

   Tile* Board::getTile(const int x, const int y) const {
       if (x >= 0 && x < BOARD_DIMENSION_X && y >= 0 && y < BOARD_DIMENSION_Y)
           return board_[x][y].get();
       return nullptr;
   }

   bool Board::getCheckState() const {
       return check_;
   }

   std::pair<int, int> Board::getTilePosition(Tile* tile) const {
       for (int i = 0; i < BOARD_DIMENSION_X; ++i) {
           for (int j = 0; j < BOARD_DIMENSION_Y; ++j) {
               if (board_[i][j].get() == tile) return { i, j };
           }
       }
       return { -1, -1 }; 
   }

}