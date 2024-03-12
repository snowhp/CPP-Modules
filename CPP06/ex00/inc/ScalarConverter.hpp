// Created by tde-sous on 28-02-2024.
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>

class ScalarConverter {
private:
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