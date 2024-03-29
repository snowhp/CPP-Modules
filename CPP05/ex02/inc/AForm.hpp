// Created by tde-sous on 13-02-2024.
#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class Form {
private:
  /* The Name of the Form */
  std::string const name_;
  /* Signed or not. At construction is not*/
  bool isSigned_;
  /* A constant grade required to sign it */
  const unsigned int signGrade_;
  /* A constant grade required to execute it*/
  const unsigned int execGrade_;

public:
  /**
   * @brief Constructor with Name, signGrade and execGrade requirements.
   * @param name The Name of the Form.
   * @param signGrade The Required Grade to sign.
   * @param execGrade The Required Grade to execute.
   */
  Form(const std::string &name, unsigned int signGrade,
        unsigned int execGrade);
  /**
   * @brief Default constructor.
   */
  Form();
  /**
   * @brief Copy constructor.
   * @param other The other Form to copy.
   */
  Form(const Form &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other Form to assign.
   * @return A reference to the assigned Form.
   */
  Form &operator=(const Form &other);
  /**
   * @brief Destructor.
   */
  virtual ~Form() = 0;
  /**
   * @brief Getter for the Name of the Form.
   * @return The Name of the Form.
   */
  std::string getName() const;
  /**
   * @brief Getter for the status of isSigned.
   * @return True if is Signed othewise false.
   */
  bool getSigned() const;
  /**
   * @brief Setter for the status of isSigned.
   * @param sign Boolean for the status of the sign.
   */
  void setSigned(bool sign);
  /**
   * @brief Getter for the required grade sign it.
   * @return Grade needed to execute.
   */
  unsigned int getSignGrade() const;
  /**
   * @brief Getter for the required grade execute it.
   * @return Grade needed to execute.
   */
  unsigned int getExecGrade() const;
  /**
   * @brief Takes a Bureaucrat as a parameter, changing the form status to
   * signed if e bureaucrat’s grade is high enough (higher or egal to the
   * required one). If the grade is too low, throw a Form::GradeTooLowException.
   * @param signer The Signer Bureaucrat.
   */
  void beSigned(Bureaucrat &signer);

  /**
   * @brief A function to execute the form’s action of the concrete
   * class.
   * @param executor The Executor Bureaucrat.
   */
  void execute(Bureaucrat const &executor) const;

  /**
   * @brief Pure virtual to be redifined in concrete classes as the execution.
   */
  virtual void executer() const = 0;

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

  class FormIsNotSigned : public std::exception {
    /** @brief Throws an exception indicating that the Form is not signed. */
    const char *what() const throw();
  };
};

/** @brief Prints the information about the Form in the format
 * "This form is named: <Name> and its "signed "/"not signed " the required
 * grade to sign it is <SignRequiredGrade> and the required grade to execute it
 * is <RequiredExecGrade> */
std::ostream &operator<<(std::ostream &os, const Form &obj);

#endif // AFORM_HPP
