/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:37:48 by nel-baz           #+#    #+#             */
/*   Updated: 2023/11/19 13:43:02 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account :: Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout<<"index:"<<_accountIndex<<";"
	         <<"amount:"<<_amount<<";"
	         <<"created"<<"\n";
	_totalAmount += _amount;
	_nbAccounts++;
}

int Account :: getNbAccounts()
{
	return(_nbAccounts);
}

int Account :: getTotalAmount()
{
	return(_totalAmount);
}

int Account :: getNbDeposits()
{
	return(_totalNbDeposits);
}

int Account :: getNbWithdrawals()
{
	return(_totalNbWithdrawals);
}

void Account :: displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";"
              << "total:" << _totalAmount << ";"
              << "deposits:" << _totalNbDeposits << ";"
              << "withdrawals:" << _totalNbWithdrawals << "\n";
}

void Account :: makeDeposit(int deposit)
{
	_displayTimestamp();
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout << "index:" << _accountIndex << ";"
	          << "p_amount:" << _amount << ";"
	          << "deposit:" << deposit << ";"
	          << "amount:" <<_amount + deposit << ";"
	          << "nb_deposits:" << _nbDeposits << "\n";
	_amount += deposit;
	_totalAmount += deposit;
}

bool Account :: makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
	          << "p_amount:" << _amount << ";";
	if (_amount > withdrawal)
	{
		_amount -= withdrawal;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		std::cout << "withdrawal:" << withdrawal << ";"
		          << "amount:" << _amount<< ";"
		          << "nb_withdrawals:" << _nbWithdrawals << "\n";
		return(true);
	}
	else
	{
		std::cout<<"withdrawal:refused\n";
		return(false);
	}
}

int Account :: checkAmount( void ) const
{
	return (_amount);
}

void Account :: displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
	          << "amount:" << _amount << ";"
	          << "deposits:" << _nbDeposits << ";"
	          << "withdrawals:" << _nbWithdrawals << "\n";
}

Account :: ~Account()
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";"
	         <<"amount:"<<_amount<<";"
	         <<"closed"<<"\n";
	_totalAmount -= _amount;
	_nbAccounts--;
}

void Account:: _displayTimestamp()
{
	std::time_t currentTime = std::time(nullptr);
	char buffer[18];
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", std::localtime(&currentTime));
	std::cout << buffer<<" ";
}