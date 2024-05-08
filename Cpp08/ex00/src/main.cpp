/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 09:43:48 by macarval          #+#    #+#             */
/*   Updated: 2024/05/08 16:07:48 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void )
{
	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "******************** EASYFIND TESTS *********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************* VECTOR TEST ***********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Find 3, 10, 20, 23, 17 and 100 in vector\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << YELLOW;

	try
	{
		std::vector<int> vec;

		vec.push_back(10);
		vec.push_back(23);
		vec.push_back(3);
		vec.push_back(17);
		vec.push_back(20);

		std::cout << GREEN;
		std::cout << "Vetor elements:" << std::endl;
		for (size_t i = 0; i < vec.size(); ++i)
			std::cout << vec[i] << " ";
		std::cout << YELLOW << "\n\n";

		int arr[] = {3, 10, 20, 23, 17, 100, 17};
		for (int i = 0; i < 7; ++i)
			std::cout << *easyfind(vec, arr[i]) << " found in vetor" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED;
		std::cout << "Error: Parameter not found!!!" << std::endl;
		std::cout << RESET;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************* LIST TEST ***********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Find 3, 10, 20, 23, 17 and 100 in list\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << YELLOW;

	try
	{
		std::list<int> lst;

		lst.push_back(10);
		lst.push_back(23);
		lst.push_back(3);
		lst.push_back(17);
		lst.push_back(20);

		std::cout << GREEN;
		std::list<int> copy(lst);
		std::cout << "List elements:" << std::endl;
		while (!copy.empty())
		{
			std::cout << copy.front();
			copy.pop_front();
			if (!copy.empty())
				std::cout << ", ";
		}
		std::cout << YELLOW << "\n\n";

		int arr[] = {3, 10, 20, 23, 17, 100, 17};
		for (int i = 0; i < 7; ++i)
			std::cout <<  *easyfind(lst, arr[i]) << " found in list" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED;
		std::cout << "Error: Parameter not found!!!" << std::endl;
		std::cout << RESET;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************* DEQUE TEST ***********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Find 3, 10, 20, 23, 17 and 100 in deque\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << YELLOW;

	try
	{
		std::deque<int> deq;

		deq.push_back(10);
		deq.push_back(23);
		deq.push_back(3);
		deq.push_back(17);
		deq.push_back(20);

		std::cout << GREEN;
		std::cout << "Deque elements:" << std::endl;
		for (size_t i = 0; i < deq.size(); ++i)
			std::cout << deq[i] << " ";
		std::cout << YELLOW << "\n\n";

		int arr[] = {3, 10, 20, 23, 17, 100, 17};
		for (int i = 0; i < 7; ++i)
			std::cout <<  *easyfind(deq, arr[i]) << " found in deque" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED;
		std::cout << "Error: Parameter not found!!!" << std::endl;
		std::cout << RESET;
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
