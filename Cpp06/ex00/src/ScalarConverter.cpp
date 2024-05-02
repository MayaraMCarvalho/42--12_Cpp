/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:38:58 by macarval          #+#    #+#             */
/*   Updated: 2024/05/01 22:10:57 by macarval         ###   ########.fr       */
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
bool ScalarConverter::isChar( const std::string str )
{
	if (str.length() == 1 && str.at(0) > 31 && str.at(0) < 127)
		return true;
	return false;
}

bool ScalarConverter::isInt( const std::string str )
{
	char* ptr;

	int value = static_cast<int>(std::strtol(str.c_str(), &ptr, 10));

	if ((errno != 0 && value == 0) || ptr == str.c_str())
		return false;
	if (str.find('.') == std::string::npos && *ptr == '\0')
		return true;
	return false;
}

bool ScalarConverter::isFloat( const std::string str )
{
	char* ptr;

	double value = std::strtof(str.c_str(), &ptr);

	if ((errno != 0 && value == 0) || ptr == str.c_str())
		return false;
	if (str.find('.') != std::string::npos && *ptr == 'f' && *(ptr + 1) == '\0')
		return true;
	return false;
}

bool ScalarConverter::isDouble( const std::string str )
{
 	char* ptr;

	double value = std::strtod(str.c_str(), &ptr);

	if ((errno != 0 && value == 0) || ptr == str.c_str())
		return false;
	if (str.find('.') != std::string::npos && *ptr == '\0')
		return true;
	return false;
}

int ScalarConverter::getType( std::string str )
{
	if (str.empty())
		return INVALID;
	types checkTypes[4] = { &ScalarConverter::isChar,
							&ScalarConverter::isInt,
							&ScalarConverter::isFloat,
							&ScalarConverter::isDouble };
	for (int i = 0; i < 4; i++)
	{
		if (checkTypes[i](str))
			return allTypes(i);
	}
	return INVALID;
}

void ScalarConverter::fromChar( std::string str )
{
	int c = static_cast<char>(str[0]);
	int i = static_cast<int>(c);
	float f = static_cast<float>(c);
	double d = static_cast<double>(c);

	if (str.length() == 1 && str[0] >='0' && str[0] <= '9')
		c = 0;
	printTypes(c, i, f, d);
}

void ScalarConverter::fromInt( std::string str )
{
	char* ptr;

	int i = static_cast<int>(std::strtol(str.c_str(), &ptr, 10));
	char c = static_cast<char>(i);
	float f = static_cast<float>(i);
	double d = static_cast<double>(i);

	printTypes(c, i, f, d);
}

void ScalarConverter::fromFloat( std::string str )
{
	char* ptr;

	float f = std::strtof(str.c_str(), &ptr);
	char c = static_cast<char>(f);
	int i = static_cast<int>(f);
	double d = static_cast<double>(f);

	printTypes(c, i, f, d);
}

void ScalarConverter::fromDouble( std::string str )
{
	char* ptr;

	double d = std::strtod(str.c_str(), &ptr);
	char c = static_cast<char>(d);
	int i = static_cast<int>(d);
	float f = static_cast<float>(d);

	printTypes(c, i, f, d);
}

std::string ScalarConverter::checkImpossible(int i, float f, double d)
{
	std::string	error = "";

	if (i == INT_MAX || i == INT_MIN)
		error += "i";
	if (f == HUGE_VAL || f == -HUGE_VAL)
		error += "f";
	if (d == HUGE_VAL || d == -HUGE_VAL)
		error += "d";
	return error;
}

void ScalarConverter::printTypes( char c, int i, float f, double d )
{
	std::string	error = checkImpossible(i, f, d);

	std::cout << BLUE << "🔤 char: ";
	if (!isprint(c))
		std::cout << RED << "Non displayable";
	else
		std::cout << c;
	std::cout << RESET << std::endl;

	std::cout << GREEN << "🔢 int: ";
	if (error.find('i') != std::string::npos)
		std::cout << RED << "Impossible";
	else
		std::cout << i;
	std::cout << RESET << std::endl;

	std::cout << CYAN << "🫧  float: ";
	if (error.find('f') != std::string::npos)
		std::cout << RED << "Impossible";
	else
		std::cout << f;
	std::cout << RESET << std::endl;

	std::cout << PURPLE << "💲 double: ";
	if (error.find('d') != std::string::npos)
		std::cout << RED << "Impossible";
	else
		std::cout << d;
	std::cout << RESET << std::endl;
}

void ScalarConverter::convert( std::string str )
{
	int	type;

	type = getType(str);

	void (* functions[4])(std::string) = {
							&fromChar,
							&fromInt,
							&fromFloat,
							&fromDouble };

	if (type < 4)
		(*functions[type])(str);
	else
		std::cout << RED << "Invalid type!!!" << RESET << std::endl;

}
