/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 02:25:41 by fheaton-          #+#    #+#             */
/*   Updated: 2026/05/11 16:59:11 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Account.hpp>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(){
	return _nbAccounts;
}

int Account::getTotalAmount(){
	return _totalAmount;
}

int Account::getNbDeposits(){
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(){
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(){
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account(int init_deposit) {
	_displayTimestamp();
	this->_accountIndex = _nbAccounts++;
	this->_amount = init_deposit;
	this->_totalAmount += init_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created\n";
}

Account::Account(){}

Account::~Account(){
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed\n";
}

void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
	if (this->_amount < withdrawal) {
		std::cout << "refused\n";
		return false;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

int Account::checkAmount() const {
	return this->_amount;
}

void Account::displayStatus() const {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(){
	time_t	timestamp;
	tm	*ts;
	time(&timestamp);
	ts = gmtime(&timestamp);
	std::cout << "[" <<  (ts->tm_year + 1900);
	if (ts->tm_mon < 10)
		std::cout << "0" << ts->tm_mon;
	else
		std::cout << ts->tm_mon;
	if (ts->tm_mday < 10)
		std::cout << "0" << ts->tm_mday;
	else
		std::cout << ts->tm_mday;
	std::cout << "_";
	if (ts->tm_hour < 10)
		std::cout << "0" << ts->tm_hour;
	else
		std::cout << ts->tm_hour;
	if (ts->tm_min < 10)
		std::cout << "0" << ts->tm_min;
	else
		std::cout << ts->tm_min;
	if (ts->tm_sec < 10)
		std::cout << "0" << ts->tm_sec;
	else
		std::cout << ts->tm_sec;
	std::cout << "]";
}
