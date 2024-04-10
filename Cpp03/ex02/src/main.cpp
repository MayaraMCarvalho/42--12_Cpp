/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:00:18 by macarval          #+#    #+#             */
/*   Updated: 2024/04/09 21:02:10 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

int	main ( void )
{
	std::cout << GRAY << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "************************ FRAGTRAP TEST ************************" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "ClapTrap John is created with name John" << std::endl;
	std::cout << "ScavTrap Bob is created with name Bob" << std::endl;
	std::cout << "FragTrap Harry is created with name Harry" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	ClapTrap john("🏹John");
	ScavTrap bob("⚡Bob");
	FragTrap harry("🤴Harry");

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
	std::cout << "John repairs himself with 20 hit points" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	john.beRepaired(20);

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Harry attacks Bob 5 times" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		harry.attack(bob.getName());
		bob.takeDamage(harry.getAttackDamage());
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

	std::cout << GRAY;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "John, Bob  and Harry are destroyed" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << RESET;

	return 0;
}
