/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:43:03 by macarval          #+#    #+#             */
/*   Updated: 2024/03/29 22:45:38 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int num )
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = num * (1 << _fract);
}

Fixed::Fixed( const float num )
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = num * (1 << _fract);
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &copy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=( const Fixed &comp )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &comp)
		this->_fixed = comp.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	float floatValue;

	floatValue = static_cast<float>(fixed.getRawBits()) / (1 << fixed._fract);
	out << floatValue;
	return out;
}

int Fixed::getRawBits( void ) const
{
	return this->_fixed;
}

void Fixed::setRawBits( int const raw )
{
	this->_fixed = raw;
}


float Fixed::toFloat( void ) const
{
	float	a = 0;//
	return a;//
}

int Fixed::toInt( void ) const
{
	return this->_fixed * (1 << _fract);//
}
