// Created by tde-sous on 4/1/24.
#ifndef EX00_BITCOINEXCHANGE_HPP
#define EX00_BITCOINEXCHANGE_HPP

class BitcoinExchange {
public:
  /**
   * @brief Default constructor.
   */
  BitcoinExchange();
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
};

#endif // EX00_BITCOINEXCHANGE_HPP