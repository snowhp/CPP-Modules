// Created by tde-sous on 4/1/24.
#ifndef EX00_BITCOINEXCHANGE_HPP
#define EX00_BITCOINEXCHANGE_HPP

#include <algorithm>
#include <cstdlib>
#include <exception>
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <time.h>

class BitcoinExchange {
private:
  std::map<std::string, float> list_;
  template <typename T>
  static std::string NumberToString(T Number);

  float findValue(float date);
  /**
   * @brief Default constructor.
   */
  BitcoinExchange();
  void parseDatabase();
  /*
   * @brief Read and parse the input file.
   */
  void parseInputFile(const char *file);
  /**
   * @brief Check if the date is valid by
   * day and month.
   * @param date The reference to the data
   * @return True if its valid otherwise false.
   */
  static bool isValidData(const tm &date);

public:
  /**
   * @brief Constructor with parameter file.
   * @param file The file to be used as input
   */
  explicit BitcoinExchange(const char *file);
  /**
   * @brief Copy constructor.
   * @param other The other BitcoinExchange to copy.
   */
  BitcoinExchange(const BitcoinExchange &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other BitcoinExchange to assign.
   * @return A reference to the assigned BitcoinExchange.
   */
  BitcoinExchange &operator=(const BitcoinExchange &other);
  /**
   * @brief Destructor.
   */
  ~BitcoinExchange();

  class noDatabaseFile : public std::exception {
    const char *what() const throw();
  };

  class amountOutOfRange : public std::exception {
    const char *what() const throw();
  };

  class invalidDate : public std::exception {
    const char *what() const throw();
  };

  class invalidFormat : public std::exception {
    const char *what() const throw();
  };

  class wrongHeader : public std::exception {
    const char *what() const throw();
  };

  class nothingToRead : public std::exception {
    const char *what() const throw();
  };
};

#endif // EX00_BITCOINEXCHANGE_HPP