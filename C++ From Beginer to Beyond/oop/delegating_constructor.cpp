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
    Player(std::string string_val, int int_val, int xp_val);
};

Player::Player()
    :name{None}, health{0}, xp{0} {
}

Player::Player(std::string string_val)
    :name{string_val}, health{0}, xp{0}{
}

Player::Player(std::string string_val, int int_val, int xp_val)
    :name{string_val}, health{int_val}, xp{xp_val} {

}

int main(){

    return 0;
}