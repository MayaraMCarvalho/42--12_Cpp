/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:56:43 by macarval          #+#    #+#             */
/*   Updated: 2024/04/18 10:25:17 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main ( void )
{
	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << "********************* SUBJECT TEST **********************\n";
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Instantiate Animal class, atributing to a Animal pointer.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	const Animal* meta = new Animal();

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Instantiate Dog class, atributing to a Animal pointer.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	const Animal* j = new Dog();

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Instantiate Cat class, atributing to a Animal pointer.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	const Animal* i = new Cat();

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Get the type of the Animal atributed to the Dog pointer.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	std::cout << j->getType() << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Get the type of the Animal atributed to the Cat pointer.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	std::cout << i->getType() << std::endl;


	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Make the Cat sound.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	i->makeSound();

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Make the Dog sound.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	j->makeSound();

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Make the Animal sound.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	meta->makeSound();

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << "****************** WRONG ANIMALS TESTS ******************\n";
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Instantiate WrongAnimal class, atributing to a\nWrongAnimal";
	std::cout << " pointer.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	const WrongAnimal* wrongAnimal = new WrongAnimal();


	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Instantiate WrongCat class, atributing to a\nWrongAnimal";
	std::cout << " pointer.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Get the type of the WrongAnimal atributed to the\nWrongCat";
	std::cout << " pointer.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	std::cout << wrongCat->getType() << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Make the WrongCat sound.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	wrongCat->makeSound();

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Make the WrongAnimal sound.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	wrongAnimal->makeSound();

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Delete all the pointers.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	delete meta;
	delete j;
	delete i;
	delete wrongAnimal;
	delete wrongCat;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "********************* END OF TESTS **********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	std::cout << RESET;

	return 0;
}
