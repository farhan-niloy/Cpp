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

    return 0;
}
