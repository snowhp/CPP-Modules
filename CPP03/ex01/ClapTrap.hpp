// Created by tde-sous on 14-01-2024.

#ifndef EX01_CLAPTRAP_HPP
#define EX01_CLAPTRAP_HPP

#include <iostream>
#include <string>

/**
 * @class ClapTrap
 * @brief This class represents a ClapTrap.
 */
class ClapTrap {
private:
  std::string Name_; /**< Name of the ClapTrap */
  int HitPoints_;    /**< Represent the health of the ClapTrap */
  int EnergyPoints_; /**< Energy Points */
  int AttackDamage_; /**< Attack Damage */

public:
  /**
   * @brief Default constructor.
   * @param Name The name of the ClapTrap.
   */
  explicit ClapTrap(const std::string& Name);

  /**
   * @brief Copy constructor.
   * @param other The other ClapTrap to copy.
   */
  ClapTrap(const ClapTrap &other);

  /**
   * @brief Copy assignment operator.
   * @param other The other ClapTrap to assign.
   * @return A reference to the assigned ClapTrap.
   */
  ClapTrap &operator=(const ClapTrap &other);

  /**
   * @brief Destructor.
   */
  ~ClapTrap();

    /**
   * @brief Get the name of the ClapTrap.
   * @return The name of the ClapTrap.
   */
  std::string getName() const;

  /**
   * @brief Get the hit points of the ClapTrap.
   * @return The hit points of the ClapTrap.
   */
  int getHitPoints() const;

  /**
   * @brief Get the energy points of the ClapTrap.
   * @return The energy points of the ClapTrap.
   */
  int getEnergyPoints() const;

  /**
   * @brief Get the attack damage of the ClapTrap.
   * @return The attack damage of the ClapTrap.
   */
  int getAttackDamage() const;

  /**
   * @brief Makes the ClapTrap attack a target.
   * @param target The name of the target to attack.
   */
  void attack(const std::string &target);

  /**
   * @brief Reduces the health points of the ClapTrap.
   * @param amount The amount of damage to take.
   */
  void takeDamage(unsigned int amount);

  /**
   * @brief Increases the health points of the ClapTrap.
   * @param amount The amount of health to repair.
   */
  void beRepaired(unsigned int amount);

  /**
   * @brief Checks if the ClapTrap is functional.
   * @return True if the ClapTrap has energy points and hit points, false otherwise.
   */
  bool isFunctional() const;

  /**
   * @brief Increases the health points of the ClapTrap.
   * @param amount The amount of health to add.
   */
  void addHitPoints(int amount);

  /**
   * @brief Increases the energy points of the ClapTrap.
   * @param amount The amount of energy to add.
   */
  void addEnergyPoints(int amount);
};

#endif // EX01_CLAPTRAP_HPP
