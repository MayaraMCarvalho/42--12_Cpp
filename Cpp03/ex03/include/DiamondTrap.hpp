/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:05:07 by macarval          #+#    #+#             */
/*   Updated: 2024/04/07 17:35:02 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;

	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const &copy );
		~DiamondTrap( void );

		DiamondTrap& operator=( DiamondTrap const &other );

		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
		void		attack(std::string const &target);

		void		whoAmI(void) const;
};

#endif
