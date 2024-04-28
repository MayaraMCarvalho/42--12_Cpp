/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:50:20 by macarval          #+#    #+#             */
/*   Updated: 2024/04/28 15:51:26 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>


class ShrubberyCreationForm : public Form
{
	private:
		std::string	_target;

	public:
	// ========================================================================
		ShrubberyCreationForm( std::string fileName );
		ShrubberyCreationForm( ShrubberyCreationForm const &copy );
		virtual ~ShrubberyCreationForm( void );

	// Operators ==============================================================
		ShrubberyCreationForm& operator=( ShrubberyCreationForm const &other );

	// Methods ================================================================
		void	execute(Bureaucrat const &executor) const
			throw (FormNotSignedException, GradeTooLowException);
};

#endif
