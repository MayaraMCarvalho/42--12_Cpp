/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:50:20 by macarval          #+#    #+#             */
/*   Updated: 2024/04/25 09:33:38 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string	_target;

	public:
	// ========================================================================
		PresidentialPardonForm( std::string fileName );
		PresidentialPardonForm( PresidentialPardonForm const &copy );
		virtual ~PresidentialPardonForm( void );

	// Operators ==============================================================
		PresidentialPardonForm& operator=( PresidentialPardonForm const &other );

	// Methods ================================================================
		void	execute(Bureaucrat const &executor) const
			throw (FormNotSignedException, GradeTooLowException);
};

#endif
