#include "Weapon.hpp"
#include "HumanA.hpp"

int main() {
	Weapon WeaponTest("test");
	std::cout << WeaponTest.getType() << std::endl;
	WeaponTest.setType("Other");
	std::cout << WeaponTest.getType() << std::endl;

	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
}