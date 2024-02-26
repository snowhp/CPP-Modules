// Created by tde-sous on 26-02-2024.
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <string>
#include <fstream>

class AForm;

class ShrubberyCreationForm : public AForm {
private:
   void asciiTreeWriter(const std::string &name);
public:
  /**
   * @brief Default constructor.
   */
  ShrubberyCreationForm();
  /**
   * @brief Constructor with target name.
   * @param target Name of the target.
   */
  explicit ShrubberyCreationForm(const std::string &target);
  /**
   * @brief Copy constructor.
   * @param other The other ShrubberyCreationForm to copy.
   */
  ShrubberyCreationForm(const ShrubberyCreationForm &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other ShrubberyCreationForm to assign.
   * @return A reference to the assigned ShrubberyCreationForm.
   */
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
  /**
   * @brief Destructor.
   */
  ~ShrubberyCreationForm();
};

#endif // SHRUBBERYCREATIONFORM_HPP