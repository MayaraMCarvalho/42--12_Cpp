/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:43:45 by macarval          #+#    #+#             */
/*   Updated: 2024/03/20 22:55:37 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->old = 0;
	this->size = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::add(void)
{
	Contact	contact;

	std::cin.ignore();
	contact.setFirstName(getInfo("Enter the contact's first name:"));
	contact.setLastName(getInfo("Enter the contact's last name:"));
	contact.setNickname(getInfo("Enter the contact's nickname:"));
	contact.setNumber(getInfo("Enter the contact's phone number:"));
	contact.setDarkSecret(getInfo("Enter the contact's darkest secret:"));
	saveContact(contact);
	std::cout << GREEN << "Contact added successfully!\n" << std::endl;
}

void	PhoneBook::search(void) const
{
	std::cout << GRAY;
	std::cout << "|  Index  |   Name   | LastName | Nickname |" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << "|" << std::right << std::setw(9) << i + 1 << "|";
		printSearch(contacts[i].getFirstName());
		printSearch(contacts[i].getLastName());
		printSearch(contacts[i].getNickname());
		std::cout << std::endl;
	}
	std::cout << std::endl;
	searchContact();
}
