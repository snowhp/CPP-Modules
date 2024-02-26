// Created by tde-sous on 26-02-2024.
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm {
public:
  /**
   * @brief Default constructor.
   */
  RobotomyRequestForm();
  /**
   * @brief Copy constructor.
   * @param other The other RobotomyRequestForm to copy.
   */
  RobotomyRequestForm(const RobotomyRequestForm &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other RobotomyRequestForm to assign.
   * @return A reference to the assigned RobotomyRequestForm.
   */
  RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
  /**
   * @brief Destructor.
   */
  ~RobotomyRequestForm();
};

#endif // ROBOTOMYREQUESTFORM_HPP