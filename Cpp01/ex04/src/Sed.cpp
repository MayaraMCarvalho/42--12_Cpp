/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:16:55 by macarval          #+#    #+#             */
/*   Updated: 2024/03/26 17:24:11 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	Sed::sed( int argc, char *argv[] )
{
	std::string	fileName;

	if (argc != 4)
	{
		std::cout << RED;
		std::cout << "\nUsage: ./sed <filename> <string1> <string2>\n\n";
		return (1);
	}
	else
	{
		fileName = "files_sed/" + std::string(argv[1]);
		if(openFile(fileName))
			return (1);
		if(createFile(fileName))
			return (1);
		replace(fileName, argv[2], argv[3]);
		std::cout << GREEN << "\nSed executed successfully!\n" << std::endl;
	}
	return (0);
}

void	Sed::replace( std::string fileName, std::string s1, std::string s2 )
{
	std::string		line;
	std::ifstream	file;
	std::ofstream	sedFile;

	file.open(fileName.c_str());
	sedFile.open((fileName + ".sed").c_str());
	while (std::getline(file, line))
	{
		replaceWords(line, s1, s2);
		sedFile << line << "\n";
	}
	file.close();
	sedFile.close();
}

void	Sed::replaceWords( std::string& line, std::string s1, std::string s2 )
{
	size_t pos;
	pos = line.find(s1);
	while (pos != std::string::npos)
	{
		line.erase(pos, s1.size());
		line.insert(pos, s2);
		pos += s2.size();
		pos = line.find(s1, pos);
	}
}
