/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:44:47 by macarval          #+#    #+#             */
/*   Updated: 2024/03/20 21:28:32 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		old;
		int		size;

	public:
		PhoneBook(void);
		~PhoneBook(void);

		void		add(void);
		void		search(void);
		void		searchContact(void);
		void		printContact(int index);
		std::string	getInfo(std::string text);
		void		saveContact(Contact contact);
		void		printSearch(std::string text);
};

#endif
