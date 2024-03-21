/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:44:22 by macarval          #+#    #+#             */
/*   Updated: 2024/03/20 23:22:29 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account (int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_totalAmount += initial_deposit;
	_totalNbDeposits++;
}

Account::~Account(void)
{
	_nbAccounts--;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}
int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}
int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}
void	Account::displayAccountsInfos(void)
{

}

void	Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
}
bool	Account::makeWithdrawal(int withdrawal)
{
	this->_nbWithdrawals += withdrawal;
	return (true);
}
int		Account::checkAmount(void) const
{
	return (0);
}
void	Account::displayStatus(void) const
{

}

void	Account::_displayTimestamp(void)
{

}
