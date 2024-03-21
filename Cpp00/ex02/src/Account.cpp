/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:44:22 by macarval          #+#    #+#             */
/*   Updated: 2024/03/21 11:39:43 by macarval         ###   ########.fr       */
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

Account::Account (int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_nbAccounts++;
}

Account::~Account(void)
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
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

// Para facilitar os testes, excluir *** depois e descomentar tudo
static void logFile(std::string text)
{
	// std::string	fileName;

	// fileName = getTime() + ".log";
	// std::ofstream file(fileName.c_str(), std::ios_base::app);
	// if (file.is_open())
	// {
		// file << text;
		std::cout << text;// ***
	// 	file.close(); // Feche o arquivo
	// } else
	// 	std::cerr << "Erro ao criar ou abrir o arquivo de log '" << fileName << "'.\n";
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	// criar info
	logFile("Info\n");
}

void	Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
}
bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal <= _amount)
	{
		this->_amount -=withdrawal;
		this->_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return (true);
	}
	else
		return (false);
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
	std::string	time;

	time = "[" + getTime() + "] ";
	// logFile(time);
	logFile("[19920104_091532] "); // excluir e descomentar acima
}
