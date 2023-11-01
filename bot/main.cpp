#include "classes.cpp"

int main() {

    std::pair<int,int> m1 (0,2);
    std::pair<int,int> m2 (0,-1);
    std::vector<std::pair<int,int>> v = {m1,m2};
    Card tiger(v);

    m1 = std::make_pair(0,1);
    m2 = std::make_pair(-2,0);
    std::pair<int,int> m3 (2,0);
    v = {m1,m2,m3};
    Card crab(v);


}
