/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:15:48 by macarval          #+#    #+#             */
/*   Updated: 2024/05/04 15:28:10 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "************************* TESTS *************************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "*********************** INT TEST ************************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	{
		int arr[] = {1, 2, 3, 4, 5};
		size_t	size = sizeof(arr) / sizeof(arr[0]);

		::iter(arr, size, &colors<int>);
	}


	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************** STRING TEST **********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	{
		std::string arr[] = {"one", "two", "three", "four", "five"};
		size_t	size = sizeof(arr) / sizeof(arr[0]);

		::iter(arr, size, &colors<std::string>);
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************** FLOAT TEST ***********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	{
		float arr[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
		size_t	size = sizeof(arr) / sizeof(arr[0]);

		::iter(arr, size, &colors<float>);
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************** DOUBLE TEST **********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	{
		double arr[] = {1.11, 2.22, 3.33, 4.44, 5.55};
		size_t	size = sizeof(arr) / sizeof(arr[0]);

		::iter(arr, size, &colors<double>);
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************** CHAR TEST **********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	{
		char arr[] = {'a', 'b', 'c', 'd', 'e'};
		size_t	size = sizeof(arr) / sizeof(arr[0]);

		::iter(arr, size, &colors<char>);
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
