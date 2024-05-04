/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 22:58:26 by macarval          #+#    #+#             */
/*   Updated: 2024/05/03 23:33:40 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void subject( void )
{
	int a = 2;
	int b = 3;

	::swap( a, b );

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);

	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

}

int main( void )
{
	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "********************** SUBJECT TEST *********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	subject();

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "*************************INT TEST************************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	int a = 21;
	int b = 42;

	std::cout << YELLOW;
	std::cout << "a = " << a << ", b = " << b << std::endl;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << "\n\n";

	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << "\n\n";

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "************************FLOAT TEST***********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	float c = 42.42;
	float d = 42.24;

	std::cout << YELLOW;
	std::cout << "c = " << c << ", d = " << d << std::endl;

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << "\n\n";

	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << "\n\n";

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "***********************DOUBLE TEST***********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	double g = 42.42;
	double h = 42.24;

	std::cout << YELLOW;
	std::cout << "g = " << g << ", h = " << h << std::endl;

	::swap(g, h);
	std::cout << "g = " << g << ", h = " << h << "\n\n";

	std::cout << "min(g, h) = " << ::min(g, h) << std::endl;
	std::cout << "max(g, h) = " << ::max(g, h) << "\n\n";

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "************************CHAR TEST************************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	char e = 'a';
	char f = 'b';

	std::cout << YELLOW;
	std::cout << "e = " << e << ", f = " << f << std::endl;

	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << "\n\n";

	std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
	std::cout << "max(e, f) = " << ::max(e, f) << "\n\n";


	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "***********************STRING TEST***********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	std::string i = "ME";
	std::string j = "YOU";

	std::cout << YELLOW;
	std::cout << "i = " << i << ", j = " << j << std::endl;

	::swap(i, j);
	std::cout << "i = " << i << ", j = " << j << "\n\n";

	std::cout << "min(i, j) = " << ::min(i, j) << std::endl;
	std::cout << "max(i, j) = " << ::max(i, j) << "\n\n";
	std::cout << BLUE;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "---------------------- END OF TEST ----------------------\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << RESET << std::endl;

	return 0;
}
