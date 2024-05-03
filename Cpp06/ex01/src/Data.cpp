/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:42:31 by macarval          #+#    #+#             */
/*   Updated: 2024/05/03 08:39:51 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

// Constructor & Destructor ===================================================
Data::Data( void ) : _index(0), _name("Default")
{
	std::cout << GREEN;
	std::cout << "A data💽 has been created with default values!\n" << std::endl;
	std::cout << RESET;
}

Data::Data( int index, std::string name ) : _index(index), _name(name)
{
	std::cout << GREEN;
	std::cout << "A data💽 has been created with index " << BLUE << this->_index;
	std::cout << GREEN << "\nand name '" << BLUE << this->_name;
	std::cout << GREEN << "' of index!\n" << std::endl;
	std::cout << RESET;
}

Data::Data( Data const &copy )
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Data::~Data( void )
{
	std::cout << RED;
	std::cout << "A data💽 has been destroyed!" << std::endl;
	std::cout << RESET;
}

// Operators ==================================================================
Data& Data::operator=( Data const &other )
{
	if (this != &other)
	{
		this->_index = other._index;
		this->_name = other._name;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

std::ostream &operator<<(std::ostream& out, Data const &data)
{

	out << GRAY << "***The Data💽 Informations***" << std::endl;
	std::cout << "Index: " << BLUE << data.getIndex() << std::endl;
	std::cout << GRAY << "Name: " << BLUE << data.getName() << std::endl;
	std::cout << RESET;
	return out;
}

// Getters ====================================================================
int Data::getIndex( void ) const
{
	return this->_index;
}

std::string Data::getName( void ) const
{
	return this->_name;
}

// Setters ====================================================================
void Data::setIndex( int index )
{
	this->_index = index;
}

void Data::setName( std::string name )
{
	this->_name = name;
}


