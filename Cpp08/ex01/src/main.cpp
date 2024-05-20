/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:45:42 by macarval          #+#    #+#             */
/*   Updated: 2024/05/17 12:09:13 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	suject( void )
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

}

int main( void )
{

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "********************** SPAN TESTS ***********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************* SUBJECT TEST **********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	suject();

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************* DEFAULT TESTS *********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Create a Span with 5 spaces" << std::endl;
	std::cout << "Add 10, 23, 3, 18 and 20 to Span" << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	{
		Span sp = Span(5);
		sp.addNumber(10);
		sp.addNumber(23);
		sp.addNumber(3);
		sp.addNumber(18);
		sp.addNumber(20);

		std::cout << GREEN;
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		std::cout << RESET;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "**************** NEGATIVE NUMBERS TESTS *****************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Create a Span with 5 spaces" << std::endl;
	std::cout << "Add 10, 23, -3, 18 and -20 to Span" << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	{
		Span sp = Span(5);
		sp.addNumber(10);
		sp.addNumber(23);
		sp.addNumber(-3);
		sp.addNumber(18);
		sp.addNumber(-20);

		std::cout << GREEN;
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		std::cout << RESET;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "****************** 10000 NUMBERS TESTS ******************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Create a Span with 10000 spaces" << std::endl;
	std::cout << "Add 10000 random numbers to Span" << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	{
		Span sp = Span(10000);
		std::srand(time(NULL));
		for (int i = 0; i < 10000; i++)
			sp.addNumber(std::rand());

		std::cout << GREEN;
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		std::cout << RESET;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "****************** 100000 NUMBERS TESTS *****************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Create a Span with 100000 spaces" << std::endl;
	std::cout << "Add 100000 random numbers to Span using addMany\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	{
		Span sp = Span(100000);
		std::vector<int> vec;
		std::srand(time(NULL));
		for (int i = 0; i < 100000; i++)
			sp.addNumber(std::rand());
		sp.addMany(vec.begin(), vec.end());

		std::cout << GREEN;
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		std::cout << RESET;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "******************** EXCEPTION TESTS ********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Create a Span with 5 spaces" << std::endl;
	std::cout << "Add 10, 23, 3, 18 and 20 to Span" << std::endl;
	std::cout << "Try to add 1 more number to Span" << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	{
		Span sp = Span(5);
		sp.addNumber(10);
		sp.addNumber(23);
		sp.addNumber(3);
		sp.addNumber(18);
		sp.addNumber(20);

		try
		{
			sp.addNumber(1);
		}
		catch(const std::exception& e)
		{
			std::cout << RED;
			std::cerr << e.what() << std::endl;
			std::cout << RESET << std::endl;
		}
	}

	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Create a Span with 5 spaces" << std::endl;
	std::cout << "Try to find shortest and longest span" << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	{
		Span sp = Span(5);

		try
		{
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << RED;
			std::cerr << e.what() << std::endl;
			std::cout << RESET << std::endl;
		}
	}

	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Create a Span with 5 spaces" << std::endl;
	std::cout << "Add only 1 number to Span" << std::endl;
	std::cout << "Try to find shortest and longest span" << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	{
		Span sp = Span(5);

		sp.addNumber(10);
		try
		{
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << RED;
			std::cerr << e.what() << std::endl;
			std::cout << RESET << std::endl;
		}
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "---------------------- END OF TEST ----------------------\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << RESET << std::endl;

	return 0;
}
