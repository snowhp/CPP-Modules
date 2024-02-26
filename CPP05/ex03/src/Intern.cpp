// Created by tde-sous on 26-02-2024.
#include "Intern.hpp"



Intern::Intern() {
    std::cout << "[Intern] Default constructor called." << std::endl;
}

Intern::Intern(const Intern& other) {
    std::cout << "[Intern] Copy constructor called." << std::endl;
}

Intern& Intern::operator=(const Intern& other) {
    std::cout << "[Intern] Copy assigment operator called." << std::endl;
    return *this;
}

Intern::~Intern() {
    std::cout << "[Intern] Destructor called." << std::endl;

}
