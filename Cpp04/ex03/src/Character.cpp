/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:26:01 by macarval          #+#    #+#             */
/*   Updated: 2024/04/22 21:02:33 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) : _name("Unknown")
{
	for (int i = 0; i < INV_SIZE; ++i)
		_inventory[i] = NULL;
	for (int i = 0; i < FLOOR_SIZE; ++i)
		_floor[i] = NULL;
	std::cout << PURPLE;
	std::cout << "A new materia of named 'Unknown' has been created!\n";
	std::cout << RESET;
}

Character::Character( std::string const &name ) : _name(name)
{
	for (int i = 0; i < INV_SIZE; ++i)
		_inventory[i] = NULL;
	for (int i = 0; i < FLOOR_SIZE; ++i)
		_floor[i] = NULL;
	std::cout << PURPLE;
	std::cout << "A new Character named '" << this->_name;
	std::cout << "' has been created!\n";
	std::cout << RESET;
}


Character::Character( Character const &copy )
{
	*this = copy;
	for (int i = 0; i < INV_SIZE; ++i)
		this->_inventory[i] = copy._inventory[i]->clone();
	std::cout << YELLOW;
	std::cout << "A new character named '" << this->_name;
	std::cout << "' materia has been created by copy!" << std::endl;
	std::cout << RESET;
}

Character::~Character( void )
{
	for (int i = 0; i < FLOOR_SIZE; ++i)
	{
		if (this->_floor[i] != NULL)
			delete this->_floor[i];
	}
	for (int i = 0; i < INV_SIZE; ++i)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << RED;
	std::cout << "A character named '" << this->_name;
	std::cout << "' has been destroyed!" << std::endl;
	std::cout << RESET;
}

Character& Character::operator=( Character const &other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < INV_SIZE; ++i)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
		}
		this->_name = other._name;
		for(int i =0; i < INV_SIZE; ++i)
			this->_inventory[i] = other._inventory[i];
	}
	return *this;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < INV_SIZE; ++i)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout << GREEN;
			std::cout << "Materia '" << m->getType();
			std::cout << "' equipped to character '" << this->_name << "'!\n";
			std::cout << RESET;
			return ;
		}
	}
	std::cout << YELLOW;
	std::cout << "Inventory of character '" << this->_name << "' is full!\n";
	std::cout << RESET;
	delete m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || !this->_inventory[idx])
	{
		std::cout << YELLOW;
		std::cout << "Invalid index!" << std::endl;
		std::cout << RESET;
		return ;
	}
		std::cout << YELLOW;
		std::cout << "Materia '" << this->_inventory[idx]->getType();
		std::cout << "' unequipped from character '";
		std::cout << this->_name << "'!" << std::endl;
		std::cout << RESET;
		for (int i = 0; i < FLOOR_SIZE; ++i)
		{
			if (!this->_floor[i])
			{
				this->_floor[i] = this->_inventory[idx];
				break ;
			}
		}
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || !this->_inventory[idx])
	{
		std::cout << YELLOW;
		std::cout << "Invalid index!" << std::endl;
		std::cout << RESET;
		return ;
	}
	this->_inventory[idx]->use(target);
}

