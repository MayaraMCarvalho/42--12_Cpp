/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:57:35 by macarval          #+#    #+#             */
/*   Updated: 2024/04/18 13:35:21 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal( "WrongCat" )
{
	std::cout << WYELLOW;
	std::cout << "WrongCat🐅 was created!" << std::endl;
	std::cout << WRESET;
}


WrongCat::WrongCat( WrongCat const &copy ) : WrongAnimal( copy )
{
	std::cout << WGRAY;
	std::cout << "A copy WrongCat🐅 was created!" << std::endl;
	*this = copy;
	std::cout << WRESET;
}

WrongCat::~WrongCat( void )
{
	std::cout << WRED;
	std::cout << "WrongCat🐾 was destroyed!" << std::endl;
	std::cout << WRESET;
}

WrongCat& WrongCat::operator=( WrongCat const &other )
{
	std::cout << WGREEN;
	std::cout << "WrongCat🐅 copied by assignment operator" << std::endl;
	std::cout << WRESET;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void WrongCat::makeSound( void ) const
{
	std::cout << WPURPLE;
	std::cout << "Meaw? Or not?... ROAAAAAAAR!🐯" << std::endl;
	std::cout << WRESET;
}
