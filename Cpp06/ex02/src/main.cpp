/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:08:31 by macarval          #+#    #+#             */
/*   Updated: 2024/05/02 22:49:18 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main( void )
{

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "******************* DYNAMIC CAST TEST *******************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	 for (int i = 0; i < 10; i++)
	 {
		std::cout << CYAN;
		std::cout << "-> TEST " << i + 1 << std::endl;
		std::cout << BLUE;
		std::cout << "---------------------------------------------------------\n";
		std::cout << YELLOW << "Generating random class...\n" << GREEN ;
		Base *base = generate();

		std::cout << YELLOW << "\nIdentifying class with pointer...\n" << GREEN;
		identify(base);

		std::cout << YELLOW << "\nIdentifying class with reference...\n" << GREEN;
		identify(*base);
		std::cout << std::endl;

		delete base;

		std::cout << BLUE;
		std::cout << "---------------------------------------------------------\n";
	}

	std::cout << "-> TEST 11" << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << YELLOW <<"Generating base class..." << GREEN << std::endl;
	Base *base = new Base();

	std::cout << YELLOW << "\nIdentifying class with pointer...\n" << GREEN;
	identify(base);

	std::cout << YELLOW << "\nIdentifying class with reference...\n" << GREEN;
	identify(*base);
	std::cout << std::endl;

	delete base;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "---------------------- END OF TEST ----------------------\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << RESET << std::endl;

	return 0;
}

