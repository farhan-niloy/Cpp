#include <iostream>
#include <string>

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    Player(std::string name_val = "none", int health_val = 0, int xp_val = 0);
};

Player::Player(std::string name_val, int health_val, int xp_val) :name{name_val}, health{health_val}, xp{xp_val} {
    std::cout<<"Three-args constructor";
}

int main() {
    Player empty;
    Player gin{"Gin"};
    Player enemy{"katsura", 100, 1000};

    return 0;
}