/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tests.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:37:41 by macarval          #+#    #+#             */
/*   Updated: 2024/04/28 15:23:20 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_HPP
# define TESTS_HPP

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

class Bureaucrat;
class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

class Tests
{
	public:
	// Methods ================================================================
		void	bureaucratTest( void ) const;
		void	shrubberyTest( void ) const;
		void	robotomyTest( void ) const;
		void	presidentialTest( void ) const;
		void	internTest( void ) const;

};

#endif
