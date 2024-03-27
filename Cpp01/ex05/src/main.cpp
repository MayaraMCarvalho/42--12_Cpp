/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:34:31 by macarval          #+#    #+#             */
/*   Updated: 2024/03/26 22:31:17 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void )
{
	std::cout << CYAN << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "*********************** HARL 2.0 TEST *************************" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Harl is created..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << RESET;

	Harl harl;

	std::cout << CYAN << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Harl complain with DEBUG..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << RESET;

	harl.complain("DEBUG");


	std::cout << CYAN << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Harl complain with INFO..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << RESET;

	harl.complain("INFO");

	std::cout << CYAN << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Harl complain with WARNING..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << RESET;

	harl.complain("WARNING");

	std::cout << CYAN << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Harl complain with ERROR..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << RESET;

	harl.complain("ERROR");

	std::cout << CYAN << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Harl makes an invalid complaint..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << RESET;

	harl.complain("teste");

	std::cout << CYAN;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Harl is destroyed with the end of the program..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << RESET;

	return (0);
}
