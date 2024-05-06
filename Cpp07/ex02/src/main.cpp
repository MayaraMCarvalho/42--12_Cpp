/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:08:53 by macarval          #+#    #+#             */
/*   Updated: 2024/05/06 19:50:26 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void )
{
	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "********************** ARRAY TESTS **********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "*********************** INT TEST ************************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << YELLOW;

	{
		Array<int> intArray(5);

		for (unsigned int i = 0; i < intArray.size(); i++)
				intArray[i] = static_cast<int>(i);

		for (unsigned int i = 0; i < intArray.size(); i++)
				std::cout << intArray[i] << std::endl;
	}


	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************** STRING TEST **********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << YELLOW;

	{
		Array<std::string> stringArray(5);

		std::stringstream gstream;
		for (unsigned int i = 0; i < stringArray.size(); i++)
		{
			gstream << "string" << i;
			gstream >> stringArray[i];
			gstream.clear();
		}
		for (unsigned int i = 0; i < stringArray.size(); i++)
			std::cout << stringArray[i] << std::endl;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************** FLOAT TEST ***********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << YELLOW;

	{
		Array<float> floatArray(5);

		for (unsigned int i = 0; i < floatArray.size(); i++)
			floatArray[i] = static_cast<float>(i + 0.5f);

		for (unsigned int i = 0; i < floatArray.size(); i++)
			std::cout << floatArray[i] << "f" << std::endl;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************** DOUBLE TEST **********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << YELLOW;

	{
		Array<double> doubleArray(5);

		for (unsigned int i = 0; i < doubleArray.size(); i++)
			doubleArray[i] = static_cast<double>(i + 0.42);

		for (unsigned int i = 0; i < doubleArray.size(); i++)
				std::cout << doubleArray[i] << std::endl;

	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************** CHAR TEST **********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << YELLOW;

	{
		Array<char> charArray(5);

		for (unsigned int i = 0; i < charArray.size(); i++)
				charArray[i] = static_cast<char>(i + 65);

		for (unsigned int i = 0; i < charArray.size(); i++)
				std::cout << charArray[i] << std::endl;


	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "*********************** COPY TEST ***********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << YELLOW;

	{
		Array<int> intArray(5);

		for (unsigned int i = 0; i < intArray.size(); i++)
				intArray[i] = static_cast<int>(i);

		Array<int> intArrayCopy(intArray);
		intArrayCopy[0] = 42;

		for (unsigned int i = 0; i < intArrayCopy.size(); i++)
				std::cout << intArray[i] << " - " << intArrayCopy[i] << std::endl;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************** ASSIGN TEST **********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << YELLOW;

	{
		Array<char> charArray(5);

		for (unsigned int i = 0; i < charArray.size(); i++)
				charArray[i] = static_cast<char>(i + 65);

		Array<char> charArrayAssign = charArray;
		charArrayAssign[0] = 'Z';

		for (unsigned int i = 0; i < charArrayAssign.size(); i++)
				std::cout << charArray[i] << " - " << charArrayAssign[i] << std::endl;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "****************** OUT OF BOUNDS TEST *******************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << YELLOW;

	{
		 try
		{
			Array<float> floatArray(5);
			floatArray[10] = 42.42;
		}
		catch(const std::exception& e)
		{
			std::cout << RED;
			std::cerr << e.what() << std::endl;
			std::cout << RESET;
		}
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "******************* EMPTY ARRAY TEST ********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << YELLOW;

	{
		Array<int> emptyArray;
		try
		{
			emptyArray[0] = 42;
		}
		catch(const std::exception& e)
		{
			std::cout << RED;
			std::cerr << e.what() << std::endl;
			std::cout << RESET;
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
