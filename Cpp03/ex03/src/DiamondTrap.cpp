/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:05:19 by macarval          #+#    #+#             */
/*   Updated: 2024/04/07 17:35:08 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("John Doe_clap_name"),
									ScavTrap(), FragTrap()
{
	this->_name = "John Doe";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << YELLOW;
	std::cout << "DiamondTrap " << this->_name;
	std::cout << " was created inheriting from ";
	std::cout << "ClapTrap, ScavTrap and FragTrap with ";
	std::cout << this->_hitPoints << " hit points⚡,\n";
	std::cout << this->_energyPoints << " energy points🔋 and ";
	std::cout << this->_attackDamage << " attack damage 🗡️.\n\n";
	std::cout << RESET;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" ),
											ScavTrap( name ), FragTrap( name )
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << CYAN;
	std::cout << "DiamondTrap " << RED << this->_name;
	std::cout << CYAN <<" was created from ";
	std::cout << "ClapTrap, ScavTrap and FragTrap with ";
	std::cout << this->_hitPoints << " hit points⚡,\n";
	std::cout << this->_energyPoints << " energy points🔋 and ";
	std::cout << this->_attackDamage << " attack damage 🗡️.\n\n";
	std::cout << RESET;
}

DiamondTrap::DiamondTrap( DiamondTrap const &copy ) : ClapTrap( copy ),
											ScavTrap( copy ), FragTrap ( copy )
{
	*this = copy;
	std::cout << GRAY;
	std::cout << "A copy DiamondTrap " << RED << this->_name;
	std::cout << GRAY << " was created!" << std::endl;
	std::cout << RESET;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << RED;
	std::cout << "DiamondTrap " << YELLOW << this->_name;
	std::cout << RED << " was destroyed! 👋👋\n" << std::endl;
	std::cout << RESET;
}

DiamondTrap& DiamondTrap::operator=( DiamondTrap const &other )
{
	std::cout << GREEN;
	std::cout << "DiamondTrap " << RED << other._name;
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

static void status( std::string name, int status)
{
	std::cout << RED;
	std::cout << "DiamondTrap " << YELLOW << name << RED;
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
		std::cout << YELLOW << "DiamondTrap " << RED << name << YELLOW;
		std::cout << " is so tired that right now 😴!" << std::endl;
	}
}

void DiamondTrap::attack( std::string const &target )
{
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints -= amount;
		std::cout << BLUE;
		std::cout << "DiamondTrap " << RED << this->_name << BLUE;
		std::cout << " take " << amount << " points of damage!😲🤕\n";
		std::cout << "DiamondTrap " << RED << this->_name << BLUE << " has now ";
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

void DiamondTrap::beRepaired( unsigned int amount )
{
	if (this->_energyPoints > 0)
	{
		std::cout << GREEN;
		if (this->_hitPoints <= 0)
		{
			std::cout << "DiamondTrap " << RED << this->_name << GREEN;
			std::cout << " had his life 🐣restored\n";
		}
		--this->_energyPoints;
		this->_hitPoints += amount;
		std::cout << "DiamondTrap " << RED << this->_name << GREEN;
		std::cout << " be 🩹repaired with " << amount << " hit points⚡!\n";
		std::cout << "DiamondTrap " << RED << this->_name << GREEN << " has now ";
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

void DiamondTrap::whoAmI(void) const
{
	std::cout << BLUE;
	std::cout << "Hi, i'm DiamondTrap " << YELLOW << this->_name << BLUE;
	std::cout << " and my ClapTrap name is " << YELLOW << ClapTrap::_name;
	std::cout << BLUE << " !\n" << "I'm a ScavTrap and FragTrap too!";
	std::cout << std::endl << RESET << std::endl;
}
