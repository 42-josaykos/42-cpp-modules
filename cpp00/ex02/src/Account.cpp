#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

int Account::getNbAccounts(void) { return _nbAccounts; }

int Account::getTotalAmount(void) { return _totalAmount; }

int Account::getNbDeposits(void) { return _totalNbDeposits; }

int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

void Account::displayAccountsInfos(void) {
  _displayTimestamp();
  std::cout << "accounts:" << _nbAccounts;
  std::cout << ";total:" << _totalAmount;
  std::cout << ";deposits:" << _totalNbDeposits;
  std::cout << ";withdrawals:" << _totalNbWithdrawals;
  std::cout << std::endl;
  return;
}

Account::Account(int initial_deposit) : _amount(initial_deposit) {
  _nbAccounts++;
  this->_accountIndex = _nbAccounts - 1;
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex;
  std::cout << ";amount:" << initial_deposit;
  std::cout << ";created";
  std::cout << std::endl;
  _totalAmount += initial_deposit;
  return;
}

Account::~Account(void) {
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex;
  std::cout << ";amount:" << this->_amount;
  std::cout << ";closed";
  std::cout << std::endl;
  return;
}

void Account::makeDeposit(int deposit) {
  _displayTimestamp();
  this->_nbDeposits++;
  _totalNbDeposits++;
  _totalAmount += deposit;
  std::cout << "index:" << this->_accountIndex;
  std::cout << ";p_amount:" << this->_amount;
  std::cout << ";deposit:" << deposit;
  this->_amount += deposit;
  std::cout << ";amount:" << this->_amount;
  std::cout << ";nb_deposits:" << this->_nbDeposits;
  std::cout << std::endl;
  return;
}

bool Account::makeWithdrawal(int withdrawal) {
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex;
  std::cout << ";p_amount:" << this->_amount;
  if (this->_amount >= withdrawal) {
    this->_nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    std::cout << ";withdrawal:" << withdrawal;
    this->_amount -= withdrawal;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";nb_withdrawals:" << this->_nbDeposits;
    std::cout << std::endl;
    return (true);
  } else {
    std::cout << ";withdrawal:refused";
    std::cout << std::endl;
  }
  return false;
}

int Account::checkAmount(void) const { return this->_amount; }

void Account::displayStatus(void) const {
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex;
  std::cout << ";amount:" << this->_amount;
  std::cout << ";deposits:" << this->_nbDeposits;
  std::cout << ";withdrawals:" << this->_nbWithdrawals;
  std::cout << std::endl;
  return;
}

void Account::_displayTimestamp(void) {
  time_t now = std::time(0);
  struct tm *tm = std::localtime(&now);

  std::cout.fill('0');
  std::cout << "[" << (1900 + tm->tm_year) << std::setw(2) << (tm->tm_mon + 1);
  std::cout << std::setw(2) << tm->tm_mday << "_" << std::setw(2) << tm->tm_hour
            << std::setw(2) << tm->tm_min << std::setw(2) << tm->tm_sec;
  std::cout << "] ";
  return;
}

Account::Account(void) { return; }