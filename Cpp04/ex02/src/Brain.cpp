/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:22:37 by macarval          #+#    #+#             */
/*   Updated: 2024/04/19 16:36:31 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::string goodIdeas[4] = {"Play", "Eat", "Sleep", "Walk"};
	for (int i = 0; i < 100; i++)
		this->ideas[i] = goodIdeas[rand() % 4];

	std::cout << PURPLE;
	std::cout << "Brain🧠 was created!\n" << std::endl;
	std::cout << RESET;
}

Brain::Brain( Brain const &copy )
{
	std::cout << GRAY;
	std::cout << "A copy Brain🧠 was created!" << std::endl;
	std::cout << RESET;
	*this = copy;
}

Brain::~Brain( void )
{
	std::cout << RED;
	std::cout << "Brain🤯 was destroyed!" << std::endl;
	std::cout << RESET;
}

Brain& Brain::operator=( Brain const &other )
{
	std::cout << GREEN;
	std::cout << "Brain🧠 copied by assignment operator" << std::endl;
	std::cout << RESET;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.getIdea(i);
	}
	return *this;
}

std::string Brain::getIdea( int n ) const
{
	return this->ideas[n];
}
