/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 21:42:03 by macarval          #+#    #+#             */
/*   Updated: 2024/03/27 15:30:44 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{

	std::cout << GRAY << "********* TESTING HEAP ALOCCATION **********" << std::endl;
	std::cout << "\nCalling newZombie" << std::endl;

	Zombie*	boo = newZombie("Boo");

	std::cout << GRAY << "\nExplicit announce" << std::endl;

	boo->announce();

	std::cout << GRAY << "\nExplicit delete" << std::endl;

	delete boo;

	std::cout << "\n" << std::endl;


	std::cout << GRAY << "********* TESTING STACK ALOCCATION *********" << std::endl;
	std::cout << "************** Function Case ***************" << std::endl;
	std::cout << "\nCalling randomChump" << std::endl;
	std::cout << "Implicit announce in randomChump function" << std::endl;
	std::cout << "Implicit delete in randomChump function\n" << std::endl;

	randomChump("Chump");

	std::cout << "\n" << std::endl;


	std::cout << GRAY << "********* TESTING STACK ALOCCATION *********" << std::endl;
	std::cout << "************** Instance Case ***************" << std::endl;
	std::cout << "\nInstance of zombie" << std::endl;

	Zombie	foo("Foo");

	std::cout << GRAY << "\nExplicit announce" << std::endl;

	foo.announce();

	std::cout << GRAY << "\nImplicit delete with the end of the program" << std::endl;
	std::cout << RESET;

	return (0);
}
