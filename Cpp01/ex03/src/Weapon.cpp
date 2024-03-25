/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:48:34 by macarval          #+#    #+#             */
/*   Updated: 2024/03/25 13:59:01 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->_type = type;
}

Weapon::Weapon( void )
{
}

Weapon::~Weapon(void)
{
}

std::string	Weapon::getType(void) const
{
	return (this->_type);
}


void	Weapon::setType(std::string type)
{
	this->_type = type;
}
