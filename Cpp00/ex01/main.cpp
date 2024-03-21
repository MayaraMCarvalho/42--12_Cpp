/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:43:41 by macarval          #+#    #+#             */
/*   Updated: 2024/03/20 21:23:48 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main (void)
{
	PhoneBook	list;
	std::string	option;

	std::cout << PURPLE << "\n*** Welcome to your Phone Book ***" << std::endl;
	while (true)
	{
		std::cout << BLUE << "Enter an option: ADD, SEARCH or EXIT" << std::endl;
		std::cout << YELLOW;
		std::cin >> option;
		if (!option.compare("ADD"))
			list.add();
		else if (!option.compare("SEARCH"))
			list.search();
		else if (!option.compare("EXIT"))
		{
			std::cout << PURPLE << "Bye, Bye!!!\n" << std::endl;
			return (0);
		}
		else
			std::cout << RED << "Invalid option!\n" << std::endl;
	}
	return (0);
}
