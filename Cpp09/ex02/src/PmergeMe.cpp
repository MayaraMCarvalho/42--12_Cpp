/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:51:35 by macarval          #+#    #+#             */
/*   Updated: 2024/05/16 16:51:44 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Constructor & Destructor ===================================================
PmergeMe::PmergeMe( void )
{
	std::cout << "Default constructor called" << std::endl;
}

PmergeMe::PmergeMe( PmergeMe const &copy )
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

PmergeMe::~PmergeMe( void )
{
	std::cout << "Destructor called" << std::endl;
}

// Operators ==================================================================
PmergeMe& PmergeMe::operator=( PmergeMe const &other )
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

// Exceptions =================================================================
