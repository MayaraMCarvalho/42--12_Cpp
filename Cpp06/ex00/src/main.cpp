/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:41:45 by macarval          #+#    #+#             */
/*   Updated: 2024/04/30 10:56:09 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char const *argv[])
{
	 if (argc != 2)
	{
		std::cout << RED << std::endl;
		std::cout << "Error: wrong number of arguments" << std::endl;
		std::cout << "Usage: ./convert [value]\n" << RESET << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return 0;
}
