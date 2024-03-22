/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:29:56 by macarval          #+#    #+#             */
/*   Updated: 2024/03/22 17:04:14 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	std::cout << GREEN << "Zombie created " << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << RED << this->_name << ": Destroy zombie" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << YELLOW << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
}
