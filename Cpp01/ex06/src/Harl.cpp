/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 22:37:16 by macarval          #+#    #+#             */
/*   Updated: 2024/03/27 12:02:56 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug( void )
{
	std::cout << PURPLE;
	std::cout << "[DEBUG]" << RESET << std::endl;
	std::cout << "I love having extra bacon for my\n";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.\n";
	std::cout << "I really do!\n" << std::endl;
}

void	Harl::info( void )
{
	std::cout << BLUE;
	std::cout << "[INFO]" << RESET << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn’t put enough bacon in my burger!\n";
	std::cout << "If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << YELLOW;
	std::cout << "[WARNING]" << RESET << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I’ve been coming for years whereas you started working\n";
	std::cout << "here since last month.\n" << std::endl;
}

void	Harl::error( void )
{
	std::cout << RED;
	std::cout << "[ERROR]" << RESET << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
	std::cout << std::endl;
}

void	Harl::complain( std::string level )
{
	int	choice;

	std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	void (Harl::* ptrLevels[4])(void) =
		{ &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	choice = 0;
	while (choice < 4 && levels[choice] != level)
		choice++;
	filter(choice, ptrLevels);

}

void	Harl::filter( int choice, void (Harl::* ptrLevels[4])(void) )
{
	switch (choice)
	{
		case 0:
				(this->*ptrLevels[0])();
				// Intentional fall-through
		case 1:
				(this->*ptrLevels[1])();
				// Intentional fall-through
		case 2:
				(this->*ptrLevels[2])();
				// Intentional fall-through
		case 3:
				(this->*ptrLevels[3])();
				break;
		default:
				std::cout << RED << "[ Probably complaining about ";
				std::cout << "insignificant problems ]" << std::endl;
				break;
	}
}
