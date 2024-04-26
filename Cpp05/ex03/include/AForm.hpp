/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:22:12 by macarval          #+#    #+#             */
/*   Updated: 2024/04/26 15:42:43 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
# include <string>

class Bureaucrat;

class AForm
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
		AForm( void );
		AForm( std::string const &name, int gradeSign, int gradeExec );
		AForm( AForm const &copy );
		virtual ~AForm( void );

	// Operators ==============================================================
		AForm& operator=( AForm const &other );

	// Getters ================================================================
		std::string		getName( void ) const;
		bool			getSigned( void ) const;
		int				getGradeSign( void ) const;
		int				getGradeExec( void ) const;

	// Methods ================================================================
		void			beSigned( Bureaucrat &bureaucrat );
		virtual void	execute(Bureaucrat const &executor) const
			throw (FormNotSignedException, GradeTooLowException) = 0;
};

std::ostream &operator<<(std::ostream& out, AForm const &form);

#endif
