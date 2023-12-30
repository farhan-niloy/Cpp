#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::vector;
using std::string;

class Player {
    // Attributes
    string name;
    int health;
    int xp;

    // Methods
    void talk(string);
    bool is_dead();
};

int main() {
    Player frank;
    Player hero;

    Player gintoki;
    Player kagura;

    Player players[] {gintoki, kagura};

    Player *enemy = new Player;

    delete enemy;
    return 0;
}
