/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 21:58:15 by macarval          #+#    #+#             */
/*   Updated: 2024/04/04 13:12:23 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;
		// Posso acrescentar mais se achar necessário

	public:
		Point( void );
		Point( float const x, float const y );
		Point( Point const &copy );
		~Point( void );

		Point& operator=( Point const &other );

		Fixed	getX( void ) const;
		Fixed	getY( void ) const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif
