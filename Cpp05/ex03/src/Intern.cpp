/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:07:00 by macarval          #+#    #+#             */
/*   Updated: 2024/04/29 20:41:26 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Constructor & Destructor ===================================================
Intern::Intern( void )
{
	std::cout << PURPLE;
	std::cout << "A intern has been created!\n\n";
	std::cout << RESET;
}

Intern::Intern( Intern const &copy )
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Intern::~Intern( void )
{
	std::cout << RED;
	std::cout << "A intern has been destroyed!" << std::endl;
	std::cout << RESET;
}

// Operators ==================================================================
Intern& Intern::operator=( Intern const &other )
{
	if (this != &other)
	{
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

// Methods ====================================================================
Form* Intern::makeForm(std::string nameForm, std::string targetForm)
{
	std::string namesList[3] =
			{"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (nameForm == namesList[i])
		{
			std::cout << GREEN;
			std::cout << "Intern creates " << BLUE << nameForm << "\n\n" << RESET;
			switch (i)
			{
			case 0:
				return new ShrubberyCreationForm(targetForm);
			case 1:
				return new RobotomyRequestForm(targetForm);
			case 2:
				return new PresidentialPardonForm(targetForm);
			}
		}
	}
	throw Intern::FormDoesNotExistException();
	return NULL;
}

// Exceptions =================================================================
const char *Intern::FormDoesNotExistException::what() const throw()
{
	return ("Form doesn't exist!❌");
}
