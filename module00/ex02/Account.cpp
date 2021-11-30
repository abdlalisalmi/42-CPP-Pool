/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:31:33 by aes-salm          #+#    #+#             */
/*   Updated: 2021/11/30 22:32:42 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
    _nbAccounts++;
    _totalAmount += initial_deposit;
}

Account::~Account(void) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::_displayTimestamp(void) {
    time_t  now = time(NULL);
    
    tm *time = localtime(&now);
    
    std::cout   << "[" << 1900 + time->tm_year
                << std::setfill('0') << std::setw(2) << time->tm_mon + 1
                << std::setfill('0') << std::setw(2) << time->tm_mday
                << '_'
                << std::setfill('0') << std::setw(2) << time->tm_hour
                << std::setfill('0') << std::setw(2) << time->tm_min
                << std::setfill('0') << std::setw(2) << time->tm_sec
                << "] ";
}

int Account::getNbAccounts(void) {
    return _nbAccounts;
}
int Account::getTotalAmount(void) {
    return _totalAmount;
}
int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}
int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}
void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout   << "accounts:" << _nbAccounts
                << ";total:" << _totalAmount
                << ";deposits:" << _totalNbDeposits
                << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}
void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex
                << ";p_amount:" << _amount
                << ";deposit:" << deposit;
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    std::cout   << ";amount:" << _amount
                << ";nb_deposits:" << _nbDeposits
                << std::endl;
}
bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex
                << ";p_amount:" << _amount
                << ";withdrawal:";
    if (_amount >= withdrawal) {
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        std::cout   << withdrawal
                    <<";amount:" << _amount
                    << ";nb_withdrawals:" << _nbWithdrawals
                    << std::endl;
        return true;
    } else {
        std::cout << "refused" << std::endl;
        return false;
    }
}
int Account::checkAmount(void) const {
    return _amount;
}
void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex
                << ";amount:" << _amount
                << ";deposits:" << _nbDeposits
                << ";withdrawals:" << _nbWithdrawals
                << std::endl;
}
