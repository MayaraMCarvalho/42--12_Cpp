/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:48:30 by macarval          #+#    #+#             */
/*   Updated: 2024/03/25 14:30:40 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon&		_weapon;



	public:
		HumanA( std::string	name, Weapon& weapon );
		~HumanA( void );

		std::string	getName(void) const;
		Weapon		getWeapon(void) const;

		void		setName(std::string name);
		void		setWeapon(Weapon& weapon);

		void		attack( void );
};

#endif
