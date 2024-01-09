//
// Created by Niloy Farhan on 9/1/24.
//

#ifndef OOP_PLAYER_H
#define OOP_PLAYER_H
#include <string>


class Player{
private:
    static int num_players;
    std::string name;
    int health;
    int xp;
public:
    std::string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    //constructor
    Player(std::string name_val = "none", int health_val = 0, int xp_val = 0);
    Player(const Player &source);
    //destructor
    ~Player();

    static int get_num_players();
};


#endif //OOP_PLAYER_H
