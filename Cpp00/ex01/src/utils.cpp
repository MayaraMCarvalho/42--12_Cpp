/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:32:45 by macarval          #+#    #+#             */
/*   Updated: 2024/03/20 21:33:28 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	PhoneBook::getInfo(std::string text)
{
	std::string info;
	while(true)
	{
		std::cout << GRAY << "\n" << text << std::endl;
		std::getline(std::cin, info);
		if (info.empty())
			std::cout << RED << "Invalid input" << std::endl;
		else
			return (info);
	}
}

void	PhoneBook::saveContact(Contact contact)
{
	if (size == 8)
	{
		contacts[old] = contact;
		old++;
		if (old > 7)
			old = 0;
	}
	else
		contacts[size++] = contact;
}

void	PhoneBook::printSearch(std::string text)
{
	if (text.length() > 10)
	{
		std::cout << std::right << std::setw(9);
		std::cout << text.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		std::cout << std::right << std::setw(10);
		std::cout << text.substr(0, 10);
	}
	std::cout << "|";
}

void	PhoneBook::searchContact(void)
{
	int	index;

	if (size == 0)
		std::cout << RED << "The Phone Book is empty!!\n" << std::endl;
	else
	{
		std::cout << YELLOW << "Enter the index of the contact you want to consult:" << std::endl;
		std::cin >> index;
		if (std::cin.fail() || index > size || index < 1)
			std::cout << RED << "Index invalid!\n" << std::endl;
		else
			printContact(--index);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void	PhoneBook::printContact(int index)
{
	std::cout << GRAY << "First Name: ";
	std::cout << CYAN << contacts[index].getFirstName() << std::endl;
	std::cout << GRAY << "Last Name: ";
	std::cout << CYAN << contacts[index].getLastName() << std::endl;
	std::cout << GRAY << "Nickname: ";
	std::cout << CYAN << contacts[index].getNickname() << std::endl;
	std::cout << GRAY << "Phone Number: ";
	std::cout << CYAN << contacts[index].getNumber() << std::endl;
	std::cout << GRAY << "Dark Secret: ";
	std::cout << CYAN << contacts[index].getDarkSecret() << std::endl;
	std::cout << std::endl;
}
