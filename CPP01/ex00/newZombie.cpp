//
// Created by user on 07-11-2023.
//

#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
    Zombie *Class = new Zombie(name);
    return Class;
}