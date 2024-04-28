/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:07:34 by macarval          #+#    #+#             */
/*   Updated: 2024/04/28 15:23:30 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Tests.hpp"


int main ( void )
{
	Tests tests;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "************************* TESTS *************************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	tests.bureaucratTest();
	tests.shrubberyTest();
	tests.robotomyTest();
	tests.presidentialTest();
	tests.internTest();

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "********************** END OF TEST **********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	return 0;
}
