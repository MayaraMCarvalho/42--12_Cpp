/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:44:45 by macarval          #+#    #+#             */
/*   Updated: 2024/03/27 16:57:12 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include "Weapon.hpp"

class Fixed
{
	private:
		std::string	_name;
		Weapon&		_weapon;

	public:
		Fixed( void );
		~Fixed( void );
		
		Fixed( const Fixed& copy );
		Fixed& operator=( const Fixed& new );

};

#endif
