// Created by tde-sous on 26-02-2024.
#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;
class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern {
public:
  /**
   * @brief Default constructor.
   */
  Intern();
  /**
   * @brief Copy constructor.
   * @param other The other Intern to copy.
   */
  Intern(const Intern &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other Intern to assign.
   * @return A reference to the assigned Intern.
   */
  Intern &operator=(const Intern &other);
  /**
   * @brief Destructor.
   */
  ~Intern();
  /**
   * @brief Creates a pointer to a Form Object and initialize the target to the
   * second parameter.
   * @param formName the FormName
   * @param formTargetName the Form Target Name
   * @return  pointer to a Form object (whose name is the one passed as
   * parameter) whose target will be initialized to the second parameter
   */
  static AForm *makeForm(const std::string &formName,
                         const std::string &formTargetName);
  /**
   * \brief Creates a new residentialPardonForm
   * \param target The name of the PresidentialPardonForm
   * \return A new instance of type AForm
   */
  static AForm *makePresidentialPardonForm(const std::string &target);
  /**
   * \brief Creates a new RobotomyRequestForm
   * \param target The name of the RobotomyRequestForm
   * \return A new instance of type AForm
   */
  static AForm *makeRobotomyRequestForm(const std::string &target);
  /**
   * \brief Creates a new ShrubberyCreationForm
   * \param target The name of the ShrubberyCreationForm
   * \return A new instance of type AForm
   */
  static AForm *makeShrubberyCreationForm(const std::string &target);
  class FormNotFound : public std::exception {
  public:
    /** @brief Throws an exception indicating that the Form is not Found. */
    virtual const char *what() const throw();
  };
};

#endif // INTERN_HPP