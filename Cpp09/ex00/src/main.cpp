/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:19:12 by macarval          #+#    #+#             */
/*   Updated: 2024/05/10 09:15:20 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main( int argc, char const *argv[] )
{
	if (argc != 2)
	{
		std::cerr << RED;
		std::cerr << "Invalid number of parameters!" << std::endl;
		std::cerr << "Usage: ./btc <filename>" << std::endl;
		std::cerr << RESET << std::endl;
		return (1);
	}
	try
	{
		BitcoinExchange exchange;

		exchange.readInput(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cerr << RED;
		std::cerr << RED << "Error: " << e.what() << std::endl;
		std::cerr << RESET << std::endl;
	}

	return 0;
}
