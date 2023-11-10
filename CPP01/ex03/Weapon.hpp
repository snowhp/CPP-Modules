#ifndef EX03_WEAPON_HPP
#define EX03_WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
private:
    std::string type;
public:
    explicit Weapon(const std::string &typeName);

    std::string getType();

    void setType(const std::string &typeName);
};


#endif //EX03_WEAPON_HPP
