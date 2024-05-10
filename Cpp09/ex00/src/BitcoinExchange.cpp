/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:19:38 by macarval          #+#    #+#             */
/*   Updated: 2024/05/10 13:40:57 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Constructor & Destructor ===================================================
BitcoinExchange::BitcoinExchange( void ) {}

BitcoinExchange::BitcoinExchange( BitcoinExchange const &copy )
{
	*this = copy;
}

BitcoinExchange::~BitcoinExchange( void ) {}

// Operators ==================================================================
BitcoinExchange& BitcoinExchange::operator=( BitcoinExchange const &other )
{
	if (this != &other)
		*this = other;
	return *this;
}

// Getters ====================================================================

// Setters ====================================================================

// Methods ====================================================================
void BitcoinExchange::_getInputData( std::ifstream file ) const
{
	std::string	line;

	if (_verifyHeader(std::getline(file, line)))
		throw InvalidInputException();

}

void BitcoinExchange::readInput( std::string fileName )
{
	std::ifstream	file(fileName.c_str());

	if (!file.is_open())
		throw InputFileNotOpenException();
	file.peek();
	if (file.eof())
	{
		file.close();
		throw InputFileEmptyException();
	}
	_getInputData( file );
}

void BitcoinExchange::_getInputData( void ) const
{

}

// Exceptions =================================================================
const char *BitcoinExchange::InputFileEmptyException::what() const throw()
{
	return "Input file is empty!";
}

const char *BitcoinExchange::InputFileNotOpenException::what() const throw()
{
	return "Could not opening input file!";
}

const char *BitcoinExchange::InvalidInputException::what() const throw()
{
	return "Input file format is invalid!";
}


