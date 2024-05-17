/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:51:35 by macarval          #+#    #+#             */
/*   Updated: 2024/05/17 17:02:00 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Constructor & Destructor ===================================================
PmergeMe::PmergeMe( void ) {}

PmergeMe::PmergeMe( PmergeMe const &copy )
{
	*this = copy;
}

PmergeMe::~PmergeMe( void ) {}

// Operators ==================================================================
PmergeMe& PmergeMe::operator=( PmergeMe const &other )
{
	if (this != &other)
		return *this;
	return *this;
}

// Methods ====================================================================
void PmergeMe::sort(int argc, char const *argv[])
{
	try
	{
		validations(argc, argv);
		getContainers(argc, argv);

		sortList();
		sortVector();

		// Impressão dos Resultados
		printContainer("Before", LIST);
		printContainer("After", LIST);
		printTime(LIST);
		printTime(VECTOR);
	}
	catch(const std::exception& e)
	{
		std::cout << RED;
		std::cerr << e.what();
		std::cout << RESET << std::endl;
	}


}

void PmergeMe::validations(int argc, char const *argv[])
{
	if (argc != 2)
	{
		throw ();
		std::cout << "Invalid number of parameters!" << std::endl;
		std::cout << "Usage: ./PmergeMe <number1> <number2> <number3> ..." << std::endl;
	}

}

void PmergeMe::getContainers(int argc, char const *argv[])
{
	int	value;

	for (int i = 1; i < argc; ++i)
	{
		value = static_cast<int>(std::strtol(argv[i].c_str()));
		this->list.push_back(value);
		this->_vector.push_back(value);
	}
}

void PmergeMe::sortList()
{

}

void PmergeMe::sortVector()
{

}



void PmergeMe::printTime( std::string type, double time,  size_t size )
{
	std::cout << PURPLE;
	std::cout << "Time to process a range of " << GREEN << size;
	std::cout << PURPLE << " elements with std::" << type << ":  ";
	std::cout << std::fixed << std::setprecision(6) << YELLOW;
	std::cout << time << " us" << RESET << std::endl;
}

void PmergeMe::printList( std::string status )
{
	std::cout << PURPLE << status << ": " << YELLOW;
	for (std::list<int>::iterator it = this->_list.begin();
								it != this->_list.end(); ++it)
		std::cout << *it << " ";
	std::cout << RESET << std::endl;
}

void PmergeMe::printVector( std::string status )
{
	std::cout << PURPLE << status << ": " << YELLOW;
	for (size_t i = 0; i < this->_vector.size(); ++i)
		std::cout << this->_vector[i] << " ";
	std::cout << RESET << std::endl;
}

// Exceptions =================================================================
bool isInteger(const std::string& s) {
    std::istringstream iss(s);
    int x;
    char c;
    return !(iss >> x).fail() && !(iss >> c);
}

