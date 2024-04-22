/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:14:30 by macarval          #+#    #+#             */
/*   Updated: 2024/04/22 18:17:19 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria( "ice" )
{
	std::cout << PURPLE;
	std::cout << "A new Ice materia has been created!\n";
	std::cout << RESET;
}

Ice::Ice( Ice const &copy ) : AMateria( copy )
{
	*this = copy;
	std::cout << YELLOW;
	std::cout << "A new Ice materia has been created by copy!" << std::endl;
	std::cout << RESET;
}

Ice::~Ice( void )
{
	std::cout << RED;
	std::cout << "A Ice materia has been destroyed!" << std::endl;
	std::cout << RESET;
}

Ice& Ice::operator=( Ice const &other )
{
	std::cout << "Copy Ice materia assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

AMateria* Ice::clone() const
{
	std::cout << BLUE;
	std::cout << "Ice materia has been cloned!" << std::endl;
	std::cout << RESET;
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << GREEN;
	std::cout << "* shoots an ice bolt at ";
	std::cout << target.getName() << " *" << std::endl;
	std::cout << RESET;
}
