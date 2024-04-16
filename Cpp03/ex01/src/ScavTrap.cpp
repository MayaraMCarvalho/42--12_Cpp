/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:15:46 by macarval          #+#    #+#             */
/*   Updated: 2024/04/16 10:00:37 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << YELLOW;
	std::cout << "ScavTrap " << this->_name;
	std::cout << " was created inheriting from ClapTrap with ";
	std::cout << this->_hitPoints << " hit points⚡,\n";
	std::cout << this->_energyPoints << " energy points🔋 and ";
	std::cout << this->_attackDamage << " attack damage 🗡️.\n\n";
	std::cout << RESET;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name )
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << CYAN;
	std::cout << "ScavTrap " << RED << this->_name;
	std::cout << CYAN <<" was created from ClapTrap with ";
	std::cout << this->_hitPoints << " hit points⚡,\n";
	std::cout << this->_energyPoints << " energy points🔋 and ";
	std::cout << this->_attackDamage << " attack damage 🗡️.\n\n";
	std::cout << RESET;
}

ScavTrap::ScavTrap( ScavTrap const &copy ) : ClapTrap( copy )
{
	*this = copy;
	std::cout << GRAY;
	std::cout << "A copy ScavTrap " << RED << this->_name;
	std::cout << GRAY << " was created!" << std::endl;
	std::cout << RESET;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << RED;
	std::cout << "ScavTrap " << YELLOW << this->_name;
	std::cout << RED << " was destroyed! 👋👋\n" << std::endl;
	std::cout << RESET;
}

ScavTrap& ScavTrap::operator=( ScavTrap const &other )
{
	std::cout << GREEN;
	std::cout << "ScavTrap " << RED << other._name;
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
	std::cout << "ScavTrap " << YELLOW << name << RED;
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
		std::cout << YELLOW << "ScavTrap " << RED << name << YELLOW;
		std::cout << " is so tired that right now 😴!" << std::endl;
	}
}

void ScavTrap::attack( std::string const &target )
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		--this->_energyPoints;
		std::cout << PURPLE;
		std::cout << "ScavTrap " << RED << this->_name << PURPLE;
		std::cout << " 💥attacks " << target << ", causing ";
		std::cout << this->_attackDamage << " points of damage!\n";
		std::cout << "ScavTrap " << RED << this->_name << PURPLE << " has now ";
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

void ScavTrap::guardGate(void)
{
	std::cout << BLUE;
	std::cout << "ScavTrap " << YELLOW << this->_name << BLUE;
	std::cout << " is now 🏰 Gatekeeper mode!!!🛡️\n" << std::endl;
	std::cout << RESET;
}

