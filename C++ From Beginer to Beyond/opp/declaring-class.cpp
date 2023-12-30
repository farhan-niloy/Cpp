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

class Account {

    //Attribute
    string name;
    double amount;

    //Methods
    bool deposite(double);
    bool withdraw(double);

};

int main() {

    Account frank_account;
    Account gintoki_account;

    Player frank;
    Player hero;

    Player gintoki;
    Player kagura;

    Player players[] {gintoki, kagura};
    vector<Player> player_vec{frank};
    player_vec.push_back(gintoki);
    player_vec.push_back(kagura);

    Player *enemy = new Player;

    delete enemy;
    return 0;
}
