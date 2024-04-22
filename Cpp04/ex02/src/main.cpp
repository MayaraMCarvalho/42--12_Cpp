/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:56:43 by macarval          #+#    #+#             */
/*   Updated: 2024/04/22 09:31:46 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main ( void )
{
	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << "********************* ABSTRACT TEST *********************\n";
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Create a Animal array with 10 elements." << std::endl;
    std::cout << "Fill the Animal array with 10 Animals." << std::endl;
    std::cout << "Half of them are Cats and the other half are Dogs.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	const AAnimal *animals[10];

	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creating a deep copy of one of the Cats in the array,\n";
	std::cout << "using a new scope." << std::endl;
	std::cout << "Cat created with the copy constructor." << std::endl;
	std::cout << "Copied Cat will make a sound and print its idea.\n";
	std::cout << "Copied Cat will be destroyed with the end of the scope.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	if (animals[4]->getType() == "Cat")
	{
		Cat copyCat((Cat&)*animals[4]);

		std::cout << YELLOW << "\nSound: ";
		copyCat.makeSound();

		std::cout << PURPLE << std::endl;
		std::cout << "Idea: " << copyCat.getIdea(42) << "\n\n";
		std::cout << RESET;
	}
	else
		std::cout << "Error: animals[4] is not of type Cat." << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Checking if the original Cat is still alive." << std::endl;
	std::cout << "Printing the Cat's type, sound and idea." << std::endl;
	std::cout << "Print Cat's idea means that the Cat's brain was\n";
	std::cout << "successfully deep copied." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	std::cout << PURPLE << "Type: " << animals[4]->getType() << std::endl;

	std::cout << YELLOW << "\nSound: ";
	animals[4]->makeSound();

	std::cout << PURPLE << std::endl;
	std::cout << "Idea: " << ((Cat*)animals[4])->getIdea(42) << std::endl;
	std::cout << RESET;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creating a deep copy of one of the Dogs in the array,\n";
	std::cout << "using a new scope." << std::endl;
    std::cout << "Dog created with the copy constructor." << std::endl;
    std::cout << "Copied Dog will make a sound and print its idea.\n";
    std::cout << "Copied Dog will be destroyed with the end of the scope.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	if (animals[7]->getType() == "Dog")
	{
		Dog copyDog((Dog&)*animals[7]);

		std::cout << YELLOW << "\nSound: ";
		copyDog.makeSound();

		std::cout << PURPLE << std::endl;
		std::cout << "Idea: " << copyDog.getIdea(42) << "\n\n";
		std::cout << RESET;
	}
	else
		std::cout << "Error: animals[7] is not of type Dog." << std::endl;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Checking if the original Dog is still alive." << std::endl;
    std::cout << "Printing the Dog's type, sound and idea." << std::endl;
    std::cout << "Print Dog's idea means that the Dog's brain was\n";
	std::cout << "successfully deep copied." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	std::cout << PURPLE << "Type: " << animals[7]->getType() << std::endl;

	std::cout << YELLOW << "\nSound: ";
	animals[7]->makeSound();

	std::cout << PURPLE << std::endl;
	std::cout << "Idea: " << ((Dog*)animals[7])->getIdea(42) << std::endl;
	std::cout << RESET;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Deleting the Animal array.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	for (int i = 0; i < 10; ++i)
		delete animals[i];

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creating a new Cat and a new Dog.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	Cat snow;
	Dog billy;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creating a deep copy of the Cat and the Dog, using the\n";
	std::cout << "assignation operator." << std::endl;
	std::cout << "The copies are created in a new scope." << std::endl;
	std::cout << "Copied Cat and Dog will make a sound and print their idea.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	{
		Cat cat2 = snow;
		Dog dog2 = billy;

		std::cout << std::endl;
		snow.makeSound();
		std::cout << PURPLE << "Idea: " << snow.getIdea(10) << std::endl;

		std::cout << std::endl;
		billy.makeSound();
		std::cout << PURPLE << "Idea: " << billy.getIdea(10) << std::endl;
		std::cout << std::endl;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Checking if the original Cat and Dog are still alive.\n";
    std::cout << "Printing the Cat's and Dog's sound and idea." << std::endl;
    std::cout << "Print Cat's and Dog's idea means that the Cat's and Dog's\n";
	std::cout << "brain was successfully deep copied." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;

	std::cout << YELLOW << "Sound: ";
	snow.makeSound();

	std::cout << PURPLE << "Idea: " << snow.getIdea(10) << std::endl;

	std::cout << YELLOW << "\nSound: ";
	billy.makeSound();

	std::cout << PURPLE << "Idea: " << billy.getIdea(10) << std::endl;
	std::cout << RESET;

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Cat and Dog are destroyed with the end of the program.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << BLUE;
	std::cout << RESET;

	return 0;
}
