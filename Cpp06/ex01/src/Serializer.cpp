/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:14:24 by macarval          #+#    #+#             */
/*   Updated: 2024/05/03 08:37:58 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// Constructor & Destructor ===================================================
Serializer::Serializer( void )
{
	std::cout << "Default constructor called" << std::endl;
}

Serializer::Serializer( Serializer const &copy )
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Serializer::~Serializer( void )
{
	std::cout << "Destructor called" << std::endl;
}

// Operators ==================================================================
Serializer& Serializer::operator=( Serializer const &other )
{
	if (this != &other)
	{
		*this = other;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

// Methods ====================================================================

uintptr_t Serializer::serialize(Data* ptr)
{
	std::cout << GREEN << "Serializing data..." << RESET << std::endl;
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	std::cout << YELLOW << "Deserializing data..." << RESET << std::endl;
	return reinterpret_cast<Data*>(raw);
}
