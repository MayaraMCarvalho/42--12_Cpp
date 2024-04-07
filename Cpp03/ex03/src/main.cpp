/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:00:18 by macarval          #+#    #+#             */
/*   Updated: 2024/04/06 19:07:46 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "DiamondTrap.hpp"

int	main ( void )
{
	std::cout << GRAY << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "********************** DIAMONDTRAP TEST ***********************" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "ClapTrap a is created with name John" << std::endl;
	std::cout << "ScavTrap b is created with name Bob" << std::endl;
	std::cout << "FragTrap b is created with name Harry" << std::endl;
	std::cout << "DiamontTrap b is created with name Thomas" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	ClapTrap john("🏹John");
	ScavTrap bob("⚡Bob");
	FragTrap harry("🤴Harry");
	DiamondTrap thomas("💎Thomas");

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "John attacks Bob" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	john.attack(bob.getName());
	bob.takeDamage(john.getAttackDamage());

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "John attacks Harry" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	john.attack(harry.getName());
	harry.takeDamage(john.getAttackDamage());

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Bob attacks John" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	bob.attack(john.getName());
 	john.takeDamage(bob.getAttackDamage());

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Thomas attacks Bob" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	thomas.attack(bob.getName());
 	bob.takeDamage(thomas.getAttackDamage());

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "John repairs himself with 20 hit points" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	john.beRepaired(20);

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Thomas repairs himself with 30 hit points" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	thomas.beRepaired(30);

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Thomas attacks Bob 5 times" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		thomas.attack(bob.getName());
		bob.takeDamage(thomas.getAttackDamage());
	}

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Bob repairs himself with 30 hit points" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	bob.beRepaired(30);

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "John try repairs himself with 5 hit points" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	john.beRepaired(5);

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Bob give up from war, and he is now a gatekeeper" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	bob.guardGate();

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Harry are happy and he is now a high five guy" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	harry.highFivesGuys();

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Thomas presents himself" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	thomas.whoAmI();

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "John, Bob, Harry and Thomas are destroyed" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << RESET;

	return 0;
}
