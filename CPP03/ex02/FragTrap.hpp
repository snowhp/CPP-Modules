// Created by tde-sous on 20-01-2024.
#ifndef EX02_FRAGTRAP_HPP
#define EX02_FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ScavTrap {
public:
  /**
   * @brief Default constructor.
   */
  FragTrap(const std::string &Name);
  /**
   * @brief Copy constructor.
   * @param other The other FragTrap to copy.
   */
  FragTrap(const FragTrap &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other FragTrap to assign.
   * @return A reference to the assigned FragTrap.
   */
  FragTrap &operator=(const FragTrap &other);
  /**
   * @brief Destructor.
   */
  ~FragTrap();
  /**
   * @brie Positive high fives request on std out.
   */
  void highFivesGuys(void);
};

#endif // EX02_FRAGTRAP_HPP