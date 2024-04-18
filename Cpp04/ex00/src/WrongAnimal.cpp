/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:57:35 by macarval          #+#    #+#             */
/*   Updated: 2024/04/18 13:36:59 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << WYELLOW;
	std::cout << "WrongAnimal was created!" << std::endl;
	std::cout << WRESET;
}

WrongAnimal::WrongAnimal( std::string type ) : type(type)
{
	std::cout << WGREEN;
	std::cout << "WrongAnimal of the type " << this->type << " was created!" << std::endl;
	std::cout << WRESET;
	this->type = type;
}

WrongAnimal::WrongAnimal( WrongAnimal const &copy )
{
	std::cout << WGRAY;
	std::cout << "A copy WrongAnimal was created!" << std::endl;
	std::cout << WRESET;
	*this = copy;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << WRED;
	std::cout << "WrongAnimal was destroyed!" << std::endl;;
	std::cout << WRESET;
}

WrongAnimal& WrongAnimal::operator=( WrongAnimal const &other )
{
	std::cout << WGREEN;
	std::cout << "WrongAnimal copied by assignment operator" << std::endl;
	std::cout << WRESET;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

std::string WrongAnimal::getType( void ) const
{
	return this->type;
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << WGRAY;
	if (this->type == "WrongCat")
		std::cout << "Meaw? Or not?... ROAAAAAAAR!🐆" << std::endl;
	else
		std::cout << "I don't know what to do or say❓🤔" << std::endl;
	std::cout << WRESET;
}
