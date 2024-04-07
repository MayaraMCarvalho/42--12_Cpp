/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:15:34 by macarval          #+#    #+#             */
/*   Updated: 2024/04/07 15:20:36 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( FragTrap const &copy );
		~FragTrap( void );

		FragTrap&	operator=( FragTrap const &other );

		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
		void		attack(std::string const &target);
		void		highFivesGuys(void);
};

#endif
