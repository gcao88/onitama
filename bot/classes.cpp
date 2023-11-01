#include <string>
#include <utility>
#include <vector>

class Board {
    std::string board;
};

class Card {
    std::vector<std::pair<int,int>> moves;

    public:
        Card(std::vector<std::pair<int,int>> card_moves) {
            moves = card_moves;
        }
};
