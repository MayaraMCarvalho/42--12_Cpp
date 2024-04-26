/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:50:20 by macarval          #+#    #+#             */
/*   Updated: 2024/04/25 09:33:38 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>


class ShrubberyCreationForm : public AForm
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
