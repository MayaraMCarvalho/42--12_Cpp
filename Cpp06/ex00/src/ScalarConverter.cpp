/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:38:58 by macarval          #+#    #+#             */
/*   Updated: 2024/05/02 23:26:28 by macarval         ###   ########.fr       */
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

bool ScalarConverter::isPseudo( const std::string str )
{
	std::string pseudos[6] = { "-inff", "+inff", "-inf", "+inf", "nan", "nanf" };

	for (int i = 0; i < 6; ++i)
	{
		if (pseudos[i] == str)
			return true;
	}
	return false;
}

int ScalarConverter::getType( std::string str )
{
	if (str.empty())
		return INVALID;
	types checkTypes[5] = { &ScalarConverter::isChar,
							&ScalarConverter::isInt,
							&ScalarConverter::isFloat,
							&ScalarConverter::isDouble,
							&ScalarConverter::isPseudo };
	for (int i = 0; i < 5; i++)
	{
		if (checkTypes[i](str))
			return allTypes(i);
	}
	return INVALID;
}

void ScalarConverter::fromChar( std::string str )
{
	int	c;
	int	error = 0;

	if (str.length() == 1 && str[0] >='0' && str[0] <= '9')
		c = str[0] - 48;
	else
		c = static_cast<char>(str[0]);
	int i = static_cast<int>(c);
	float f = static_cast<float>(c);
	double d = static_cast<double>(c);

	if (str.length() == 1 && str[0] >='0' && str[0] <= '9')
		c -= 49;

	printTypes(c, i, f, d, error);
}

void ScalarConverter::fromInt( std::string str )
{
	char*	ptr;
	int		error = 0;

	long int l = std::strtol(str.c_str(), &ptr, 10);
	int i = static_cast<int>(l);
	char c = static_cast<char>(i);
	float f = static_cast<float>(i);
	double d = static_cast<double>(i);

	if (l > INT_MAX || l < INT_MIN)
		error = 2;

	printTypes(c, i, f, d, error);
}

void ScalarConverter::fromFloat( std::string str )
{
	char*	ptr;
	int		error = 0;

	float f = std::strtof(str.c_str(), &ptr);
	char c = static_cast<char>(f);
	int i = static_cast<int>(f);
	double d = static_cast<double>(f);

	if (f > static_cast<float>(INT_MAX) || f < static_cast<float>(INT_MIN))
		error = 1;

	printTypes(c, i, f, d, error);
}

void ScalarConverter::fromDouble( std::string str )
{
	char*	ptr;
	int		error = 0;

	double d = std::strtod(str.c_str(), &ptr);
	char c = static_cast<char>(d);
	int i = static_cast<int>(d);
	float f = static_cast<float>(d);

	if (d > INT_MAX || d < INT_MIN)
		error = 1;
	printTypes(c, i, f, d, error);
}

void ScalarConverter::fromPseudo( std::string str )
{
	std::cout << BLUE << "🔤 char:   ";
	std::cout << RED << "impossible";
	std::cout << RESET << std::endl;

	std::cout << GREEN << "🔢 int:    ";
	std::cout << RED << "impossible";
	std::cout << RESET << std::endl;

	std::cout << CYAN << "🫧  float:  ";
	std::cout << str;
	if (str == "nan" || str == "+inf" || str == "-inf")
		std::cout << "f";
	std::cout << RESET << std::endl;

	std::cout << PURPLE << "💲 double: ";
	if (str == "nanf" || str == "+inff" || str == "-inff")
		str.erase(str.length() - 1);
	std::cout << str;
	std::cout << RESET << std::endl;
}

void ScalarConverter::printTypes( char c, int i, float f, double d, int error )
{
	std::cout << BLUE << "🔤 char:   ";
	if (i < CHAR_MIN || i > CHAR_MAX)
		std::cout << RED << "impossible";
	else if (!isprint(c))
		std::cout << RED << "Non displayable";
	else
		std::cout << "'" << c << "'";
	std::cout << RESET << std::endl;

	std::cout << GREEN << "🔢 int:    ";
	if (error)
		std::cout << RED << "impossible";
	else
		std::cout << i;
	std::cout << RESET << std::endl;

	std::cout << CYAN << "🫧  float:  ";
	if (error == 2)
		std::cout << RED << "impossible";
	else
		std::cout << std::fixed << std::setprecision(1) << f << "f";
	std::cout << RESET << std::endl;

	std::cout << PURPLE << "💲 double: ";
	if (error == 2)
		std::cout << RED << "impossible";
	else
		std::cout << std::fixed << std::setprecision(1) << d;
	std::cout << RESET << std::endl;
}

void ScalarConverter::convert( std::string str )
{
	int	type;

	type = getType(str);

	void (* functions[5])(std::string) = {
							&fromChar,
							&fromInt,
							&fromFloat,
							&fromDouble,
							&fromPseudo };

	if (type < 5)
		(*functions[type])(str);
	else
		std::cout << RED << "Error: invalid parameter!!!" << RESET << std::endl;
}
