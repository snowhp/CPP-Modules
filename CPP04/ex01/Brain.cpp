// Created by tde-sous on 21-01-2024.
#include "Brain.hpp"

Brain::Brain() {
    std::cout << "[Brain] Default constructor called.\n";
    ideas = new std::string[100];
}

Brain::Brain(const Brain& other) {
    std::cout << "[Brain] Copy constructor called.\n";
    this->ideas = other.ideas;
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "[Brain] Copy assigment operator called.\n";
    if (this == &other)
        return *this;
    this->ideas = other.ideas;
    return *this;
}

Brain::~Brain() {
    std::cout << "[Brain] Destructor called.\n";
    delete[] ideas;
}
