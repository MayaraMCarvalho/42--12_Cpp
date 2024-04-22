/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:18:32 by macarval          #+#    #+#             */
/*   Updated: 2024/04/22 18:17:32 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria( "cure" )
{
	std::cout << PURPLE;
	std::cout << "A new Cure materia has been created!\n";
	std::cout << RESET;
}

Cure::Cure( Cure const &copy ) : AMateria( copy )
{
	*this = copy;
	std::cout << YELLOW;
	std::cout << "A new Cure materia has been created by copy!" << std::endl;
	std::cout << RESET;
}

Cure::~Cure( void )
{
	std::cout << RED;
	std::cout << "A Cure materia has been destroyed!" << std::endl;
	std::cout << RESET;
}

Cure& Cure::operator=( Cure const &other )
{
	std::cout << "Copy Cure materia assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
}

AMateria* Cure::clone() const
{
	std::cout << BLUE;
	std::cout << "Cure materia has been cloned!" << std::endl;
	std::cout << RESET;
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << PURPLE;
	std::cout << "* heals ";
	std::cout << target.getName() << "’s wounds *" << std::endl;
	std::cout << RESET;
}

