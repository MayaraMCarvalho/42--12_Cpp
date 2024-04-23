/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:07:15 by macarval          #+#    #+#             */
/*   Updated: 2024/04/23 15:36:23 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("Unknown"), _grade(LOWGRADE)
{
	std::cout << PURPLE;
	std::cout << "A bureaucrat has been created with default values\n\n";
	std::cout << RESET;
}

Bureaucrat::Bureaucrat( std::string const &name, int grade ) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > LOWGRADE)
		throw GradeTooLowException();
	 else
		this->_grade = grade;
	std::cout << GREEN;
	std::cout << "A bureaucrat has been created\nwith name ";
	std::cout << YELLOW << this->_name;
	std::cout << GREEN << " and grade ";
	std::cout << YELLOW << this->_grade << "\n" << std::endl;
	std::cout << RESET;
}

Bureaucrat::Bureaucrat( Bureaucrat const &copy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << RED;
	std::cout << "A bureaucrat has been destroyed!" << std::endl;
	std::cout << RESET;
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const &other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
	}
	return *this;
}

std::ostream &operator<<(std::ostream& out, Bureaucrat const &actual)
{

	out << PURPLE << actual.getName() << ", bureaucrat grade "
			<< actual.getGrade() << ".\n\n";
	return out;
}

std::string const Bureaucrat::getName( void ) const
{
	return this->_name;
}

int Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void Bureaucrat::upGrade ( void )
{
	if (this->_grade - 1 < HIGHGRADE)
		throw GradeTooHighException();
	else
	{
		this->_grade--;
		std::cout << BLUE << this->_name << " has been promoted to grade ";
		std::cout << this->_grade << RESET << std::endl;
	}
}

void Bureaucrat::downGrade ( void )
{
	if (this->_grade + 1 > LOWGRADE)
		throw GradeTooLowException();
	else
	{
		this->_grade++;
		std::cout << GRAY << this->_name << " has been demoted to grade ";
		std::cout << this->_grade << RESET << std::endl;
	}
}

void Bureaucrat::signForm( Form &form )
{
	try
	{
		form.beSigned(*this);
		std::cout << GREEN;
		std::cout << this->_name << BLUE << "👔 signed ";
		std::cout  << GREEN << form.getName() << BLUE << "🖊️ !!\n\n";
		std::cout << RESET;
	}
	catch (std::exception &e)
	{
		std::cout << BLUE << this->_name;
		std::cout << YELLOW  << "👔 couldn’t❌ sign ";
		std::cout << BLUE << form.getName();
		std::cout << YELLOW << "🖊️  because " << CYAN;
		std::cout << e.what() << "\n\n" << RESET;
		std::cout << RESET;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high!!!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low!!!";
}
