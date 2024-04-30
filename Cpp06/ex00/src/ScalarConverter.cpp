/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:38:58 by macarval          #+#    #+#             */
/*   Updated: 2024/04/30 16:52:21 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Constructor & Destructor ===================================================
ScalarConverter::ScalarConverter( void )
{
	std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter( ScalarConverter const &copy )
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter( void )
{
	std::cout << "Destructor called" << std::endl;
}

// Operators ==================================================================
ScalarConverter& ScalarConverter::operator=( ScalarConverter const &other )
{
	if (this != &other)
	{
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

// Methods ====================================================================
static std::string getType( std::string str )
{
	if (str[0] != '\0'){}
	return ("tipo");
}

static void toChar( std::string str )
{
	if (str.length() == 1)
	{
		char singleChar = str[0];
		if (atol(str.c_str()) < CHAR_MIN || atol(str.c_str()) > CHAR_MAX)
			std::cout << RED << "impossible" << RESET;
		else if (!isprint(singleChar))
			std::cout << RED << "not displayable!";
		else
			std::cout << singleChar;
	}
	else
		std::cout << RED << "impossible" << RESET;
}

static void toInt( std::string str )
{
	std::cout << str;
}

static void toFloat( std::string str )
{
	std::cout << str;
}

static void toDouble( std::string str )
{
	std::cout << str;
}

void ScalarConverter::convert( std::string str )
{
	std::string	type;

	std::cout << "Type: " << getType(str) << std::endl;
	std::cout << BLUE << "🔤 char: ";
	toChar(str);
	std::cout << RESET << std::endl; //convert to char

	std::cout << GREEN << "🔢 int: ";
	toInt(str);
	std::cout << RESET << std::endl; //convert to int

	std::cout << CYAN << "🫧  float: ";
	toFloat(str);
	std::cout << RESET << std::endl; //convert to float

	std::cout << PURPLE << "💲 double: ";
	toDouble(str);
	std::cout << RESET << std::endl; //convert to double
}
