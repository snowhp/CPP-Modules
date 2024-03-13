// Created by tde-sous on 28-02-2024.
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

#define DIGITS "0123456789"

class ScalarConverter {
private:
  /**
   *
   * @param representation The string to be checked.
   * @return True if is a Char otherwise false.
   */
  static bool isChar(const std::string &representation);
  /**
   *
   * @param representation The string to be checked.
   * @return True if is a Integer otherwise false.
   */
  static bool isInteger(const std::string &representation);
  /**
   *
   * @param representation The string to be checked.
   * @return True if is a Float otherwise false.
   */
  static bool isFloat(const std::string &representation);
  /**
   *
   * @param representation The string to be checked.
   * @return True if is a Double otherwise false.
   */
  static bool isDouble(const std::string &representation);

public:
  /**
   * @brief Destructor.
   */
  virtual ~ScalarConverter() = 0;
  /**
   *  @brief Converts and outputs the following scalar types: char, int, float,
   * double.
   *  @param representation The string to be converted
   */
  static void convert(const std::string &representation);
};

#endif // SCALARCONVERTER_HPP