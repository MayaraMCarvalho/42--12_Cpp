/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:43:03 by macarval          #+#    #+#             */
/*   Updated: 2024/04/04 14:37:52 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->_fixed = 0;
}

Fixed::Fixed( const int num )
{
	this->_fixed = num << this->_fract;
}

Fixed::Fixed( const float num )
{
	this->_fixed = roundf(num * (1 << this->_fract));
}

Fixed::~Fixed( void )
{
}

Fixed::Fixed( const Fixed &copy )
{
	*this = copy;
}

Fixed& Fixed::operator=( const Fixed &comp )
{
	if (this != &comp)
		this->_fixed = comp.getRawBits();
	return *this;
}

Fixed Fixed::operator+( const Fixed &other )
{
	Fixed res;

	res._fixed = this->getRawBits() + other.getRawBits();
	return res;
}

Fixed Fixed::operator-( const Fixed &other )
{
	Fixed res;

	res._fixed = this->getRawBits() - other.getRawBits();
	return res;
}

Fixed Fixed::operator*( const Fixed &other )
{
	Fixed res;

	res._fixed = this->getRawBits() * other.getRawBits() >> _fract;
	return res;
}

Fixed Fixed::operator/( const Fixed &other )
{
	Fixed res;

	if (other.getRawBits() == 0)
	{
		std::cout << "Error: Division by zero" << std::endl;
		return -1;
	}
	res._fixed = (this->getRawBits() << _fract) / other.getRawBits();
	return res;
}

Fixed& Fixed::operator++( void )
{
	++_fixed;
	return *this;
}

Fixed Fixed::operator++( int )
{
	Fixed temp(*this);

	++_fixed;
	return temp;
}

Fixed& Fixed::operator--( void )
{
	--_fixed;
	return *this;
}

Fixed Fixed::operator--( int )
{
	Fixed temp(*this);

	--_fixed;
	return temp;
}

bool Fixed::operator>( const Fixed &comp ) const
{
	return (this->getRawBits() > comp.getRawBits());
}

bool Fixed::operator<( const Fixed &comp ) const
{
	return (this->getRawBits() < comp.getRawBits());
}

bool Fixed::operator>=( const Fixed &comp ) const
{
	return (this->getRawBits() >= comp.getRawBits());
}

bool Fixed::operator<=( const Fixed &comp ) const
{
	return (this->getRawBits() <= comp.getRawBits());
}

bool Fixed::operator==( const Fixed &comp ) const
{
	return (this->getRawBits() == comp.getRawBits());
}

bool Fixed::operator!=( const Fixed &comp ) const
{
	return (this->getRawBits() != comp.getRawBits());
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
	return (float)this->_fixed / (1 << this->_fract);
}

int Fixed::toInt( void ) const
{
	return this->_fixed >> this->_fract;
}

Fixed&	Fixed::min(Fixed &comp1, Fixed &comp2)
{
	return (comp1 < comp2 ? comp1 : comp2);
}

const Fixed&	Fixed::min(const Fixed &comp1, const Fixed &comp2)
{
	return (comp1 < comp2 ? comp1 : comp2);
}

Fixed&	Fixed::max(Fixed &comp1, Fixed &comp2)
{
	return (comp1 > comp2 ? comp1 : comp2);
}

const Fixed&	Fixed::max(const Fixed &comp1, const Fixed &comp2)
{
	return (comp1 > comp2 ? comp1 : comp2);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	return out << fixed.toFloat();
}
