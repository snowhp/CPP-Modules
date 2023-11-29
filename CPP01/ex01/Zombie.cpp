#include "Zombie.hpp"

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::SetName(const std::string &InputName) {
    name = InputName;
}

Zombie::~Zombie() {
    std::cout << name << '\n';
}