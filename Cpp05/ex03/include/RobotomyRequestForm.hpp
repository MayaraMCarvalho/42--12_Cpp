/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:50:20 by macarval          #+#    #+#             */
/*   Updated: 2024/04/25 09:33:38 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public Form
{
	private:
		std::string	_target;

	public:
	// ========================================================================
		RobotomyRequestForm( std::string fileName );
		RobotomyRequestForm( RobotomyRequestForm const &copy );
		virtual ~RobotomyRequestForm( void );

	// Operators ==============================================================
		RobotomyRequestForm& operator=( RobotomyRequestForm const &other );

	// Methods ================================================================
		void	execute(Bureaucrat const &executor) const
			throw (FormNotSignedException, GradeTooLowException);
};

#endif
