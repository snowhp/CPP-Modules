// Created by tde-sous on 20-01-2024.
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
  std::string Name_;
public:
   /**
   * @brief Default constructor.
   */
    explicit DiamondTrap(const std::string &Name);
   /**
   * @brief Copy constructor.
   * @param other The other DiamondTrap to copy.
   */
    DiamondTrap(const DiamondTrap& other);
   /**
   * @brief Copy assignment operator.
   * @param other The other DiamondTrap to assign.
   * @return A reference to the assigned DiamondTrap.
   */
    DiamondTrap& operator=(const DiamondTrap& other);
   /**
   * @brief Destructor.
   */
    ~DiamondTrap();
    using ScavTrap::attack;
};



#endif //DIAMONDTRAP_HPP