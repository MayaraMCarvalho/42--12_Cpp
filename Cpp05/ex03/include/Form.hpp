/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:22:12 by macarval          #+#    #+#             */
/*   Updated: 2024/04/29 20:26:17 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeSign;
		int const			_gradeExec;

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

		class FormNotSignedException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	// ========================================================================
		Form( void );
		Form( std::string const &name, int gradeSign, int gradeExec );
		Form( Form const &copy );
		virtual ~Form( void );

	// Operators ==============================================================
		Form& operator=( Form const &other );

	// Getters ================================================================
		std::string	getName( void ) const;
		bool		getSigned( void ) const;
		int			getGradeSign( void ) const;
		int			getGradeExec( void ) const;

	// Methods ================================================================
		void			beSigned( Bureaucrat &bureaucrat );
		virtual void	execute(Bureaucrat const &executor) const
			throw (FormNotSignedException, GradeTooLowException);

};

std::ostream &operator<<(std::ostream& out, Form const &form);

#endif
