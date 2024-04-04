/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 21:58:15 by macarval          #+#    #+#             */
/*   Updated: 2024/04/03 22:20:13 by macarval         ###   ########.fr       */
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
		Point( const float x, const float y );
		~Point( void );
		Point( const Point &copy );
		Point& operator=( const Point &comp );

		bool bsp( Point const a, Point const b, Point const c, Point const point);
};

#endif
