/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:44:22 by macarval          #+#    #+#             */
/*   Updated: 2024/03/21 16:04:28 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream> //
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

static std::string getTime(void)
{
	std::time_t			currentTime;
	std::tm				*timeInfo;
	std::ostringstream	fileName;

	currentTime = std::time(NULL);
	timeInfo = std::localtime(&currentTime);

	fileName << std::setw(4) << std::setfill('0') << (timeInfo->tm_year + 1900)
			<< std::setw(2) << std::setfill('0') << (timeInfo->tm_mon + 1)
			<< std::setw(2) << std::setfill('0') << timeInfo->tm_mday
			<< "_"
			<< std::setw(2) << std::setfill('0') << timeInfo->tm_hour
			<< std::setw(2) << std::setfill('0') << timeInfo->tm_min
			<< std::setw(2) << std::setfill('0') << timeInfo->tm_sec;
	return (fileName.str());
}

static void logFile(std::string text)
{
	std::string	fileName;

	fileName = getTime() + ".log";
	std::ofstream file(fileName.c_str(), std::ios_base::app);
	if (file.is_open())
	{
		file << text;
		file.close();
	} else
		std::cerr << "Erro ao criar ou abrir o arquivo de log '" << fileName << "'.\n";
}

Account::Account (int initial_deposit)
{
	std::ostringstream	text;

	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	_displayTimestamp();
	text << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
	logFile(text.str());
}

Account::~Account(void)
{
	std::ostringstream	text;

	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
	_displayTimestamp();
	text << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
	logFile(text.str());
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
	std::ostringstream	text;

	_displayTimestamp();
	text << "accounts:" << _nbAccounts << ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits
		<< ";withdrawals:" << _totalNbWithdrawals << "\n";
	logFile(text.str());
}

void	Account::makeDeposit(int deposit)
{
	std::ostringstream	text;
	int					initAmount;

	initAmount = _amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	text << "index:" << _accountIndex << ";p_amount:" << initAmount
		<< ";deposit:" << deposit << ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits << "\n";
	logFile(text.str());
}
bool	Account::makeWithdrawal(int withdrawal)
{
	std::ostringstream	text;
	int					initAmount;

	initAmount = _amount;
	text << "index:" << _accountIndex
		<< ";p_amount:" << initAmount << ";withdrawal:";
	_displayTimestamp();
	if (withdrawal <= _amount)
	{
		this->_amount -=withdrawal;
		this->_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		text << withdrawal << ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals << "\n";
		logFile(text.str());
		return (true);
	}
	else
	{
		text << "refused" << "\n";
		logFile(text.str());
		return (false);
	}
}
int		Account::checkAmount(void) const
{
	return (0);
}
void	Account::displayStatus(void) const
{
	std::ostringstream	text;

	_displayTimestamp();
	text << "index:" << _accountIndex << ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << "\n";
	logFile(text.str());
}

void	Account::_displayTimestamp(void)
{
	std::string	time;

	time = "[" + getTime() + "] ";
	logFile(time);
}
