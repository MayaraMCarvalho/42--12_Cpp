/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:43:55 by macarval          #+#    #+#             */
/*   Updated: 2024/05/13 12:09:52 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int argc, char const *argv[] )
{
	if (argc != 2)
	{
		std::cerr << RED;
		std::cerr << "Invalid number of parameters!" << std::endl;
		std::cerr << "Usage: ./RPN <reverse polish notation>" << std::endl;
		std::cerr << RESET << std::endl;
		return (1);
	}
	try
	{
		RPN rpn;

		rpn.run(argv);
	}
	catch (std::exception &e)
	{
		std::cerr << RED;
		std::cerr << RED << "Error: " << e.what() << std::endl;
		std::cerr << RESET << std::endl;
	}

	return 0;
}

