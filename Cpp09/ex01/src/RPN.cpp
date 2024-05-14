/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:44:20 by macarval          #+#    #+#             */
/*   Updated: 2024/05/14 17:21:16 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// Constructor & Destructor ===================================================
RPN::RPN( void ) {}

RPN::RPN( RPN const &copy )
{
	*this = copy;
}

RPN::~RPN( void ) {}

// Operators ==================================================================
RPN& RPN::operator=( RPN const &other )
{
	if (this != &other)
		*this = other;
	return *this;
}

// Getters ====================================================================

// Setters ====================================================================

// Methods ====================================================================
void RPN::run( std::string argv )
{
	for (size_t i = 0; i < argv.length(); ++i)
	{
		while (argv[i] == ' ')
			++i;
		if (std::isdigit(argv[i]) && argv[i + 1] && std::isdigit(argv[i + 1]))
			std::cout << "Error" << std::endl;
	}
	std::cout << std::endl;
}

// Exceptions =================================================================
