/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:34:41 by macarval          #+#    #+#             */
/*   Updated: 2024/03/26 22:33:01 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << GREEN << "\nHarl is here!";
	std::cout << RESET << std::endl;
}

Harl::~Harl()
{
	std::cout << RED << "\nHarl is gone!\n";
	std::cout << RESET << std::endl;
}

void	Harl::debug( void )
{
	std::cout << PURPLE << std::endl;
	std::cout << "I love having extra bacon for my\n";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.\n";
	std::cout << "I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << BLUE << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn’t put enough bacon in my burger!\n";
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << YELLOW << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I’ve been coming for years whereas you started working\n";
	std::cout << "here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << RED << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	void (Harl::* ptrLevels[4])() =
		{ &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	for (int i = 0; i < 5; i++)
	{
		if (level == levels[i])
		{
			(this->*ptrLevels[i])();
			return ;
		}
	}
	std::cout << GRAY << std::endl;
	std::cout << "Invalid option. \nTry: DEBUG, INFO, WARNING or ERROR\n\n";
}
