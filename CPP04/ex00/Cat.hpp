// Created by tde-sous on 21-01-2024.
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal {
public:
  /**
   * @brief Default constructor.
   */
  Cat();
  /**
   * @brief Copy constructor.
   * @param other The other Cat to copy.
   */
  Cat(const Cat &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other Cat to assign.
   * @return A reference to the assigned Cat.
   */
  Cat &operator=(const Cat &other);
  /**
   * @brief Destructor.
   */
  virtual ~Cat();
};

#endif // CAT_HPP