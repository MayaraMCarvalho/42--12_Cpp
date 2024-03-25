/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:48:14 by macarval          #+#    #+#             */
/*   Updated: 2024/03/25 15:13:23 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main ( int argc, char *argv[] )
{
	if (argc != 4)
	{
		std::cout << RED;
		std::cout << "\nUsage: ./sed <filename> <string1> <string2>\n\n";
	}
	else
	{
		openFile(argv[1])
		{

		}
	}
	return (0);
}
