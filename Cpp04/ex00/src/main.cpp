/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:56:43 by macarval          #+#    #+#             */
/*   Updated: 2024/04/10 19:13:27 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

static void subject( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

}

int	main ( void )
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
	std::cout << "description!!!\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------";
	std::cout << GRAY << std::endl;


	std::cout << RESET;

	return 0;
}
