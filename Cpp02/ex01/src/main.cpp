/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:41:11 by macarval          #+#    #+#             */
/*   Updated: 2024/04/03 14:29:51 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static void subject ( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
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
	std::cout << "**************** TEST WITH DESCRIPTION ******************\n";
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instance 'a' is created using the default constructor\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	Fixed a;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instance 'b' is created using int constructor\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	Fixed const b( 10 );

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instance 'c' is created using float constructor\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;
	Fixed const c( 42.42f );

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instance 'd' is created using the copy constructor\n";
	std::cout << "The instance 'd' is a copy of 'b'" << std::endl;
	std::cout << "The instance 'b' is assigned to 'd' using the copy";
	std::cout << "\nassignment operator" << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	Fixed const d( b );

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instance 'a' is assigned to a new value using the\n";
	std::cout << "float constructor" << std::endl;
    std::cout << "The new Fixed instance is assigned to 'a' using the copy\n";
	std::cout << "assignment operator" << std::endl;
    std::cout << "The new instance will be destroyed at the end of this scope\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	a = Fixed( 1234.4321f );

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instance 'a' is printed using the insertion operator\n";
	std::cout << "The insertion operator is overloaded to print the float value\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << "a is " << a << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instance 'b' is printed using insertion operator\n";
	std::cout << "The insertion operator is overloaded to print the float value\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << "b is " << b << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instance 'c' is printed using insertion operator\n";
	std::cout << "The insertion operator is overloaded to print the float value\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << "c is " << c << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instance 'd' is printed using insertion operator\n";
	std::cout << "The insertion operator is overloaded to print the float value\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << "d is " << d << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instance 'a' is printed using the toInt member function\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instance 'b' is printed using the toInt member function\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << "b is " << b.toInt() << " as integer" << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instance 'c' is printed using the toInt member function\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << "c is " << c.toInt() << " as integer" << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instance 'd' is printed using the toInt member function\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instances 'a', 'b', 'c' and 'd' are destroyed\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	return 0;
}
