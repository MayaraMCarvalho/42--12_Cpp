/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:48:28 by macarval          #+#    #+#             */
/*   Updated: 2024/03/25 14:27:30 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon*		_weapon;
		std::string	_name;

	public:
		HumanB( std::string	name );
		~HumanB( void );

		std::string	getName(void) const;
		Weapon		getWeapon(void) const;

		void		setName(std::string name);
		void		setWeapon(Weapon& weapon);

		void		attack( void );
};

#endif
