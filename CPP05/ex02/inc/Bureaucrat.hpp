// Created by tde-sous on 07-02-2024.
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>

#define MAX_GRADE 1
#define MIN_GRADE 150

class AForm;

class Bureaucrat {
private:
  /*  Name of the Bureaucrat */
  std::string const name_;
  /*  Grade of the Bureaucrat */
  unsigned int grade_;

public:
  /**
   * @brief Default constructor.
   */
  Bureaucrat();
  /**
   * @brief Constructor with name and grade.
   * @param name Name of the Bureaucrat.
   * @param grade Grade of the Bureaucrat.
   */
  Bureaucrat(std::string const &name, int const &grade);
  /**
   * @brief Copy constructor.
   * @param other The other Bureaucrat to copy.
   */
  Bureaucrat(const Bureaucrat &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other Bureaucrat to assign.
   * @return A reference to the assigned Bureaucrat.
   */
  Bureaucrat &operator=(const Bureaucrat &other);
  /**
   * @brief Destructor.
   */
  ~Bureaucrat();
  /**
   * @brief Increment the Grade of the Bureaucrat by the value -1. Throws
   * exception if invalid grade.
   */
  void incrementGrade();
  /**
   * @brief Decrement the Grade of the Bureaucrat by the value +1. Throws
   * exception if invalid grade.
   */
  void decrementGrade();
  /**
   * @brief Getter for the Name of the Bureaucrat.
   * @return The Name of the Bureaucrat.
   */
  std::string getName() const;
  /**
   * @brief Getter for the Grade of the Bureaucrat.
   * @return The Grade of the Bureaucrat.
   */
  unsigned int getGrade() const;
  /**
   * @brief If form got signed or not, will print a message accordingly with a
   * reason if denied.
   * @param signedForm The Form that Bureautcrat tried to sign.
   * @param reason The Reason not to sign the Form. Empty if it was signed.
   */
  void signForm(const AForm *signedForm, const std::string &reason);

  /**
   * @brief It will attempt to execute the form and print a message.
   * @param form The form to be executed.
   */
  void executeForm(AForm const &form);

  class GradeTooHighException : public std::exception {
    /** @brief Throws an exception indicating a grade was outside the allowed
     * range. Grade value is lower than MAX_GRADE. */
    const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
    /** @brief Throws an exception indicating a grade was outside the allowed
     * range. Grade value is greater than MIN_GRADE. */
    const char *what() const throw();
  };
};

/** @brief Prints the information about the Bureaucrat in the format
 * "<name>, bureaucrat grade <grade>." */
std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif // BUREAUCRAT_HPP