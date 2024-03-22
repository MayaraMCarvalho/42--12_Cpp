/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 21:42:57 by macarval          #+#    #+#             */
/*   Updated: 2024/03/22 11:12:39 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	this->_name = name;
	std::cout << GREEN << this->_name << ": Zombie created " << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << RED << this->_name << ": Destroy zombie\n" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << YELLOW << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
