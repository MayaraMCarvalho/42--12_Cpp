/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:41:11 by macarval          #+#    #+#             */
/*   Updated: 2024/04/04 15:39:11 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static void	test( Point const a, Point const b, Point const c, Point const point )
{
	std::cout << "We have the triangle formed by the following vertices:";
	std::cout << YELLOW;
	std::cout << "\na (" << a.getX() << ", " << a.getY();
	std::cout << ")\nb (" << b.getX() << ", " << b.getY();
	std::cout << ")\nc (" << c.getX() << ", " << c.getY() << ")";
	std::cout << PURPLE;
	std::cout << "\n\nIs the point (" << point.getX() << ", " << point.getY();
	std::cout << ") inside the triangle? " << std::endl;
	std::cout << (bsp( a, b, c, point ) ? (GREEN + "Yes") : (RED + "No"));
}

int main( void )
{
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";
	std::cout << "********************** TESTS ***********************\n";
	std::cout << "----------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "The tests is being executed..." << std::endl;
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";
	std::cout << RESET << std::endl;

	// Test #1
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************* Test #1 *********************\n";
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Test with the point outside the triangle" << std::endl;
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";

	Point a1(8.4, 5);
	Point b1(2.8, 12);
	Point c1(0.2, 1.3);
	Point point1(3.2, 1.7);

	test( a1, b1, c1, point1 );

	std::cout << BLUE << std::endl;
	std::cout << "----------------------------------------------------\n";
	std::cout << RESET << std::endl;

	// Test #2
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************* Test #2 *********************\n";
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Test with the point inside the triangle" << std::endl;
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";

	Point a2(4.5, 0);
	Point b2(0, 8.2);
	Point c2;
	Point point2(2.1, 3.2);

	test( a2, b2, c2, point2 );

	std::cout << BLUE << std::endl;
	std::cout << "----------------------------------------------------\n";
	std::cout << GRAY << std::endl;

	// Test #3
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************* Test #3 *********************\n";
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Test with the point on one of the vertices" << std::endl;
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";

	Point a3(8.7, 5);
	Point b3(2.8, 12);
	Point c3(0.2, 1.4);
	Point point3(0.2, 1.4);

	test( a3, b3, c3, point3 );

	std::cout << BLUE << std::endl;
	std::cout << "----------------------------------------------------\n";
	std::cout << GRAY << std::endl;

	// Test #4
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************* Test #4 *********************\n";
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Test with negative values and\n";
	std::cout << "the point outside the triangle" << std::endl;
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";

	Point a4(8.1, -5);
	Point b4(-2.8, 12);
	Point c4(0.2, 1.4);
	Point point4(3.2, -1.7);

	test( a4, b4, c4, point4 );

	std::cout << BLUE << std::endl;
	std::cout << "----------------------------------------------------\n";
	std::cout << RESET << std::endl;

	// Test #5
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************* Test #5 *********************\n";
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Test with equal vertices" << std::endl;
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";

	Point a5(8.7, 5);
	Point b5(8.7, 5);
	Point c5(0.2, 1.4);
	Point point5(3.2, -1.7);

	test( a5, b5, c5, point5 );

	std::cout << BLUE << std::endl;
	std::cout << "----------------------------------------------------\n";
	std::cout << RESET << std::endl;

	// Test #6
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************* Test #6 *********************\n";
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Test with negative values and\n";
	std::cout << "the point inside the triangle" << std::endl;
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";

	Point a6(8.1, -5);
	Point b6(-2.8, 12);
	Point c6(0.2, 1.4);
	Point point6(4.5, -1.7);

	test( a6, b6, c6, point6 );

	std::cout << BLUE << std::endl;
	std::cout << "----------------------------------------------------\n";
	std::cout << RESET << std::endl;

	// Test #7
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************* Test #7 *********************\n";
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Test with a point on one of the lines of the triangle\n";
	std::cout << BLUE;
	std::cout << "----------------------------------------------------\n";

	Point a7;
	Point b7(2, 0);
	Point c7(0, 2);
	Point point7(1, 1);

	test( a7, b7, c7, point7 );

	std::cout << BLUE << std::endl;
	std::cout << "----------------------------------------------------\n";
	std::cout << RESET << std::endl;

	return 0;
}
