// Created by tde-sous on 21-01-2024.
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
  std::string type;

public:
  /**
   * @brief Default constructor.
   */
  explicit Animal();
  /**
   * @brief Copy constructor.
   * @param other The other Animal to copy.
   */
  Animal(const Animal &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other Animal to assign.
   * @return A reference to the assigned Animal.
   */
  Animal &operator=(const Animal &other);
  /**
   * @brief Destructor.
   */
  virtual ~Animal()  = 0;
  /**
   * @brief It will print the approriate sound of the animal.
   */
  virtual void makeSound() const;
  /**
   * @brief Get the type of the animal.
   */
  std::string getType() const;
};

#endif // ANIMAL_HPP