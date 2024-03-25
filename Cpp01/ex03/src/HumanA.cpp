/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:48:25 by macarval          #+#    #+#             */
/*   Updated: 2024/03/25 14:36:20 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string	name, Weapon& weapon ) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

std::string	HumanA::getName(void) const
{
	return (_name);
}

Weapon	HumanA::getWeapon(void) const
{
	return (_weapon);
}

void	HumanA::setName(std::string name)
{
	this->_name = name;
}

void	HumanA::setWeapon(Weapon& weapon)
{
	this->_weapon = weapon;
}


void	HumanA::attack( void )
{
	std::cout << YELLOW;
	std::cout << _name << " attacks with their ";
	std::cout << _weapon.getType() << std::endl;
}
