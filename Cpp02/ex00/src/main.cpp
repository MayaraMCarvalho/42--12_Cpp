/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:41:11 by macarval          #+#    #+#             */
/*   Updated: 2024/03/29 21:08:03 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static void test ( void )
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}

int main( void )
{
	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << "********************* SUBJECT TEST **********************\n";
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The subject test is being executed..." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY << std::endl;

	test();

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
	std::cout << "The instance 'b' is created using the copy constructor\n";
	std::cout << "The instance 'b' is a copy of 'a'" << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	Fixed b( a );

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instance 'c' is created using the default constructor\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	Fixed c;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instance 'c' is assigned to 'b' using the copy";
	std::cout << "\nassignment operator" << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	c = b;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instance 'a' is printed using\n";
	std::cout << "the getRawBits member function\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << a.getRawBits() << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instance 'b' is printed using\n";
	std::cout << "the getRawBits member function\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << b.getRawBits() << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instance 'c' is printed using\n";
	std::cout << "the getRawBits member function\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	std::cout << c.getRawBits() << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The instances 'a', 'b' and 'c' are destroyed" << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;

	return 0;
}
