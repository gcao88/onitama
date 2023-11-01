#include <string>
#include <utility>
#include <vector>

class Board {
    std::string board;

    public:
        Board(std::string current_board) {
            board = current_board;
        }
        void change(std::string new_board) {
            board = new_board;
        }
};

class Card {
    std::vector<std::pair<int,int>> moves;

    public:
        Card(std::vector<std::pair<int,int>> card_moves) {
            moves = card_moves;
        }
        void add_moves(std::vector<std::pair<int,int>> card_moves) {
            for (int i=0; i<card_moves.size(); i++) {
                moves.add(card_moves(i));
            }
        }
};
