/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:03:26 by macarval          #+#    #+#             */
/*   Updated: 2024/04/25 17:14:27 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Constructor & Destructor ===================================================
PresidentialPardonForm::PresidentialPardonForm( std::string target )
								: AForm("Presidential Pardon", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &copy )
																: AForm(copy)
{
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
}

// Operators ==============================================================
PresidentialPardonForm& PresidentialPardonForm::operator=( PresidentialPardonForm const &other )
{
	if (this != &other)
	{
		this->_target = other._target;
	}
	return *this;
}

// Methods ================================================================
void PresidentialPardonForm::execute(Bureaucrat const &executor) const
	throw (FormNotSignedException, GradeTooLowException)
{
	AForm::execute(executor);
	 std::cout << BLUE << this->_target << " has been pardoned🤗";
	 std::cout << " by Zafod Beeblebrox.\n";
	 std::cout << RESET;
}
