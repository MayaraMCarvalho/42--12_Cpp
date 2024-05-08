/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:45:32 by macarval          #+#    #+#             */
/*   Updated: 2024/05/08 16:49:30 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructor & Destructor ===================================================
Span::Span( void )
{
	std::cout << "Default constructor called" << std::endl;
}

Span::Span( int N ) : _N(N)
{
	std::cout << "Default constructor called" << std::endl;
}


Span::Span( Span const &copy )
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Span::~Span( void )
{
	std::cout << "Destructor called" << std::endl;
}

// Operators ==================================================================
Span& Span::operator=( Span const &other )
{
	if (this != &other)
	{
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

// Getters ====================================================================

// Setters ====================================================================

// Methods ====================================================================
