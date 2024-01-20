// Created by tde-sous on 18-01-2024.
#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include "ClapTrap.hpp"

/**
 * @class ScavTrap
 * @brief This derived class represents a ScavTrap that inherits from base class
 * ClavTrap .
 */
class ScavTrap : public ClapTrap {
public:
  /**
   * @brief Default constructor.
   */
  explicit ScavTrap(const std::string &Name);
  /**
   * @brief Copy constructor.
   * @param other The other ScavTrap to copy.
   */
  ScavTrap(const ScavTrap &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other ScavTrap to assign.
   * @return A reference to the assigned ScavTrap.
   */
  ScavTrap &operator=(const ScavTrap &other);
  /**
   * @brief Destructor.
   */
  ~ScavTrap();
  /**
   * @brief Member function that prints a message informing that
   * ScavTrap is now in Gate keeper mode.
   */
  void guardGate();
  /**
   * @brief Makes the ClapTrap attack a target.
   * @param target The name of the target to attack.
   */
  void attack(const std::string &target);
};

#endif // EX01_SCAVTRAP_HPP