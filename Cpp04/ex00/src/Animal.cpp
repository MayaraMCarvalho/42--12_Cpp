/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:57:35 by macarval          #+#    #+#             */
/*   Updated: 2024/04/10 19:11:42 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << YELLOW;
	std::cout << "Animal was created!" << std::endl;
	std::cout << RESET;
}

Animal::Animal( std::string type ) : type(type)
{
	std::cout << CYAN;
	std::cout << "Animal " << this->type << " was created!" << std::endl;
	std::cout << RESET;
}

Animal::Animal( Animal const &copy )
{
	std::cout << GRAY;
	std::cout << "A copy Animal was created!" << std::endl;
	*this = copy;
	std::cout << RESET;
}

Animal::~Animal( void )
{
	std::cout << RED;
	std::cout << "Animal was destroyed!" << std::endl;;
	std::cout << RESET;
}

Animal& Animal::operator=( Animal const &other )
{
	std::cout << GREEN;
	std::cout << "Animal copied by assignment operator" << std::endl;
	std::cout << RESET;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

std::string Animal::getType( void ) const
{
	return this->type;
}

void Animal::makeSound( void ) const
{
}
