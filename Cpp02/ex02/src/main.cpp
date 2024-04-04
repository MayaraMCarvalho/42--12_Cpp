/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:41:11 by macarval          #+#    #+#             */
/*   Updated: 2024/04/03 21:44:39 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static void subject ( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
}

int main( void )
{
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << "********************* SUBJECT TEST **********************\n";
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The subject test is being executed..." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;

	subject();

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY << std::endl;

	std::cout << "---------------------------------------------------------\n";
	std::cout << "******************** FUNCTIONS TEST *********************\n";
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creating elements for testing..." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;

	Fixed a(10);
	Fixed b(2);
	Fixed c(1.8f);
	Fixed d(0.9f);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Testing mathematical operations with integers\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << a << " + " << b << ": " << a + b << std::endl;
	std::cout << a << " - " << b << ": " << a - b << std::endl;
	std::cout << a << " * " << b << ": " << a * b << std::endl;
	std::cout << a << " / " << b << ": " << a / b << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Testing comparison operations with integers\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << a << " is greater than " << b << ": ";
	std::cout << (a > b ? "Yes" : "No") << std::endl;
	std::cout << a << " is less than " << b << ": ";
	std::cout << (a < b ? "Yes" : "No") << std::endl;
	std::cout << a << " is greater than or equal to " << b << ": ";
	std::cout << (a >= b ? "Yes" : "No") << std::endl;
	std::cout << a << " is greater than or equal to " << a << ": ";
	std::cout << (a >=(a) ? "Yes" : "No") << std::endl;
	std::cout << a << " is less than or equal to " << b << ": ";
	std::cout << (a <= b ? "Yes" : "No") << std::endl;
	std::cout << a << " is equal to " << b << ": ";
	std::cout << (a == b ? "Yes" : "No") << std::endl;
	std::cout << a << " is equal to " << a << ": ";
	std::cout << (a ==(a) ? "Yes" : "No") << std::endl;
	std::cout << a << " is different than " << b << ": ";
	std::cout << (a != b ? "Yes" : "No") << std::endl;
	std::cout << a << " is different than " << a << ": ";
	std::cout << (a !=(a) ? "Yes" : "No") << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Testing mathematical operations with floats\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << c << " + " << d << ": " << c + d << std::endl;
	std::cout << c << " - " << d << ": " << c - d << std::endl;
	std::cout << c << " * " << d << ": " << c * d << std::endl;
	std::cout << c << " / " << d << ": " << c / d << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Testing comparison operations with floats\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << c << " is greater than " << d << ": ";
	std::cout << (c > d ? "Yes" : "No") << std::endl;
	std::cout << c << " is less than " << d << ": ";
	std::cout << (c < d ? "Yes" : "No") << std::endl;
	std::cout << c << " is greater than or equal to " << d << ": ";
	std::cout << (c >= d ? "Yes" : "No") << std::endl;
	std::cout << c << " is greater than or equal to " << c << ": ";
	std::cout << (c >= c ? "Yes" : "No") << std::endl;
	std::cout << c << " is less than or equal to " << d << ": ";
	std::cout << (c <= d ? "Yes" : "No") << std::endl;
	std::cout << c << " is equal to " << d << ": ";
	std::cout << (c == d ? "Yes" : "No") << std::endl;
	std::cout << c << " is equal to " << c << ": ";
	std::cout << (c == c ? "Yes" : "No") << std::endl;
	std::cout << c << " is different than " << d << ": ";
	std::cout << (c != d ? "Yes" : "No") << std::endl;
	std::cout << c << " is different than " << c << ": ";
	std::cout << (c != c ? "Yes" : "No") << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Testing mathematical operations with floats and integers\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << c << " + " << b << ": " << c + b << std::endl;
	std::cout << c << " - " << b << ": " << c - b << std::endl;
	std::cout << c << " * " << b << ": " << c * b << std::endl;
	std::cout << c << " / " << b << ": " << c / b << std::endl;
	std::cout << a << " + " << b << " + " << c << " + " << d << ": ";
	std::cout << a + b + c + d << std::endl;
	std::cout << a << " - " << b << " - " << c << " - " << d << ": ";
	std::cout << a - b - c - d << std::endl;
	std::cout << a << " * " << b << " / " << c << " * " << d << ": ";
	std::cout << a * b / c * d << std::endl;


	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Testing comparison operations with floats and integers\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << a << " is greater than " << d << ": ";
	std::cout << (a > d ? "Yes" : "No") << std::endl;
	std::cout << a << " is less than " << d << ": ";
	std::cout << (a < d ? "Yes" : "No") << std::endl;
	std::cout << a << " is greater than or equal to " << d << ": ";
	std::cout << (a >= d ? "Yes" : "No") << std::endl;
	std::cout << a << " is greater than or equal to " << c << ": ";
	std::cout << (a >= c ? "Yes" : "No") << std::endl;
	std::cout << a << " is less than or equal to " << d << ": ";
	std::cout << (a <= d ? "Yes" : "No") << std::endl;
	std::cout << a << " is equal to " << d << ": ";
	std::cout << (a == d ? "Yes" : "No") << std::endl;
	std::cout << a << " is equal to " << c << ": ";
	std::cout << (a == c ? "Yes" : "No") << std::endl;
	std::cout << a << " is different than " << d << ": ";
	std::cout << (a != d ? "Yes" : "No") << std::endl;
	std::cout << a << " is different than " << c << ": ";
	std::cout << (a != c ? "Yes" : "No") << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Testing increment/decrement operations with integers\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << "Pre-increment of " << a << ": " << ++a << std::endl;
	std::cout << "Post-increment of " << a << ": " << a++ << std::endl;
	std::cout << "new value: " << a << std::endl;
	std::cout << "Pre-decrement of " << b << ": " << --b << std::endl;
	std::cout << "Post-decrement of " << b << ": " << b-- << std::endl;
	std::cout << "new value: " << b << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Testing increment/decrement operations with floats\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << "Pre-increment of " << c << ": " << ++c << std::endl;
	std::cout << "Post-increment of " << c << ": " << c++ << std::endl;
	std::cout << "new value: " << c << std::endl;
	std::cout << "Pre-decrement of " << d << ": " << --d << std::endl;
	std::cout << "Post-decrement of " << d << ": " << d-- << std::endl;
	std::cout << "new value: " << d << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Testing max/min operations with integers and floats\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << "The smallest among " << a << " and " << b << ": ";
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << "The greatest among " << a << " and " << b << ": ";
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "The smallest among " << c << " and " << d << ": ";
	std::cout << Fixed::min( c, d ) << std::endl;
	std::cout << "The greatest among " << c << " and " << d << ": ";
	std::cout << Fixed::max( c, d ) << std::endl;
	std::cout << "The smallest among " << a << " and " << c << ": ";
	std::cout << Fixed::min( a, c ) << std::endl;
	std::cout << "The greatest among " << a << " and " << d << ": ";
	std::cout << Fixed::max( a, d ) << std::endl;
	std::cout << "The smallest among " << d << " and " << b << ": ";
	std::cout << Fixed::min( d, b ) << std::endl;
	std::cout << "The greatest among " << c << " and " << b << ": ";
	std::cout << Fixed::max( c, b ) << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Errors testing\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	Fixed e(0);

	std::cout << a << " / " << 0 << ": ";
	if (a / 0 != -1)
		std::cout << (a / 0) << std::endl;
	std::cout << c << " / " << 0 << ": ";
	if (c / 0 != -1)
		std::cout << (c / 0) << std::endl;
	std::cout << b << " / " << e << ": ";
	if (b / e != -1)
		std::cout << (d / e) << std::endl;
	std::cout << d << " / " << e << ": ";
	if (d / e != -1)
		std::cout << (b / e) << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY << std::endl;


	return 0;
}
