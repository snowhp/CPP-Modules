// Created by tde-sous on 4/1/24.
#ifndef EX00_BITCOINEXCHANGE_HPP
#define EX00_BITCOINEXCHANGE_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <exception>
# include <time.h>
# include <cstdlib>


class BitcoinExchange {
private:
  /**
   * @brief Default constructor.
   */
  BitcoinExchange();
  /*
   * @brief Read and parse the input file.
   */
  void parseInputFile(const char *file);
  static bool isValidData(const tm& date);

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


  class amountOutOfRange : public std::exception
  {
    const char *what() const throw();
  };

  class invalidDate : public std::exception
  {
    const char *what() const throw();
  };

  class invalidFormat : public std::exception
  {
    const char *what() const throw();
  };

  class wrongHeader : public std::exception
  {
      const char *what() const throw();
  };

  class nothingToRead : public std::exception
  {
    const char *what() const throw();
  };
};

#endif // EX00_BITCOINEXCHANGE_HPP