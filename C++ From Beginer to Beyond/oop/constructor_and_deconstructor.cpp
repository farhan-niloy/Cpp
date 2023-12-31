#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Player {
private:
    std::string name;
    int health;
    int xp;

public:
    void set_name(std::string n) {name = n;}

    Player(){
        cout<<"No arg constructor called!" <<endl;
    }
    Player(std::string name){
        cout<<"String arg constructor called!" <<endl;
    }
    Player(std::string name, int health, int xp) {
        cout<<"Three arg constructor called!" <<name <<endl;
    }

    ~Player(){
        cout<<"Destructor called" <<endl;
    }
};

int main(){

    {
        Player slayer;
        slayer.set_name("Kagura");
    }
    {
        Player shinpachi;
        shinpachi.set_name("Shinpachi");
        Player Sadaharu("Sadaharu");
        Sadaharu.set_name("Sadaharu");
        Player bigsis("Bigsis", 100, 13);
        bigsis.set_name("big sis");

    }

    Player *enemy = new Player;
    enemy ->set_name("Katsura");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    (*level_boss).set_name("Level_boss");

    delete enemy;
    delete level_boss;

    return 0;
}