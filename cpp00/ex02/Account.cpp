/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos <marcos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:29:02 by msantos-          #+#    #+#             */
/*   Updated: 2022/02/14 20:35:44 by marcos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
    //_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< initial_deposit << ";created" << std::endl;
}

Account::~Account(void)
{
    //_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";closed" << std::endl;
}

void	Account::_displayTimestamp(void)
{
    char		buff[16];
    std::time_t result = std::time(nullptr);
    strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", localtime(&result));
    std::cout << "[" << buff << "] " ;   
}

void Account::displayAccountsInfos(void)
{
    //[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
    //_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:"
		<< _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;;
}


void Account::displayStatus(void) const
{
    //index:0;amount:42;deposits:0;withdrawals:0
    //_displayTimestamp();
	std::cout << "index:" <<_accountIndex << ";amount:"
		<< _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;;
}

void	Account::makeDeposit(int deposit)
{
	int	previous;

	previous = _amount;
	_amount += deposit;
	this->_nbDeposits++;
	//_displayTimestamp();
	//index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< previous << ";deposit:" << deposit <<
		";amount:" << this->_amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	//[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
	int	previous;

	previous = _amount;
	if (withdrawal > _amount)
	{
		//_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< previous << ";withdrawal:refused" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	this->_nbWithdrawals++;
	//_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< previous << ";withdrawal:" << withdrawal <<
		";amount:" << this->_amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}
