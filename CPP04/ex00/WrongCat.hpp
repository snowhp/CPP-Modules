// Created by tde-sous on 21-01-2024.
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
  /**
   * @brief Default constructor.
   */
  WrongCat();
  /**
   * @brief Copy constructor.
   * @param other The other WrongCat to copy.
   */
  WrongCat(const WrongCat &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other WrongCat to assign.
   * @return A reference to the assigned WrongCat.
   */
  WrongCat &operator=(const WrongCat &other);
  /**
   * @brief Destructor.
   */
  ~WrongCat();
  void makeSound();
};

#endif // WRONGCAT_HPP