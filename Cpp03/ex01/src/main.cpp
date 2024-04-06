/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:00:18 by macarval          #+#    #+#             */
/*   Updated: 2024/04/06 11:17:11 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

int	main ( void )
{
	std::cout << GRAY << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "************************ SCAVTRAP TEST ************************" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "ClapTrap a is created with name John" << std::endl;
	std::cout << "ScavTrap b is created with name Bob" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	ClapTrap john("🏹John");
	ScavTrap bob("⚡Bob");

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "John attacks Bob" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	john.attack(bob.getName());
	bob.takeDamage(john.getAttackDamage());

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Bob attacks John" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	bob.attack(john.getName());
 	john.takeDamage(bob.getAttackDamage());

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "John repairs himself with 20 hit points" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	john.beRepaired(20);

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "John attacks Bob 10 times" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		john.attack(bob.getName());
		bob.takeDamage(john.getAttackDamage());
	}
	john.attack(bob.getName());
	john.attack(bob.getName());

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Bob repairs himself with 20 hit points" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	bob.beRepaired(20);

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "John try repairs himself with 5 hit points" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	john.beRepaired(5);

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Bob give up from war, and he is now a gatekeeper" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	bob.guardGate();

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "John and Bob are destroyed" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << RESET;

	return 0;
}
