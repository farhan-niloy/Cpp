#include <iostream>
#include <string>

class Player{
private:
    std::string name;
    int health;
    int xp;

public:
    std::string get_name(){ return name;}
    int get_health() {return health;}
    int get_xp() {return xp;}
    Player(std::string name_val = "none", int health_val = 0, int xp_val = 0);
};

Player::Player(std::string name_val, int health_val, int xp_val) :name{name_val}, health{health_val}, xp{xp_val} {
    std::cout<<"Three args constructor created!";
}

int main() {


    return 0;
}