/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:57:35 by macarval          #+#    #+#             */
/*   Updated: 2024/04/22 09:35:46 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : AAnimal( "Cat" )
{
	std::cout << YELLOW;
	std::cout << "Cat🐈 was created!" << std::endl;
	std::cout << RESET;
	this->type = "Cat";
	this->_brain = new Brain();
}


Cat::Cat( Cat const &copy ) : AAnimal( copy )
{
	std::cout << GRAY;
	std::cout << "A copy Cat🐈 was created!" << std::endl;
	std::cout << RESET;
	this->type = copy.type;
	this->_brain = new Brain(*copy._brain);
}

Cat::~Cat( void )
{
	std::cout << RED;
	std::cout << "Cat🐾 was destroyed!" << std::endl;
	std::cout << RESET;
	delete this->_brain;
}

Cat& Cat::operator=( Cat const &other )
{
	std::cout << GREEN;
	std::cout << "Cat🐈 copied by assignment operator" << std::endl;
	std::cout << RESET;
	if (this != &other)
	{
		this->type = other.type;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

void Cat::makeSound( void ) const
{
	std::cout << PURPLE;
	std::cout << "Meow meow...😸" << std::endl;
	std::cout << RESET;
}

std::string Cat::getIdea( int n ) const
{
	return this->_brain->getIdea(n);
}
