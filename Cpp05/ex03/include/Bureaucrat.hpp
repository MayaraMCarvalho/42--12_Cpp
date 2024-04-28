/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:06:33 by macarval          #+#    #+#             */
/*   Updated: 2024/04/28 15:50:36 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

#include "Form.hpp"

# define HIGHGRADE	1
# define LOWGRADE	150

// Color codes as global variables
const std::string RESET = "\033[0m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string YELLOW = "\033[33;1m";
const std::string BLUE = "\033[34;1m";
const std::string PURPLE = "\033[35;1m";
const std::string CYAN = "\033[36;1m";
const std::string GRAY = "\033[37;1m";

class Form;

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

	public:
	// Exceptions =============================================================
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	// ========================================================================
		Bureaucrat( void );
		Bureaucrat( std::string const &name, int grade )
			throw (GradeTooHighException, GradeTooLowException);
		Bureaucrat( Bureaucrat const &copy );
		~Bureaucrat( void );

	// Operators ==============================================================
		Bureaucrat&			operator=( Bureaucrat const &other );

	// Getters ================================================================
		std::string const	getName( void ) const;
		int		getGrade( void ) const;

	// Methods ================================================================
		void	upGrade ( void )
			throw (GradeTooHighException);
		void	downGrade ( void )
				throw (GradeTooLowException);
		void	signForm( Form &form );
		void	executeForm(Form const & form);


};

std::ostream &operator<<(std::ostream& out, Bureaucrat const &actual);

#endif
