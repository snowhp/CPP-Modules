// Created by tde-sous on 07-02-2024.
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

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
  class GradeTooHighException : public std::exception {
    char *what();
  };
  class GradeTooLowException : public std::exception {
    char *what();
  };
};

#endif // BUREAUCRAT_HPP