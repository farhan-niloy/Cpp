//
// Created by Niloy Farhan on 9/1/24.
//

#include "Player.h"

int Player::num_player{0};

Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val} {

}
