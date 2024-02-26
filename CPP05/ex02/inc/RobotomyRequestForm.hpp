// Created by tde-sous on 26-02-2024.
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class AForm;

class RobotomyRequestForm : public AForm {
private:
 std::string target_;
 public:
  /**
   * @brief Default constructor.
   */
  RobotomyRequestForm();
  /**
   * @brief Constructor with target name.
   * @param target Name of the target
   */
  RobotomyRequestForm(const std::string &target);
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
  /**
   * @brief Makes some drilling noises. Then, informs that <target> has been
   * robotomized successfully 50% of the time. Otherwise, informs that the
   * robotomy failed..
   */
  void execute();
};

#endif // ROBOTOMYREQUESTFORM_HPP