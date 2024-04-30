/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:38:58 by macarval          #+#    #+#             */
/*   Updated: 2024/04/30 10:55:43 by macarval         ###   ########.fr       */
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
void ScalarConverter::convert(std::string str)
{
	std::cout << "Ok: " << str << std::endl;
}
