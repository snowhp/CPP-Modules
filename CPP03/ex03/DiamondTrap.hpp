// Created by tde-sous on 20-01-2024.
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ClapTrap {
public:
   /**
   * @brief Default constructor.
   */
    DiamondTrap(const std::string &Name);
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
};



#endif //DIAMONDTRAP_HPP