// Created by tde-sous on 28-02-2024.
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter {
private:
 static void convertToChar(const std::string &representation);
 static void convertToInt(const std::string &representation);
 static void convertToFloat(const std::string &representation);
 static void convertToDouble(const std::string &representation);
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