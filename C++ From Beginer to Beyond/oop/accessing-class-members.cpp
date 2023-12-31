#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::cin;

class Player{
public:
    string name;
    int health;
    int xp;

    void talk(string text_to_say){
        cout<<name <<" says " <<text_to_say <<"\n\n";
    };

    bool is_dead();
};

class Account{
public:
    string name;
    string talk;
    double blance;

    bool deposite(double bal);
    bool withdraw(double bal);
};

int main(){

    Player gin;
    gin.name = "Gintoki";
    gin.health = 100;
    gin.xp = 1000;
    gin.talk("Whether you're a hero or not, it doesn't matter. Because you'll always be surrounded by villains.");

    Player *enemy{nullptr};

    enemy = new Player;

    (*enemy).name = "Saraharu";
    (*enemy).health = 1000;
    enemy->xp = 1000000000000;
    enemy->talk("Vauk, Vauk");

    delete enemy;

    return 0;
}