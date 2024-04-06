/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:18:11 by macarval          #+#    #+#             */
/*   Updated: 2024/04/06 11:06:51 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

// Color codes as global variables
const std::string RESET = "\033[0m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string YELLOW = "\033[33;1m";
const std::string BLUE = "\033[34;1m";
const std::string PURPLE = "\033[35;1m";
const std::string CYAN = "\033[36;1m";
const std::string GRAY = "\033[37;1m";

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const &copy );
		~ClapTrap( void );

		ClapTrap&	operator=( ClapTrap const &other );

		void		setName( std::string name );
		std::string	getName( void ) const;
		int			getAttackDamage() const;

		void		attack( std::string const &target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
};

#endif
