#include "Weapon.hpp"

Weapon::Weapon(const std::string &typeName) {
    type = typeName;
}

std::string Weapon::getType() {
    return type;
}

void Weapon::setType(const std::string &typeName) {
    type = typeName;
}