#include <iostream>
#include <string>

using std::endl;

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

    //copy constructor
    Player(const Player &source);

    ~Player(){std::cout<<"Destructor called for " + name <<endl;}
};

Player::Player(std::string name_val, int health_val, int xp_val) :name{name_val}, health{health_val}, xp{xp_val} {
    std::cout<<"Three args constructor created!" + name;
}

Player::Player(const Player &source)
    :name{source.name}, health{source.health}, xp{source.xp} {
    std::cout<<"copy constructor - made copy of " <<name <<endl;
}

void display (Player p) {
    std::cout<<"Name = " <<p.get_name() <<endl;
    std::cout<<"Health = " <<p.get_health() <<endl;
    std::cout<<"XP = " <<p.get_xp() <<endl;
}

int main() {

    Player empty;
    display(empty);

    Player gin{"Gintoki", 100};
    display(gin);

    Player sadaharu{"Sadaharu", 100, 1000};
    display(sadaharu);

    Player katsura{"Katsura", 100, 1000};
    display(katsura);

    return 0;
}