// Created by tde-sous on 21-01-2024.
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal {
private:
  Brain *DogBrain;

public:
  /**
   * @brief Default constructor.
   */
  Dog();
  /**
   * @brief Copy constructor.
   * @param other The other Dog to copy.
   */
  Dog(const Dog &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other Dog to assign.
   * @return A reference to the assigned Dog.
   */
  Dog &operator=(const Dog &other);
  /**
   * @brief Destructor.
   */
  ~Dog();
};

#endif // DOG_HPP