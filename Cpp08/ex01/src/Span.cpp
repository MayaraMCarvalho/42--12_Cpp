/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:45:32 by macarval          #+#    #+#             */
/*   Updated: 2024/05/15 16:29:40 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructor & Destructor ===================================================
Span::Span( void ) {}

Span::Span( size_t N ) : _N(N)
{
	this->_vec.reserve(this->_N);
}


Span::Span( Span const &copy )
{
	*this = copy;
}

Span::~Span( void ) {}

// Operators ==================================================================
Span& Span::operator=( Span const &other )
{
	if (this != &other)
	{
		this->_N = other._N;
		this->_vec = other._vec;
	}
	return *this;
}

// Setters ====================================================================
void Span::addNumber(int num)
{
	if (this->_vec.size() < this->_N)
		this->_vec.push_back(num);
	else
		throw FullSpanException();
}

void Span::addMany( std::vector<int>::iterator begin, std::vector<int>::iterator end )
{
	if (_vec.size() + std::distance(begin, end) <= this->_N)
		this->_vec.insert(this->_vec.begin(), begin, end);
	else
		throw FullSpanException();
}

// Methods ====================================================================
int Span::shortestSpan( void )
{
	if (_vec.size() < 2)
		throw NoSpanException();

	std::vector<int> sortVec = this->_vec;
	std::sort(sortVec.begin(), sortVec.end());

	int minDistance = abs(*_vec.begin() - *(_vec.end() - 1));

	for (size_t i = 1; i < sortVec.size(); ++i)
	{
		int distance = std::abs(sortVec[i] - sortVec[i - 1]);
		if (distance < minDistance)
			minDistance = distance;
	}
	return minDistance;
}

int Span::longestSpan( void )
{
	if (_vec.size() < 2)
		throw NoSpanException();

	return *std::max_element(_vec.begin(), _vec.end())
			- *std::min_element(_vec.begin(), _vec.end());
}

// Exceptions =============================================================
const char *Span::FullSpanException::what() const throw()
{
	return "Span is full!!!";
}

const char *Span::NoSpanException::what() const throw()
{
	return "Span is empty or has only one element!!!";
}
