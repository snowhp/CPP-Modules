// Created by tde-sous on 28-02-2024.
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>

#define DIGITS "0123456789"

typedef enum { CHAR, INT, FLOAT, DOUBLE, INFINITE } t_type;

class ScalarConverter {
private:
  /**
   * @brief Default constructor.
   */
  ScalarConverter();
  /**
   * @brief Copy constructor.
   * @param other ScalarConverter to be copied.
   */
  ScalarConverter(const ScalarConverter &other);
  /**
   * @brief Copy assignment operator.
   * @param other ScalarConverter to be copied.
   * @return The new copy of the ScalarConverter.
   */
  ScalarConverter &operator=(const ScalarConverter &other);
  /**
   * @brief Destructor.
   */
  virtual ~ScalarConverter() = 0;
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
  /**
   *
   * @param representation The string to be checked.
   * @return True if is a Double otherwise false.
   */
  static bool isInfinite(const std::string &representation);
  /**
   * @brief Converts the representation into char, int, double and float.
   * @param representation The string to be represented.
   * @param number The converted number of that string.
   */
  static void convertToNumber(const std::string &representation,
                              long double number);
  /**
   * @brief Converts infinite representations
   * @param representation The number to be represented.
   */
  static void convertFromInfinite(const std::string &representation);
  /**
   * @brief Converts from chart.
   * @param representation The char to be represented.
   */
  static void convertFromChar(const std::string &representation);
  /**
   *
   * @param c The char to be printed.
   */
  static void convertToChar(const char &c);

public:
  /**
   *  @brief Converts and outputs the following scalar types: char, int, float,
   * double.
   *  @param representation The string to be converted
   */
  static void convert(const std::string &representation);
};

#endif // SCALARCONVERTER_HPP