/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:26:10 by bde-luce          #+#    #+#             */
/*   Updated: 2025/10/28 18:24:52 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Account.hpp"
#include <iostream>
#include <ctime>

int	Account :: _nbAccounts = 0;
int	Account :: _totalAmount = 0;
int	Account :: _totalNbDeposits = 0;
int	Account :: _totalNbWithdrawals = 0;

Account :: Account (int initial_deposit)
{
	_displayTimestamp();
	
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	
	++_nbAccounts;
	_totalAmount += initial_deposit;

	std :: cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account :: ~Account()
{
	_displayTimestamp();
	
	std :: cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

int	Account :: getNbAccounts()
{
	return (_nbAccounts);
}

int	Account :: getTotalAmount()
{
	return (_totalAmount);
}

int	Account :: getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account :: getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account :: displayAccountsInfos()
{
	_displayTimestamp();
	
	std :: cout << "accounts:" << getNbAccounts();
	std :: cout <<  ";total:" << getTotalAmount();
	std :: cout << ";deposits:" << getNbDeposits();
	std :: cout << ";withdrawals:" << getNbWithdrawals() << "\n";
}

void	Account :: displayStatus() const
{
	_displayTimestamp();
	
	std :: cout << "index:" << _accountIndex;
	std :: cout << ";amount:" << _amount;
	std :: cout << ";deposits:" << _nbDeposits;
	std :: cout << ";withdrawals:" << _nbWithdrawals << "\n";
}

void	Account :: makeDeposit(int deposit)
{
	_displayTimestamp();
	
	std :: cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;

	_amount += deposit;
	++_nbDeposits;
	_totalAmount += deposit;
	++_totalNbDeposits;
	
	std :: cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << "\n";
}

int		Account :: checkAmount() const
{
	return (_amount >= 0);
}

bool	Account :: makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	
	std :: cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	
	_amount -= withdrawal;

	if (!checkAmount())
	{
		_amount +=withdrawal;
		std :: cout << "refused\n";
		return (false);
	}
	_nbWithdrawals += 1;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals += 1;

	std :: cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << "\n";
	return (true);
}

void	Account :: _displayTimestamp()
{
    std::time_t     now = std::time(NULL);
    std::tm*        lt  = std::localtime(&now);

    char buf[32];
	
    if (std::strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S] ", lt)) {
        std::cout << buf;
    } else {
        std::cout << "[00000000_000000] ";
    }
}