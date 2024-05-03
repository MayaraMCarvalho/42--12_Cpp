/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:15:36 by macarval          #+#    #+#             */
/*   Updated: 2024/05/02 21:49:05 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main(void)
{
	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "***************** REINTERPRET CAST TEST *****************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creating data instance..." << std::endl;
	std::cout << "Printing pointer address of data instance..." << std::endl;
	std::cout << "Printing data informations..." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	Data *before = new Data(42, "Database");
	std::cout << "Data is in pointer: \t\t" << PURPLE << before << "\n\n";
	std::cout << *before;


	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creating raw pointer using reinterpret_cast (serializing)\n";
	std::cout << "Printing raw pointer address..." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	uintptr_t raw = Serializer::serialize(before);
	std::cout << "Raw pointer is: \t\t" << raw << std::endl;


	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Deserializing raw pointer using reinterpret_cast...\n";
	std::cout << "Confirming that data pointer is still pointing\n";
	std::cout << "at the same address..." << std::endl;
	std::cout << "Printing new data informartion..." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	Data *after = Serializer::deserialize(raw);
	std::cout << "Data is still pointing at: \t" << PURPLE << after << "\n\n";
	std::cout << *after;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Deleting data instance..." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	delete before;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "---------------------- END OF TEST ----------------------\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << RESET << std::endl;

	return 0;
}
