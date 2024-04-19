/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:57:35 by macarval          #+#    #+#             */
/*   Updated: 2024/04/19 17:02:15 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void )
{
	std::cout << YELLOW;
	std::cout << "A Animal was created!" << std::endl;
	std::cout << RESET;
}

AAnimal::AAnimal( std::string type ) : type(type)
{
	std::cout << GREEN;
	std::cout << "A Animal of the type " << this->type << " was created!" << std::endl;
	std::cout << RESET;
}

AAnimal::AAnimal( AAnimal const &copy )
{
	std::cout << GRAY;
	std::cout << "A copy A Animal was created!" << std::endl;
	std::cout << RESET;
	*this = copy;
}

AAnimal::~AAnimal( void )
{
	std::cout << RED;
	std::cout << "A Animal was destroyed!\n" << std::endl;;
	std::cout << RESET;
}

AAnimal& AAnimal::operator=( AAnimal const &other )
{
	std::cout << GREEN;
	std::cout << "A Animal copied by assignment operator" << std::endl;
	std::cout << RESET;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

std::string AAnimal::getType( void ) const
{
	return this->type;
}

void AAnimal::makeSound( void ) const
{
	std::cout << GRAY;
	std::cout << "A Animal sound..." << std::endl;
	std::cout << RESET;
}
