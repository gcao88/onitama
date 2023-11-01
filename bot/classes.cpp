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
        std::vector<int> toVector() {
            std::vector<int> ans = {};
            for (int i=0; i<25; i++) {
                ans.push_back(board.at(i));
            }
            return ans;
        }
};
