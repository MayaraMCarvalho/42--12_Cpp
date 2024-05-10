/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange..cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:19:38 by macarval          #+#    #+#             */
/*   Updated: 2024/05/09 21:19:49 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Constructor & Destructor ===================================================
BitcoinExchange::BitcoinExchange( void )
{
	std::cout << "Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const &copy )
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

BitcoinExchange::~BitcoinExchange( void )
{
	std::cout << "Destructor called" << std::endl;
}

// Operators ==================================================================
BitcoinExchange& BitcoinExchange::operator=( BitcoinExchange const &other )
{
	if (this != &other)
	{
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

// Getters ====================================================================

// Setters ====================================================================

// Methods ====================================================================
