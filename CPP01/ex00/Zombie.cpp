#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(const std::string& inputname)
{
	name = inputname;
}

Zombie::~Zombie()
{
	std::cout << name;
}