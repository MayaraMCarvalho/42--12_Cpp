/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:17:27 by macarval          #+#    #+#             */
/*   Updated: 2024/04/06 19:34:13 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("John Doe"), _hitPoints(10),
							_energyPoints(10), _attackDamage(0)
{
	std::cout << YELLOW;
	std::cout << "ClapTrap " << this->_name << " was created with ";
	std::cout << this->_hitPoints << " hit points⚡,\n";
	std::cout << this->_energyPoints << " energy points🔋 and ";
	std::cout << this->_attackDamage << " attack damage 🗡️.\n\n";
	std::cout << RESET;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10),
										_energyPoints(10), _attackDamage(0)
{
	std::cout << CYAN;
	std::cout << "ClapTrap " << RED << this->_name;
	std::cout << CYAN <<" was created with ";
	std::cout << this->_hitPoints << " hit points⚡,\n";
	std::cout << this->_energyPoints << " energy points🔋 and ";
	std::cout << this->_attackDamage << " attack damage 🗡️.\n\n";
	std::cout << RESET;
}

ClapTrap::ClapTrap( ClapTrap const &copy )
{
	*this = copy;
	std::cout << GRAY;
	std::cout << "A copy ClapTrap " << RED << this->_name;
	std::cout << GRAY << " was created!" << std::endl;
	std::cout << RESET;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << RED;
	std::cout << "ClapTrap " << YELLOW << this->_name;
	std::cout << RED << " was destroyed! 👋👋\n" << std::endl;
	std::cout << RESET;
}

ClapTrap& ClapTrap::operator=( ClapTrap const &other )
{
	std::cout << GREEN;
	std::cout << "ClapTrap " << RED << other._name;
	std::cout << GREEN << " copied by assignment operator" << std::endl;
	std::cout << RESET;
	if (this != &other)
	{
		this->_name = other._name;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
		this->_hitPoints = other._hitPoints;
	}
	return *this;
}

void ClapTrap::setName( std::string name )
{
	this->_name = name;
	std::cout << YELLOW;
	std::cout << "ClapTrap " << RED << this->_name;
	std::cout << YELLOW << " now it has a name! 👍\n\n";
	std::cout << RESET;
}

std::string ClapTrap::getName( void ) const
{
	return this->_name;
}

int ClapTrap::getAttackDamage( void ) const
{
	return this->_attackDamage;
}

static void status( std::string name, int status)
{
	std::cout << RED;
	std::cout << "ClapTrap " << YELLOW << name << RED;
	if (status == 1)
		std::cout << " has no energy points🔋 to attack!\n";
	else
		std::cout << " is 😵 dead!\n";
	std::cout << RESET << std::endl;
}

static void statusEnergy (std::string name, int energy)
{
	if (energy == 0)
	{
		std::cout << YELLOW << "ClapTrap " << RED << name << YELLOW;
		std::cout << " is so tired that right now 😴!" << std::endl;
	}
}

void ClapTrap::attack( std::string const &target )
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		--this->_energyPoints;
		std::cout << PURPLE;
		std::cout << "ClapTrap " << RED << this->_name << PURPLE;
		std::cout << " 💥attacks " << target << ", causing ";
		std::cout << this->_attackDamage << " points of damage!\n";
		std::cout << "ClapTrap " << RED << this->_name << PURPLE << " has now ";
		std::cout << this->_energyPoints << " energy points🔋!\n";
		std::cout << RESET;
		statusEnergy(this->_name, this->_energyPoints);
		std::cout << std::endl;
	}
	else
	{
		std::cout << RED;
		std::cout << "Can't attack!!\n";
		if (this->_hitPoints == 0)
			status(this->_name, 0);
		else if (this->_energyPoints == 0)
			status(this->_name, 1);
	}
}

void ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints -= amount;
		std::cout << BLUE;
		std::cout << "ClapTrap " << RED << this->_name << BLUE;
		std::cout << " take " << amount << " points of damage!😲🤕\n";
		std::cout << "ClapTrap " << RED << this->_name << BLUE << " has now ";
		std::cout << this->_hitPoints << " hit points⚡!\n" << std::endl;
		std::cout << RESET;
		if (this->_hitPoints <= 0)
			status(this->_name, 0);
	}
	else
	{
		std::cout << RED;
		std::cout << "Can't take damage!!\n";
		status(this->_name, 0);
	}
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_energyPoints > 0)
	{
		std::cout << GREEN;
		if (this->_hitPoints <= 0)
		{
			std::cout << "ClapTrap " << RED << this->_name << GREEN;
			std::cout << " had his life 🐣restored\n";
		}
		--this->_energyPoints;
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << RED << this->_name << GREEN;
		std::cout << " be 🩹repaired with " << amount << " hit points⚡!\n";
		std::cout << "ClapTrap " << RED << this->_name << GREEN << " has now ";
		std::cout << this->_hitPoints << " hit points⚡ and ";
		std::cout << this->_energyPoints << " energy points🔋!\n" << std::endl;
		std::cout << RESET;
		statusEnergy(this->_name, this->_energyPoints);
	}
	else
	{
		std::cout << RED;
		std::cout << "Can't be repaired!\n";
		status(this->_name, 1);
	}
}

