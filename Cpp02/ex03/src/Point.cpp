/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 21:59:36 by macarval          #+#    #+#             */
/*   Updated: 2024/04/03 22:18:49 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Point::Point( const float x, const float y ) : _x(x), _y(y)
{
	std::cout << "Constructor with parameters called" << std::endl;
}

Point::~Point( void )
{
	std::cout << "Destructor called" << std::endl;
}

Point::Point( const Point &copy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Point& Point::operator=( const Point &comp )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &comp)
	{}
	return *this;
}
