#include "classes.cpp"
#include <unordered_map>
#include <vector>

using namespace std;

unordered_map<std::string, std::vector<std::pair<int,int>>> all_cards;

void createCards() {
    all_cards.insert({"tiger", {{0,2},{0,-1}}});
    all_cards.insert({"crab", {{0,1},{-2,0},{2,0}}});
    all_cards.insert({"monkey", {{1,1},{-1,1},{-1,-1},{1,-1}}});
    all_cards.insert({"crane", {{0,1},{-1,-1},{1,-1}}});
    all_cards.insert({"dragon", {{-1,-1},{1,-1},{2,1},{-2,1}}});
    all_cards.insert({"elephant", {{1,0},{1,1},{-1,0},{-1,1}}});
    all_cards.insert({"mantis", {{1,1},{-1,1},{0,-1}}});
    all_cards.insert({"boar", {{0,1},{-1,0},{1,0}}});
    all_cards.insert({"frog", {{-2,0},{-1,1},{1,-1}}});
    all_cards.insert({"goose", {{-1,1},{-1,0},{1,0},{1,-1}}});
    all_cards.insert({"horse", {{-1,0},{0,-1},{0,1}}});
    all_cards.insert({"eel", {{-1,1},{-1,-1},{1,0}}});
    all_cards.insert({"rabbit", {{-1,-1},{1,1},{2,0}}});
    all_cards.insert({"rooster", {{-1,0},{-1,-1},{1,0},{1,1}}});
    all_cards.insert({"ox", {{0,1},{1,0},{0,-1}}});
    all_cards.insert({"cobra", {{-1,0},{1,1},{1,-1}}});
}

void runDFS(Board board, vector<vector<pair<int,int>>> cards, int turn) {
    return;
}

int main() {
    // Creating the game cards
    createCards();

    // Player 1: King 1, Pawns 3
    // Player 2: King 2, Pawns 4
    std::string current_board = "";
    current_board += "44244";
    current_board += "00000";
    current_board += "00000";
    current_board += "00000";
    current_board += "33133";
    // Which players turn is it?
    int turn = 1;
    // What cards do each person have?
    // First 2 are P1, Last 2 are P2, Middle is middle card
    std::vector current_cards = {all_cards["tiger"], all_cards["crab"], all_cards["monkey"], all_cards["crane"], all_cards["dragon"]};

    Board board(current_board);
    runDFS(board, current_cards, turn);
}
