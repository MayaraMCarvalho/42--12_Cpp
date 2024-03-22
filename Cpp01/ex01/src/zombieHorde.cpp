/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:29:59 by macarval          #+#    #+#             */
/*   Updated: 2024/03/22 17:21:56 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	std::cout << BLUE << "\nA HORDE of ";
	std::cout << PURPLE << N << BLUE << " zombies called ";
	std::cout << PURPLE << name << BLUE << " has created!!!!\n" << std::endl;
	return (horde);
}
