/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:16:55 by macarval          #+#    #+#             */
/*   Updated: 2024/03/26 21:57:23 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed() : _fileName("")
{
}

Sed::~Sed()
{
}

int	Sed::sed( int argc, char *argv[] )
{
	_fileName = "";
	if (argc != 4)
	{
		std::cout << RED;
		std::cout << "\nUsage: ./sed <filename> <string1> <string2>\n\n";
		return (1);
	}
	else
	{
		_fileName = "files_sed/" + std::string(argv[1]);
		if(openFile())
			return (1);
		if(createFile())
			return (1);
		_oldWord = argv[2];
		_newWord = argv[3];
		replace();
		std::cout << GREEN << "\nSed executed successfully!\n" << std::endl;
	}
	return (0);
}

void	Sed::replace( void )
{
	std::string		line;
	std::ifstream	file;
	std::ofstream	sedFile;

	file.open(_fileName.c_str());
	sedFile.open((_fileName + ".sed").c_str());
	while (std::getline(file, line))
	{
		replaceWords(line);
		sedFile << line << "\n";
	}
	file.close();
	sedFile.close();
}

void	Sed::replaceWords( std::string& line)
{
	size_t pos;
	pos = line.find(_oldWord);
	while (pos != std::string::npos)
	{
		line.erase(pos, _oldWord.size());
		line.insert(pos, _newWord);
		pos += _newWord.size();
		pos = line.find(_oldWord, pos);
	}
}
