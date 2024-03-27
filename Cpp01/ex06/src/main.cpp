/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 22:37:05 by macarval          #+#    #+#             */
/*   Updated: 2024/03/27 12:09:50 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int argc, char* argv[] )
{
	if (argc != 2)
	{
		std::cout << RED << std::endl;
		std::cout << "Invalid number of arguments!\n" << std::endl;
		std::cout << "Usage: ./harlFilter [DEBUG, INFO, WARNING or ERROR]\n\n";
		return (1);
	}

	Harl	harl;

	harl.complain(argv[1]);
	return (0);
}
