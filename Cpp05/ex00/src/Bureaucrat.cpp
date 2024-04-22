/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:07:15 by macarval          #+#    #+#             */
/*   Updated: 2024/04/22 19:57:09 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("Unknown"), _grade(150)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( std::string const &name, int grade ) : _name(name), _grade(grade)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const &copy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const &other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
	}
	return *this;
}

void Bureaucrat::operator<<( Bureaucrat const &actual )
{
	std::cout << actual.getName() << ", bureaucrat grade ";
	std::cout << actual.getGrade() << "." << std::endl;
}

std::string const Bureaucrat::getName( void ) const
{
	return this->_name;
}

int Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void Bureaucrat::upGrade ( void )const
{
	this->_grade--;
}

void Bureaucrat::downGrade ( void )const
{
	this->_grade++;
}

