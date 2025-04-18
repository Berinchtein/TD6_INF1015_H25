#pragma once

#include <QApplication>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <fstream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <span>
#include <memory>

namespace model {
    constexpr int BOARD_DIMENSION_X = 8;
    constexpr int BOARD_DIMENSION_Y = 8;
    constexpr int NUMBER_OF_TILES = 64;
    constexpr int MAXIMUM_KINGS_CONFRONTATION = 2;
    constexpr int INITIAL_PIECE_POSITION = 0;
    constexpr int ROOT_FACTOR = 2;
    constexpr char EMPTY_CELL = 'X';
    constexpr char BLACK_KING = 'k';
    constexpr char WHITE_KING = 'K';
    constexpr char BLACK_KNIGHT = 'n';
    constexpr char WHITE_KNIGHT = 'N';
    constexpr char BLACK_ROOK = 'r';
    constexpr char WHITE_ROOK = 'R';
    constexpr char SEPARATOR = '/';
    constexpr char EMPTY_PIECE = 'x';
    constexpr char EMPTY_LINE = '8';
    constexpr char SPACE = ' ';
    constexpr char START_WITH_BLACK = 'b';
    const std::string KING_EXCEEDED_LIMIT = "Trop de rois dans le jeu.";
    const std::string KING_BELOW_LIMIT = "Pas assez de rois.";

    class Piece; class Rook; class King; class Tile; class Board; class Knight; // Permet d'utiliser les types alors qu'ils seront défini après.

    enum class Color {
        White,
        Black
    };
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

    class Rook : public Piece {
    public:
        Rook() = default;
        void calculatePossibleMovements(const std::pair<int, int>& position, const Board* board) override;
        void calculatePossibleSimpleMovements(const std::pair<int, int>& position, const Board* board) override;

    private:
        std::vector<std::pair<int, int>> possibleMovements;
        std::vector<std::pair<int, int>> possibleSimpleMovements;
        void addLinearMovements(const std::pair<int, int>& position, const Board* board, int dx, int dy, std::vector<std::pair<int, int>>& movements);
    };

    class King : public Piece {
    public:
        King(const Color& color);

        char getName() const override;
        void calculatePossibleMovements(const std::pair<int, int>& position, const Board* board) override;
        void calculatePossibleSimpleMovements(const std::pair<int, int>& position, const Board* board) override;
        bool isConfrontingAdversaryKing(const std::pair<int, int>& position, const std::pair<int, int> adversaryPosition) const;

    private:
        char pieceCharacter_;
    };

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

    class Board {
    public:
        Board(const Color& color);
        std::unique_ptr<Tile> createTile(const std::string& name, bool isOccupied) const;
        std::unique_ptr<Piece> createPiece(char character) const;
        void create(const std::string& configuration);
        std::pair<Tile*, std::pair<int, int>> findTile(const char pieceName, bool adv) const;
        void calculatePossibleMoves(Piece* piece, const std::pair<int, int>& initialPosition);
        void resetValidPiecePositions();

        void switchTurn();
        void setTurn(model::Color&);
        model::Color getTurn() const;

        void movePiece(Tile* initialTile, Tile* finalTile);
        Tile* getTile(const int x, const int y) const;

        bool getCheckState() const;
        std::pair<int, int> getTilePosition(Tile* tile) const;

    private:
        model::Color turn_;
        bool check_ = false;
        std::unique_ptr<Tile> board_[BOARD_DIMENSION_X][BOARD_DIMENSION_Y];
        const char* tileNames_[NUMBER_OF_TILES] = {
            "A8", "B8", "C8", "D8", "E8", "F8", "G8", "H8",
            "A7", "B7", "C7", "D7", "E7", "F7", "G7", "H7",
            "A6", "B6", "C6", "D6", "E6", "F6", "G6", "H6",
            "A5", "B5", "C5", "D5", "E5", "F5", "G5", "H5",
            "A4", "B4", "C4", "D4", "E4", "F4", "G4", "H4",
            "A3", "B3", "C3", "D3", "E3", "F3", "G3", "H3",
            "A2", "B2", "C2", "D2", "E2", "F2", "G2", "H2",
            "A1", "B1", "C1", "D1", "E1", "F1", "G1", "H1"
        };
        static inline int nKings_ = 0;
    };

    class Knight : public Piece {
    public:
        void calculatePossibleMovements(const std::pair<int, int>& position, const Board* board) override;
        void calculatePossibleSimpleMovements(const std::pair<int, int>& position, const Board* board) override;
        char getName()      const override;
        char getCharacter() const;

    private:
        char pieceCharacter_;
    };

};
