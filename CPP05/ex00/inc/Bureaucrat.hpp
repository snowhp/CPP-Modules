// Created by tde-sous on 07-02-2024.
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {
private:
  std::string const name_;
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
   * @brief Increment the Grade of the Bureaucrat by the value -1.
   */
  void incrementGrade();
  /**
   * @brief Decrement the Grade of the Bureaucrat by the value +1.
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

  class GradeTooHighException : public std::exception {
    /** @brief Throws an exception indicating a grade was outside the allowed
     * range. Grade value is lower than 1. */
    const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
    /** @brief Throws an exception indicating a grade was outside the allowed
     * range. Grade value is greater than 150. */
    const char *what() const throw();
  };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif // BUREAUCRAT_HPP