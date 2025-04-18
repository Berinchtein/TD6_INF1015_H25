#pragma once  

#include <memory>  
#include <string>  

namespace model {  

   class Tile {  
   public:  
       Tile(const std::string& name, bool occupied);  

       bool getOccupation() const;  
       void setOccupyingPiece(std::unique_ptr<Piece> piece);  
       Piece* getOccupyingPiece() const;  

       void destroyOccupyingPiece();  

   private:  
       std::string name_;  
       bool occupied_;  
       std::unique_ptr<Piece> occupyingPiece_;  
   };  

}