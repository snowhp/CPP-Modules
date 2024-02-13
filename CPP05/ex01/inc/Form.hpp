// Created by tde-sous on 13-02-2024.
#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

class Form {
private:
  /* The Name of the Form */
  std::string const name_;
  /* Signed or not. At construction is not*/
  bool isSigned_;
  /* A constant grade required to sign it */
  unsigned int signGrade_;
  /* A constant grade required to execute it*/
  unsigned int execGrade_;

public:
  /**
   * @brief Constructor with Name, signGrade and execGrade requirements.
   * @param name The Name of the Form.
   * @param signGrade The Required Grade to sign.
   * @param execGrade The Required Grade to execute.
   */
  Form(const std::string& name, unsigned int signGrade, unsigned int execGrade);
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
  ~Form();
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
   * @brief Getter for the required grade execute it.
   * @return Grade needed to execute.
   */
  unsigned int getSignGrade() const;
  /**
   * @brief Getter for the required grade sign it.
   * @return Grade needed to execute.
   */
  unsigned int getExecGrade() const;

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

std::ostream &operator<<(std::ostream &os, const Form &obj);

#endif // FORM_HPP