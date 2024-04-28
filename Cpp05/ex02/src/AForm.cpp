/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:27:23 by macarval          #+#    #+#             */
/*   Updated: 2024/04/23 15:36:11 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Constructor & Destructor ===================================================
AForm::AForm( void ) : _name("Default"), _gradeSign(HIGHGRADE), _gradeExec(HIGHGRADE)
{
	this->_signed = false;
	std::cout << GREEN;
	std::cout << "A form📋 has been created with default values!\n" << std::endl;
	std::cout << RESET;
}

AForm::AForm( std::string const &name, int gradeSign, int gradeExec ) :
					_name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign < HIGHGRADE || gradeExec < HIGHGRADE)
		throw GradeTooHighException();
	else if (gradeSign > LOWGRADE || gradeExec > LOWGRADE)
		throw GradeTooLowException();
	else
		this->_signed = false;
	std::cout << GREEN;
	std::cout << "A form📋 has been created with name " << BLUE << this->_name;
	std::cout << GREEN << "\nwith '" << BLUE << this->_gradeSign;
	std::cout << GREEN << "' of grade required to";
	std::cout << " sign it\nand '" << BLUE << this->_gradeExec;
	std::cout << GREEN << "' grade required to execute it.\n"  << std::endl;
	std::cout << RESET;
}

AForm::AForm( AForm const &copy ) : _name(copy._name),
					_gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

AForm::~AForm( void )
{
	std::cout << RED;
	std::cout << "A form📋 has been destroyed!" << std::endl;
	std::cout << RESET;
}

// Operators ==================================================================
AForm& AForm::operator=( AForm const &other )
{
	if (this != &other)
	{
		this->_signed = other._signed;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

std::ostream &operator<<(std::ostream& out, AForm const &form)
{

	out << GRAY << "The form📋 " << BLUE <<form.getName() << GRAY << " is ";
	if (form.getSigned())
		out << GREEN << "signed" << GRAY;
	else
		out << RED << "not signed" << GRAY;
	out << " and requires\ngrade " << BLUE << form.getGradeSign();
	std::cout << GRAY << " to sign and grade ";
	out << BLUE << form.getGradeExec() << GRAY << " to execute!\n\n";
	std::cout << RESET;
	return out;
}

// Getters ====================================================================
std::string AForm::getName( void ) const
{
	return this->_name;
}

bool AForm::getSigned( void ) const
{
	return this->_signed;
}

int AForm::getGradeSign( void ) const
{
	return this->_gradeSign;
}

int AForm::getGradeExec( void ) const
{
	return this->_gradeExec;
}

// Methods ====================================================================
void AForm::beSigned( Bureaucrat &bureaucrat )
{
	if (this->_signed)
	{
		std::cout << YELLOW << "The form📋 ";
		std::cout << BLUE << this->_name << YELLOW;
		std::cout << " has already been signed🖊️ !!\n\n";
		std::cout << RESET;
	}
	if (bureaucrat.getGrade() > this->_gradeSign)
		throw AForm::GradeTooLowException();
	std::cout << GREEN << "The form📋 ";
	std::cout << BLUE << this->_name << GREEN;
	std::cout << " has been signed🖊️ !!\n\n";
	std::cout << RESET;
	this->_signed = true;
}

void AForm::execute(Bureaucrat const &executor) const
	throw (FormNotSignedException, GradeTooLowException)
{
	if (!this->getSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeExec())
	{
		std::cout << RED;
		throw AForm::GradeTooLowException();
		std::cout << RESET;
	}
}

// Exceptions =================================================================
const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high!!!\n";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low!!!\n";
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return "The form has not yet been signed🖋️ !!!\n";
}
