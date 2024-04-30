/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:27:23 by macarval          #+#    #+#             */
/*   Updated: 2024/04/29 20:50:15 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructor & Destructor ===================================================
Form::Form( void ) : _name("Default"), _gradeSign(HIGHGRADE), _gradeExec(HIGHGRADE)
{
	this->_signed = false;
	std::cout << GREEN;
	std::cout << "A form📋 has been created with default values!\n" << std::endl;
	std::cout << RESET;
}

Form::Form( std::string const &name, int gradeSign, int gradeExec ) :
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

Form::Form( Form const &copy ) : _name(copy._name),
					_gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Form::~Form( void )
{
	std::cout << RED;
	std::cout << "A form📋 has been destroyed!" << std::endl;
	std::cout << RESET;
}

// Operators ==================================================================
Form& Form::operator=( Form const &other )
{
	if (this != &other)
	{
		this->_signed = other._signed;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

std::ostream &operator<<(std::ostream& out, Form const &form)
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
std::string Form::getName( void ) const
{
	return this->_name;
}

bool Form::getSigned( void ) const
{
	return this->_signed;
}

int Form::getGradeSign( void ) const
{
	return this->_gradeSign;
}

int Form::getGradeExec( void ) const
{
	return this->_gradeExec;
}

// Methods ====================================================================
void Form::beSigned( Bureaucrat &bureaucrat )
{
	if (this->_signed)
	{
		std::cout << YELLOW << "The form📋 ";
		std::cout << BLUE << this->_name << YELLOW;
		std::cout << " has already been signed🖊️ !!\n\n";
		std::cout << RESET;
	}
	if (bureaucrat.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	std::cout << GREEN << "The form📋 ";
	std::cout << BLUE << this->_name << GREEN;
	std::cout << " has been signed🖊️ !!\n\n";
	std::cout << RESET;
	this->_signed = true;
}

void Form::execute(Bureaucrat const &executor) const
	throw (FormNotSignedException, GradeTooLowException)
{
	if (!this->getSigned())
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getGradeExec())
	{
		std::cout << RED;
		throw Form::GradeTooLowException();
		std::cout << RESET;
	}
}

// Exceptions =================================================================

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade too high!!!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade too low!!!";
}

const char *Form::FormNotSignedException::what() const throw()
{
	return "The form has not yet been signed🖋️ !!!\n";
}
