//
// Created by user on 07-11-2023.
//

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string Name) {
    Zombie *zombieArray;
    zombieArray = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombieArray[i].SetName(Name);
    return zombieArray;
}