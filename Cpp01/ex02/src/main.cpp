/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 20:53:59 by macarval          #+#    #+#             */
/*   Updated: 2024/03/27 15:34:37 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

const std::string YELLOW = "\033[33;1m";
const std::string BLUE = "\033[34;1m";
const std::string GRAY = "\033[37;1m";

int	main( void )
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << GRAY;
	std::cout << "------------------------------------------------------\n";
	std::cout << "*************** HI THIS IS BRAIN TEST ****************\n";
	std::cout << "------------------------------------------------------\n";

	std::cout << GRAY << "Memory address of the string variable:\t";
	std::cout << YELLOW << &brain << std::endl;

	std::cout << GRAY << "Memory address held by stringPTR:\t";
	std::cout << YELLOW << stringPTR << std::endl;

	std::cout << GRAY << "Memory address held by stringREF:\t";
	std::cout << YELLOW << &stringREF << std::endl;

	std::cout << GRAY;
	std::cout << "------------------------------------------------------\n\n";


	std::cout << GRAY << "Value of the string variable:\t";
	std::cout << BLUE << brain << std::endl;

	std::cout << GRAY << "Value pointed to by stringPTR:\t";
	std::cout << BLUE << *stringPTR << std::endl;

	std::cout << GRAY << "Value pointed to by stringREF:\t";
	std::cout << BLUE << stringREF << std::endl;
	std::cout << GRAY;
	std::cout << "------------------------------------------------------\n\n";
	std::cout << RESET;

	return (0);

}
