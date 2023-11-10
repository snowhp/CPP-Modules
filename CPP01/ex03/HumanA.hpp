// Created by tde-sous for 42-cursus. https://github.com/snowhp/
//

#ifndef EX03_HUMANA_HPP
#define EX03_HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {
private:
    Weapon& _weapon;
    std::string _name;

public:
    HumanA(std::string TypeName, Weapon &TypeWeapon);

    void attack();
};


#endif //EX03_HUMANA_HPP
