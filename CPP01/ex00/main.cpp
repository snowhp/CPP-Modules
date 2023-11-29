//
// Created by user on 07-11-2023.
//

#include "Zombie.hpp"

int main() {
    Zombie *Zombie1 = newZombie("Zombienn");
    Zombie1->announce();
    randomChump("me mario");
    delete Zombie1;
}