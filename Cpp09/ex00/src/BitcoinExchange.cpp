/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:19:38 by macarval          #+#    #+#             */
/*   Updated: 2024/05/10 21:36:33 by macarval         ###   ########.fr       */
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

void BitcoinExchange::_getInputData( std::ifstream& file )
{
	std::string	line, date;
	float value;

	std::getline(file, line);
	_trim(line);
	_verifyHeader(line, INPUT);
	while (std::getline(file, line))
	{
		try
		{
			_trim(line);
			_verifyLine (line, date, value, INPUT);
			std::cout << GREEN;
			std::cout << date << " | " << value;
			std::cout << std::setw(10) << std::right << " => ";
			std::cout << "Ok";//print a cotação;
			std::cout << RESET << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << RED;
			std::cout << e.what() << std::endl;
			std::cout << RESET;
			continue ;
		}
	}
}

void BitcoinExchange::_trim( std::string& str )
{
	str.erase(0, str.find_first_not_of(" \t\r\n"));
	str.erase(str.find_last_not_of(" \t\r\n") + 1);
}

void BitcoinExchange::_verifyHeader( std::string& header, int type )
{
	std::istringstream	ss(header);
	std::string			date, value;
	std::string			standard = (type == INPUT) ? "value" : "exchange_rate";
	char				d = (type == INPUT) ? '|' : ',';

	if (std::getline(ss, date, d) && std::getline(ss, value))
	{
		_trim(date);
		_trim(value);
		if (!date.length() || !value.length()
			|| date != "date" || value != standard)
			throw InvalidInputException();
	}
	if (type == INPUT)
	{
		std::cout << PURPLE << std::endl;
		std::cout << date << std::setw(8) << std::right << d;
		std::cout << std::setw(6) << std::right << value;
		std::cout << RESET << std::endl;
	}
}

void BitcoinExchange::_verifyLine( std::string& line, std::string& date,
									float& value, int type )
{
	char	d = (type == INPUT) ? '|' : ',';
	size_t	pos = line.find(d);

	if (pos == std::string::npos || pos == 0 || pos == line.length() - 1)
	{
		std::cout << RED << line << RESET;
		throw BadInputException();
	}

	date = line.substr(0, pos);
	std::string str = line.substr(pos + 1);
	value = _getValue(str);

	_trim(date);
	if (!_verifyDate(date))
	{
		std::cout << RED << line << RESET;
		throw BadDateException();
	}
	if (!_verifyValueRange(value))
	{
		std::cout << RED << line << RESET;
		throw BadValueException();
	}
}

float BitcoinExchange::_getValue( std::string &str )
{
	float value;

	_trim(str);

	for (size_t i = 0; i < str.length(); ++i)
	{
		if (!str[i].isalpha() && str[i] != '.')
			throw BadValueException();//
	}

	std::istringstream iss(str);

	iss >> value;
	return value;

}
bool BitcoinExchange::_verifyDate( std::string& date )
{
	int	year, month, day;

	if (!_verifyDateFormat(date))
		return false;
	_getDate(date, year, month, day);
	if (!_verifyYear(year) || !_verifyMonth(month)
		|| !_verifyDay(day, month, year))
		return false;
	return true;
}

bool BitcoinExchange::_verifyDateFormat( std::string& date )
{
	if (date.length() != 10)
		return (false);
	for (int i = 0; i < 10; ++i)
	{
		if (i == 4 || i == 7)
		{
			if (date[i] != '-')
				return false;
		}
		else if (!std::isdigit(date[i]))
			return false;
	}
	return true;
}

void BitcoinExchange::_getDate( std::string& date, int& year, int &month, int& day )
{
	std::istringstream iss(date);
	std::string yearStr, monthStr, dayStr;

	std::getline(iss, yearStr, '-');
	std::getline(iss, monthStr, '-');
	std::getline(iss, dayStr);

	std::istringstream(yearStr) >> year;
	std::istringstream(monthStr) >> month;
	std::istringstream(dayStr) >> day;
}

bool BitcoinExchange::_verifyYear( int& year )
{
	return year >= 1 && year <= 9999;
}

bool BitcoinExchange::_verifyMonth( int& month )
{
	return month >= 1 && month <= 12;
}

bool BitcoinExchange::_verifyDay( int& day, int& month, int& year )
{
	int daysMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		daysMonth[1] = 29;
	return day >= 1 && day <= daysMonth[month - 1];
}


bool BitcoinExchange::_verifyValueRange( float& value )
{
	return value >=0 && value <= 1000;
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

const char *BitcoinExchange::BadInputException::what() const throw()
{
	return " <= bad input";
}

const char *BitcoinExchange::BadDateException::what() const throw()
{
	return " <= invalid date format";
}

const char *BitcoinExchange::BadValueException::what() const throw()
{
	return " <= invalid value";
}
