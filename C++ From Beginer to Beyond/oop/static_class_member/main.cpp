#include <iostream>
#include <string>
#include "Player.h"

using std::cout;
using std::endl;

void display_active_players(){
       cout<<"Active Players: " <<Player::get_num_players() <<endl;
}

int main(){
    display_active_players();
    Player gin{"Gin"};
    display_active_players();

    {
        Player hero{"hero"};
        display_active_players();
    }
    display_active_players();

    Player *enemy = new Player("Enemy", 100, 100);
    display_active_players();
    delete enemy;
    display_active_players();
    return 0;
}
