// Created by tde-sous on 21-01-2024.

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // Outputs the cat sound!
    j->makeSound();
    meta->makeSound();

    // Additional tests with WrongCat
    const WrongAnimal* wrongCat = new WrongCat();
    wrongCat->makeSound();

    delete meta;
    delete j;
    delete i;
    delete wrongCat;

    return 0;
}