/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:03:26 by macarval          #+#    #+#             */
/*   Updated: 2024/04/25 17:14:27 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Constructor & Destructor ===================================================
RobotomyRequestForm::RobotomyRequestForm( std::string target )
								: AForm("Robotomy Request", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &copy )
																: AForm(copy)
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
}

// Operators ==============================================================
RobotomyRequestForm& RobotomyRequestForm::operator=( RobotomyRequestForm const &other )
{
	if (this != &other)
	{
		this->_target = other._target;
	}
	return *this;
}

// Methods ================================================================
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
	throw (FormNotSignedException, GradeTooLowException)
{
	AForm::execute(executor);
	std::cout << PURPLE;
	std::cout << "** drilling noises... **\n" << std::endl;
	srand(time(0));
	if (rand() % 2 == 0)
	{
		std::cout << BLUE << this->_target;
		std::cout << " has been robotomized🤖 successfully!\n";
		std::cout << RESET << std::endl;
	}
	else
	{
		 std::cout << YELLOW << this->_target;
		 std::cout << " robotomy failed🛠️ !\n" << RESET << std::endl;
	}
}
