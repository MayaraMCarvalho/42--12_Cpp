/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:43:55 by macarval          #+#    #+#             */
/*   Updated: 2024/05/14 17:03:47 by macarval         ###   ########.fr       */
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

		rpn.run(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cout << RED;
		std::cout << RED << "Error: " << e.what() << std::endl;
		std::cout << RESET << std::endl;
	}

	return 0;
}

