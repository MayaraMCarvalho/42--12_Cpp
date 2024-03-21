/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:44:47 by macarval          #+#    #+#             */
/*   Updated: 2024/03/20 22:54:26 by macarval         ###   ########.fr       */
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
		void		search(void) const;
		void		searchContact(void) const;
		void		saveContact(Contact contact);
		void		printContact(int index) const;
		std::string	getInfo(std::string text) const;
		void		printSearch(std::string text) const;
};

#endif
