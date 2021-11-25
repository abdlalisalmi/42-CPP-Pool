/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:31:33 by aes-salm          #+#    #+#             */
/*   Updated: 2021/11/25 15:58:05 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

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
    std::cout << "Index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account(void) {
    _displayTimestamp();
    std::cout << "Index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

void Account::_displayTimestamp(void) {
    time_t  now = time(0);
    
    tm *time = localtime(&now);

    std::cout   <<"[" << 1900 + time->tm_year
                << 1 + time->tm_mon
                << time->tm_mday
                << '_'
                << time->tm_hour
                << time->tm_min
                << time->tm_sec
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
    std::cout   << "accounts:" << _nbAccounts + 1
                << ";total:" << _totalAmount
                << ";deposits:" << _totalNbDeposits
                << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}