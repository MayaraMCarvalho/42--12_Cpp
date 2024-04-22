/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:57:54 by macarval          #+#    #+#             */
/*   Updated: 2024/04/22 18:23:03 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < INV_SIZE; ++i)
		this->_memory[i] = NULL;
	std::cout << GREEN;
	std::cout << "A new materia source has been created!" << std::endl;
	std::cout << RESET;
}

MateriaSource::MateriaSource( MateriaSource const &copy )
{
	*this = copy;
	std::cout << GREEN;
	std::cout << "A new materia source has been created by copy!" << std::endl;
	std::cout << RESET;

}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < INV_SIZE; ++i)
	{
		if (this->_memory[i])
			delete this->_memory[i];
	}
	std::cout << RED;
	std::cout << "A materia source has been destroyed!" << std::endl;
	std::cout << RESET;
}

MateriaSource& MateriaSource::operator=( MateriaSource const &other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < INV_SIZE; ++i)
		{
			if (this->_memory[i])
				delete this->_memory[i];
		}
		for(int i = 0; i < INV_SIZE; ++i)
			this->_memory[i] = other._memory[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < INV_SIZE; ++i)
	{
		if (!this->_memory[i])
		{
			this->_memory[i] = m;
			std::cout << BLUE;
			std::cout << "Materia source learned " << m->getType() << "!\n";
			std::cout << RESET;
			return ;
		}
	}
	std::cout << YELLOW;
	std::cout << "Inventory is full!" << std::endl;
	std::cout << RESET;
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < INV_SIZE; ++i)
	{
		if (this->_memory[i]->getType() == type)
		{
			std::cout << BLUE;
			std::cout << "Materia source create " << type << " materia!\n";
			std::cout << RESET;
			return this->_memory[i]->clone();
		}
	}
	std::cout << YELLOW;
	std::cout << "Materia source doesn't know " << type << "!" << std::endl;
	std::cout << RESET;
	return NULL;
}

