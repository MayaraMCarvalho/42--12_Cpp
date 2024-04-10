/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:15:34 by macarval          #+#    #+#             */
/*   Updated: 2024/04/09 20:59:05 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# define S_ENERGY_POINTS 50

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const &copy );
		~ScavTrap( void );

		ScavTrap&	operator=( ScavTrap const &other );

		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
		void		attack(std::string const &target);
		void		guardGate(void);
};

#endif
