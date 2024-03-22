/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:36:10 by macarval          #+#    #+#             */
/*   Updated: 2024/03/22 17:22:18 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	int		N = 5;

	std::cout << GRAY << "---------------------------------------------" << std::endl;
	std::cout << "********* TESTING MEMORY ALOCCATION *********" << std::endl;
	std::cout << "---------------------------------------------\n" << std::endl;
	std::cout << "Creating Horde with " << N << " zombies..." << std::endl;
	std::cout << "Setting name for all " << N << " zombies..." << std::endl;

	Zombie*	horde =	zombieHorde( N, "Zob" );

	std::cout << GRAY;
	std::cout << "\nCalling announce function for all zombies..." << std::endl;

	for (int i = 0; i < N; i++)
		horde[i].announce();

	std::cout << GRAY;
	std::cout << "\nDeleting all Horde zombies at same time..." << std::endl;

	delete[] horde;

	std::cout << std::endl;
	return (0);
}
