/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:44:20 by macarval          #+#    #+#             */
/*   Updated: 2024/05/16 10:04:08 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// Constructor & Destructor ===================================================
RPN::RPN( void ) {}

RPN::RPN( RPN const &copy )
{
	*this = copy;
}

RPN::~RPN( void ) {}

// Operators ==================================================================
RPN& RPN::operator=( RPN const &other )
{
	if (this != &other)
		this->_numbers = other._numbers;
	return *this;
}

// Methods ====================================================================
double RPN::run( std::string arg )
{
	if (arg.find_first_not_of(REGULAR) != std::string::npos)
		throw InvalidCharacterException();
	for (size_t i = 0; i < arg.length(); ++i)
	{
		if (isdigit(arg[i]))
		{
			if (arg[i + 1] && isdigit(arg[i + 1]))
				throw OutRangeException();
			this->_numbers.push(arg[i] - '0');
		}
		else if (OPERATOR.find(arg[i]) != std::string::npos)
			_calc(arg[i]);
	}
	if (_numbers.size() != 1)
		throw InvalidExpressionException();
	return this->_numbers.top();
}

void RPN::_calc(char oper)
{
	if (this->_numbers.size() < 2)
		throw TooFewOperatorsException();

	double num1 = this->_numbers.top();
	this->_numbers.pop();

	double num2 = this->_numbers.top();
	this->_numbers.pop();

	switch (oper)
	{
	case '+':
		this->_numbers.push(num2 + num1);
		break;
	case '-':
		this->_numbers.push(num2 - num1);
		break;
	case '*':
		this->_numbers.push(num2 * num1);
		break;
	default:
		if (num1 == 0)
			throw DivisionByZeroException();
		this->_numbers.push(num2 / num1);
		break;
	}
}

// Exceptions =================================================================
const char *RPN::TooFewOperatorsException::what() const throw()
{
	return "Too few operators!";
}

const char *RPN::InvalidCharacterException::what() const throw()
{
	return "Invalid character in expression!";
}

const char *RPN::DivisionByZeroException::what() const throw()
{
	return "Division by zero!";
}

const char *RPN::InvalidExpressionException::what() const throw()
{
	return "Invalid expression!";
}

const char *RPN::OutRangeException::what() const throw()
{
	return "Number out the allowed range!";
}
