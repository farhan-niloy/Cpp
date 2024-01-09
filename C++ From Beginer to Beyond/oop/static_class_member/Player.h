//
// Created by Niloy Farhan on 9/1/24.
//

#ifndef OOP_PLAYER_H
#define OOP_PLAYER_H
#include <string>


class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    std::string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    //constructor
};


#endif //OOP_PLAYER_H
