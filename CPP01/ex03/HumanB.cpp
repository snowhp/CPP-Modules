// Created by tde-sous for 42-cursus. https://github.com/snowhp/
//

#include "HumanB.hpp"

HumanB::HumanB(std::string TypeName) : _weapon(0), _name(TypeName)  {
}

void HumanB::setWeapon(Weapon &TypeClub) {
	_weapon = &TypeClub;
}

void HumanB::attack() {
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}