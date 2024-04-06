/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:05:19 by macarval          #+#    #+#             */
/*   Updated: 2024/04/06 12:17:16 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << YELLOW;
	std::cout << "DiamondTrap " << this->_name;
	std::cout << " was created inheriting from ClapTrap with ";
	std::cout << this->_hitPoints << " hit points⚡,\n";
	std::cout << this->_energyPoints << " energy points🔋 and ";
	std::cout << this->_attackDamage << " attack damage 🗡️.\n\n";
	std::cout << RESET;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name")
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << CYAN;
	std::cout << "DiamondTrap " << RED << this->_name;
	std::cout << CYAN <<" was created from ClapTrap with ";
	std::cout << this->_hitPoints << " hit points⚡,\n";
	std::cout << this->_energyPoints << " energy points🔋 and ";
	std::cout << this->_attackDamage << " attack damage 🗡️.\n\n";
	std::cout << RESET;
}

DiamondTrap::DiamondTrap( DiamondTrap const &copy ) : ClapTrap( copy )
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
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		--this->_energyPoints;
		std::cout << PURPLE;
		std::cout << "DiamondTrap " << RED << this->_name << PURPLE;
		std::cout << " 💥attacks " << target << ", causing ";
		std::cout << this->_attackDamage << " points of damage!\n";
		std::cout << "DiamondTrap " << RED << this->_name << PURPLE << " has now ";
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

void DiamondTrap::whoAmI(void)
{
	std::cout << BLUE;
	std::cout << "DiamondTrap " << YELLOW << this->_name << BLUE;
	std::cout << " whoAmI\n" << std::endl;
	std::cout << RESET;
}

