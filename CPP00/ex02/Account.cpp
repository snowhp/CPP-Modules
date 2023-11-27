#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts() {
    return (_nbAccounts);
}

int Account::getTotalAmount() {
    return(_totalAmount);
}

int Account::getNbDeposits() {
    return(_totalNbDeposits);
}

int Account::getNbWithdrawals() {
    return(_totalNbWithdrawals);
}

void Account::displayAccountsInfos() {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
        << ";total:" << _totalAmount
        << ";deposits:" << _totalNbDeposits
        << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit) {
    _accountIndex = _nbAccounts++;
    _totalAmount += initial_deposit;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
        << ";amount:" << _amount
        << ";created\n";
}

Account::~Account() {
    _displayTimestamp();
    std::cout << "Account destructed " << _accountIndex << std::endl;
}

void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
        << ";p_amount:" << _amount
        << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits += 1;
    _totalNbDeposits += 1;
    std::cout << ";amount:" << _amount
        << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount
              << ";withdrawal:";
    if ((_amount - withdrawal) < 0)
        return (std::cout << "refused\n", false);
    std::cout << withdrawal;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals += 1;
    _totalNbWithdrawals += 1;
    std::cout << ";amount:" << _amount
              << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (true);
}

void Account::displayStatus() const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
        << ";amount:" << _amount
        << ";deposits:" << _nbDeposits
        << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp() {
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    std::cout << '['
                << std::setw(2) << std::setfill('0') << (now->tm_year + 1900)
                << std::setw(2) << std::setfill('0') << (now->tm_mon + 1)
                << std::setw(2) << std::setfill('0') << now->tm_mday << '_'
                << std::setw(2) << std::setfill('0') << now->tm_hour
                << std::setw(2) << std::setfill('0') << now->tm_min
                << std::setw(2) << std::setfill('0') << now->tm_sec << "] ";
}