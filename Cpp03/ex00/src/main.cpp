/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:00:18 by macarval          #+#    #+#             */
/*   Updated: 2024/04/09 21:02:33 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int	main ( void )
{
	std::cout << GRAY << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "************************ CLAPTRAP TEST ************************" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "ClapTrap John is created with name John" << std::endl;
	std::cout << "ClapTrap Bob is created with name Bob" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	ClapTrap a("🏹John");
	ClapTrap b;

	b.setName("⚡Bob");

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "John attacks Bob" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Bob attacks John" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	b.attack(a.getName());
 	a.takeDamage(b.getAttackDamage());

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "John repairs himself with 2 hit points" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	a.beRepaired(2);

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "John attacks Bob 10 times" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		a.attack(b.getName());
		b.takeDamage(a.getAttackDamage());
	}
	a.attack(b.getName());
	a.attack(b.getName());

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Bob repairs himself with 2 hit points" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	b.beRepaired(2);

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "John try repairs himself with 5 hit points" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	a.beRepaired(5);

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "John and Bob are destroyed" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << RESET;

	return 0;
}
