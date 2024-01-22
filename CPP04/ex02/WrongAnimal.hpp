// Created by tde-sous on 21-01-2024.
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
  std::string type;

public:
  /**
   * @brief Default constructor.
   */
  WrongAnimal();
  /**
   * @brief Copy constructor.
   * @param other The other WrongAnimal to copy.
   */
  WrongAnimal(const WrongAnimal &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other WrongAnimal to assign.
   * @return A reference to the assigned WrongAnimal.
   */
  WrongAnimal &operator=(const WrongAnimal &other);
  /**
   * @brief Destructor.
   */
  ~WrongAnimal();
  void makeSound() const;
  std::string getType() const;
};

#endif // WRONGANIMAL_HPP