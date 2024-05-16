/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:43:55 by macarval          #+#    #+#             */
/*   Updated: 2024/05/16 09:55:55 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int argc, char const *argv[] )
{
	if (argc != 2)
	{
		std::cout << RED;
		std::cout << "Invalid number of parameters!" << std::endl;
		std::cout << "Usage: ./RPN <reverse polish notation>" << std::endl;
		std::cout << RESET << std::endl;
		return (1);
	}
	try
	{
		RPN rpn;
		std::cout << CYAN << rpn.run(argv[1]) << RESET << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Error: " << e.what();
		std::cout << RESET << std::endl;
	}

	return 0;
}

