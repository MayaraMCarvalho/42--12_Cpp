/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:00:18 by macarval          #+#    #+#             */
/*   Updated: 2024/04/09 21:01:46 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "DiamondTrap.hpp"

int	main ( void )
{
	std::cout << GRAY << std::endl;
	std::cout << "---------------------------------------------------------------\n";
	std::cout << "********************** DIAMONDTRAP TEST ***********************\n";
	std::cout << "---------------------------------------------------------------\n";
	std::cout << "ClapTrap John is created with name John" << std::endl;
	std::cout << "ScavTrap Bob is created with name Bob" << std::endl;
	std::cout << "FragTrap Harry is created with name Harry" << std::endl;
	std::cout << "DiamontTrap Thomas is created with name Thomas" << std::endl;
	std::cout << "---------------------------------------------------------------\n";

	ClapTrap john("🏹John");
	ScavTrap bob("⚡Bob");
	FragTrap harry("🤴Harry");
	DiamondTrap thomas("💎Thomas");

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------\n";
	std::cout << "John attacks Bob" << std::endl;
	std::cout << "---------------------------------------------------------------\n";

	john.attack(bob.getName());
	bob.takeDamage(john.getAttackDamage());

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------\n";
	std::cout << "John attacks Harry" << std::endl;
	std::cout << "---------------------------------------------------------------\n";

	john.attack(harry.getName());
	harry.takeDamage(john.getAttackDamage());

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------\n";
	std::cout << "Bob attacks John" << std::endl;
	std::cout << "---------------------------------------------------------------\n";

	bob.attack(john.getName());
 	john.takeDamage(bob.getAttackDamage());

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------\n";
	std::cout << "Thomas attacks Bob" << std::endl;
	std::cout << "---------------------------------------------------------------\n";

	thomas.attack(bob.getName());
 	bob.takeDamage(thomas.getAttackDamage());

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------\n";
	std::cout << "John repairs himself with 20 hit points" << std::endl;
	std::cout << "---------------------------------------------------------------\n";

	john.beRepaired(20);

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------\n";
	std::cout << "Thomas repairs himself with 30 hit points" << std::endl;
	std::cout << "---------------------------------------------------------------\n";

	thomas.beRepaired(30);

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------\n";
	std::cout << "Thomas attacks Bob 5 times" << std::endl;
	std::cout << "---------------------------------------------------------------\n";

	for (int i = 0; i < 5; i++)
	{
		thomas.attack(bob.getName());
		bob.takeDamage(thomas.getAttackDamage());
	}

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------\n";
	std::cout << "Bob repairs himself with 30 hit points" << std::endl;
	std::cout << "---------------------------------------------------------------\n";

	bob.beRepaired(30);

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------\n";
	std::cout << "John try repairs himself with 5 hit points" << std::endl;
	std::cout << "---------------------------------------------------------------\n";

	john.beRepaired(5);

	std::cout << "---------------------------------------------------------------\n";
	std::cout << "Bob give up from war, and he is now a gatekeeper" << std::endl;
	std::cout << "---------------------------------------------------------------\n";

	bob.guardGate();

	std::cout << "---------------------------------------------------------------\n";
	std::cout << "Harry are happy and he is now a high five guy" << std::endl;
	std::cout << "---------------------------------------------------------------\n";

	harry.highFivesGuys();

	std::cout << "---------------------------------------------------------------\n";
	std::cout << "Thomas presents himself" << std::endl;
	std::cout << "---------------------------------------------------------------\n";

	thomas.whoAmI();

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------\n";
	std::cout << "John, Bob, Harry and Thomas are destroyed" << std::endl;
	std::cout << "---------------------------------------------------------------\n";
	std::cout << RESET;

	return 0;
}
