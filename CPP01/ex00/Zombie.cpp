#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << Zombie().name << ": BraiiiiiiinnnzzzZ...";
}

Zombie::Zombie(std::string Name)
{
Name = name;
}