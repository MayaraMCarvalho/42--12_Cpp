/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:17:27 by macarval          #+#    #+#             */
/*   Updated: 2024/04/04 20:17:41 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &copy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap &other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
	}
	return *this;
}
