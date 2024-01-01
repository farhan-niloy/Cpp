#include <iostream>
#include <string>

using std::string;

class Player {
private:
    std::string name;
    int health;
    int xp;
public:
    Player();
    Player(std::string string_val);
    Player(std::string string_val, int health_val, int xp_val);
};

Player::Player()
    :Player{"none", 0, 0} {
}

Player::Player(std::string string_val)
    :Player{string_val, 0, 0}{
}

Player::Player(std::string string_val, int health_val, int xp_val)
    :name{string_val}, health{health_val}, xp{xp_val} {

}

int main(){


    return 0;
}