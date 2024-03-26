/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:16:58 by macarval          #+#    #+#             */
/*   Updated: 2024/03/26 17:24:14 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	Sed::openFile( std::string fileName )
{
	std::ifstream	file;

	file.open(fileName.c_str());
	if (!file.is_open())
	{
		std::cout << RED;
		std::cerr << "\nError opening the file '" << fileName << "'!\n\n";
		file.close();
		return (1);
	}
	file.peek();
	if (file.eof())
	{
		std::cout << RED;
		std::cerr << "\nInput file is empty\n\n";
		file.close();
		return (1);
	}
	return (0);
}

int	Sed::createFile( std::string fileName )
{
	std::string	fileNameSed;

	fileNameSed = fileName + ".sed";
	std::ofstream file(fileNameSed.c_str(), std::ios_base::app);
	if (!file.is_open())
	{
		std::cout << RED;
		std::cerr << "Error creating the file '" << fileName << ".sed'.\n";
		file.close();
		return (1);
	}
	return (0);
}
