/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 21:59:36 by macarval          #+#    #+#             */
/*   Updated: 2024/04/04 13:05:17 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Point::Point( float const x, float const y ) : _x(x), _y(y)
{
	// std::cout << "Constructor with parameters called" << std::endl;
}

Point::Point( const Point &copy ) : _x(copy._x), _y(copy._y)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Point::~Point( void )
{
	// std::cout << "Destructor called" << std::endl;
}

Point& Point::operator=( const Point &other )
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		( Fixed ) this->_x = other.getX();
		( Fixed ) this->_y = other.getY();
	}
	return *this;
}

Fixed Point::getX( void ) const
{
	return this->_x;
}

Fixed Point::getY( void ) const
{
	return this->_y;
}
