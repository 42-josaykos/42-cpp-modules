#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

int Account::getNbAccounts(void) { return _nbAccounts; }

int Account::getTotalAmount(void) { return _totalAmount; }

int Account::getNbDeposits(void) { return _totalNbDeposits; }

int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

void Account::displayAccountsInfos(void) { return; }

Account::Account(int initial_deposit) {
  _nbAccounts++;
  this->_accountIndex = _nbAccounts - 1;
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex;
  std::cout << ";amount:" << initial_deposit;
  std::cout << ";created";
  std::cout << std::endl;
  return;
}

Account::~Account(void) { return; }

void Account::makeDeposit(int deposit) {
  this->_amount += deposit;
  this->_nbDeposits++;
  return;
}

bool Account::makeWithdrawal(int withdrawal) {
  (void)withdrawal;
  bool ret = false;
  this->_nbWithdrawals++;
  return ret;
}

int Account::checkAmount(void) const {
  int ret = 0;
  return ret;
}

void Account::displayStatus(void) const {
  std::cout << this->_nbDeposits << std::endl;
  std::cout << this->_totalNbWithdrawals << std::endl;
  return;
}

void Account::_displayTimestamp(void) {
  std::cout << "[YYYYMMDD_HHMMSS] ";
  return;
}

Account::Account(void) { return; }