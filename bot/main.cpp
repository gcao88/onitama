#include "classes.cpp"

std::vector all_cards;

void createCards() {
    std::pair<int,int> m1 (0,2);
    std::pair<int,int> m2 (0,-1);
    std::vector<std::pair<int,int>> v = {m1,m2};
    Card tiger(v);

    m1 = std::make_pair(0,1);
    m2 = std::make_pair(-2,0);
    std::pair<int,int> m3 (2,0);
    v = {m1,m2,m3};
    Card crab(v);

    m1 = std::make_pair(1,1);
    m2 = std::make_pair(-1,1);
    m3 = std::make_pair(-1,-1);
    std::pair<int,int> m4 (1,-1);
    v = {m1,m2,m3,m4};
    Card monkey(v);
}

int main() {
    // Creating the game cards
    createCards();

    // Player 1: King 1, Pawns 3
    // Player 2: King 2, Pawns 4
    std::string current_board = "44244"+"00000"+"00000"+"00000"+"33133";
    // Which players turn is it?
    int turn = 1;
    // What cards do each person have?
    // First 2 are P1, Last 2 are P2, Middle is middle card
    std::vector current_cards = {all_cards.get("tiger"), ... };

    Board board(current_board);
    runDFS(board, current_cards, turn);
}
