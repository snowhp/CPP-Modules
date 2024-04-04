// Created by tde-sous on 4/1/24.
#ifndef EX00_BITCOINEXCHANGE_HPP
#define EX00_BITCOINEXCHANGE_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <exception>
# include <time.h>


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

  /**
   * Invalid format
   */
  class invalidFormat : public std::exception
  {
    const char *what() const throw();
  };
  /**
   * Wrong Header in the input file exception.
   */
  class wrongHeader : public std::exception
  {
      const char *what() const throw();
  };
  /**
   * Wrong Header in the input file exception.
   */
  class nothingToRead : public std::exception
  {
    const char *what() const throw();
  };
};

#endif // EX00_BITCOINEXCHANGE_HPP