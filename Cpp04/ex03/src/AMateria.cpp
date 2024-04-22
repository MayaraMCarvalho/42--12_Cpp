/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:54:21 by macarval          #+#    #+#             */
/*   Updated: 2024/04/22 17:39:36 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("default")
{
	std::cout << GRAY;
	std::cout << "A new materia of type 'default' has been created!\n";
	std::cout << RESET;
}

AMateria::AMateria( std::string const & type ) : _type(type)
{
	std::cout << GREEN;
	std::cout << "A new materia of type '" << this->_type;
	std::cout << "' has been created!" << std::endl;
	std::cout << RESET;
}

AMateria::AMateria( AMateria const &copy )
{
	*this = copy;
	std::cout << YELLOW;
	std::cout << "A new '" << this->_type;
	std::cout << "' materia has been created by copy!" << std::endl;
	std::cout << RESET;
}

AMateria::~AMateria( void )
{
	std::cout << RED;
	std::cout << "A materia of type '" << this->_type;
	std::cout << "' has been destroyed!" << std::endl;
	std::cout << RESET;
}

AMateria& AMateria::operator=( AMateria const &other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << BLUE;
	std::cout << "* Spell " << this->_type;
	std::cout << " used at " << target.getName() << " *";
	std::cout << RESET << std::endl;
}
