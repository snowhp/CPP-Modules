//
// Created by user on 07-11-2023.
//

#include "Zombie.hpp"

int	main()
{
	Zombie* Zombie1 = zombieHorde(5, "Manuel");
	Zombie1[0].announce();
	Zombie1[1].announce();
	Zombie1[2].announce();
	Zombie1[3].announce();
	Zombie1[4].announce();
	delete[] Zombie1;
}