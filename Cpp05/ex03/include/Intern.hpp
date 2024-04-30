/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:06:21 by macarval          #+#    #+#             */
/*   Updated: 2024/04/29 20:30:45 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:

	public:
	// Exceptions ============================================================
		class FormDoesNotExistException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	// =======================================================================
		Intern( void );
		Intern( Intern const &copy );
		~Intern( void );

	// Operators =============================================================
		Intern& operator=( Intern const &other );

	// Methods ===============================================================
		Form*	makeForm(std::string nameForm, std::string targetForm);

};

#endif
