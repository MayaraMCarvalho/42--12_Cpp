/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:57:35 by macarval          #+#    #+#             */
/*   Updated: 2024/04/18 16:18:50 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" )
{
	std::cout << YELLOW;
	std::cout << "Cat🐈 was created!" << std::endl;
	std::cout << RESET;
	this->type = "Cat🐈";
}


Cat::Cat( Cat const &copy ) : Animal( copy )
{
	std::cout << GRAY;
	std::cout << "A copy Cat🐈 was created!" << std::endl;
	std::cout << RESET;
	*this = copy;
}

Cat::~Cat( void )
{
	std::cout << RED;
	std::cout << "Cat🐾 was destroyed!" << std::endl;
	std::cout << RESET;
}

Cat& Cat::operator=( Cat const &other )
{
	std::cout << GREEN;
	std::cout << "Cat🐈 copied by assignment operator" << std::endl;
	std::cout << RESET;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void Cat::makeSound( void ) const
{
	std::cout << PURPLE;
	std::cout << "Meow meow...😸" << std::endl;
	std::cout << RESET;
}
