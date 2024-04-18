/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:57:35 by macarval          #+#    #+#             */
/*   Updated: 2024/04/10 18:08:04 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ): Animal( "Dog" )
{
	std::cout << YELLOW;
	std::cout << "Dog🐕 was created!" << std::endl;
	std::cout << RESET;
	this->type = "Dog🐕";
}

Dog::Dog( Dog const &copy ) : Animal( copy )
{
	std::cout << GRAY;
	std::cout << "A copy Dog🐕 was created!" << std::endl;
	std::cout << RESET;
	*this = copy;
}

Dog::~Dog( void )
{
	std::cout << RED;
	std::cout << "Dog🦴 was destroyed!" << std::endl;
	std::cout << RESET;
}

Dog& Dog::operator=( Dog const &other )
{
	std::cout << GREEN;
	std::cout << "Dog🐕 copied by assignment operator" << std::endl;
	std::cout << RESET;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void Dog::makeSound( void ) const
{
	std::cout << PURPLE;
	std::cout << "Woof woof woof...🐶" << std::endl;
	std::cout << RESET;
}
