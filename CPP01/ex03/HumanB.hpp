// Created by tde-sous for 42-cursus. https://github.com/snowhp/
//

#ifndef EX03_HUMANB_HPP
#define EX03_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
    Weapon *_weapon;
    std::string _name;
public:
    explicit HumanB(std::string TypeName);

    void setWeapon(Weapon &TypeClub);

    void attack();
};


#endif //EX03_HUMANB_HPP
