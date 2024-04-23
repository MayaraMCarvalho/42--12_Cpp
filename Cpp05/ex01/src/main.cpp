/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:07:34 by macarval          #+#    #+#             */
/*   Updated: 2024/04/23 17:00:04 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ( void )
{
	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "*********************** FORM TEST ***********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creation of bureaucrat 'Mark' with grade 2..." << std::endl;
	std::cout << "The bureaucrat 'Mark' is printed with the overloaded\n";
	std::cout << " operator '<<'..." << std::endl;
	std::cout << "The bureaucrat 'Mark' increments his grade..." << std::endl;
	std::cout << "The bureaucrat 'Mark' is printed with the overloaded\n";
	std::cout << " operator '<<'..." << std::endl;
	std::cout << "The bureaucrat 'Mark' tries to increment his grade...\n";
	std::cout << "The bureaucrat 'Mark' can't increment his grade,\n";
	std::cout << "because it's the highest grade..." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	try
	{
		Bureaucrat b1("Mark", 2);
		std::cout << b1;
		b1.upGrade();
		std::cout << b1;
		b1.upGrade();
		std::cout << b1;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creation of bureaucrat 'Brian' with grade 149...\n";
	std::cout << "The bureaucrat 'Brian' is printed with the overloaded\n";
	std::cout << " operator '<<'..." << std::endl;
	std::cout << "The bureaucrat 'Brian' decrements his grade..." << std::endl;
	std::cout << "The bureaucrat 'Brian' is printed with the overloaded\n";
	std::cout << " operator '<<'..." << std::endl;
	std::cout << "The bureaucrat 'Brian' tries to decrement his grade...\n";
	std::cout << "The bureaucrat 'Brian' can't decrement his grade,\n";
	std::cout << "because it's the lowest grade..." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	try
	{
		Bureaucrat b2("Brian", 149);
		std::cout << b2;
		b2.downGrade();
		std::cout << b2;
		b2.downGrade();
		std::cout << b2;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creation of bureaucrat 'Anna' with grade 0..." << std::endl;
	std::cout << "Bureaucrat 'Anna' can't be created, because\n";
	std::cout << "the grade is too high..." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	try
	{
		Bureaucrat b3("Anna", 0);
		std::cout << b3;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creation of bureaucrat 'James' with grade 151...\n";
	std::cout << "Bureaucrat 'James' can't be created, because\n";
	std::cout << "the grade is too low..." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	try
	{
		Bureaucrat b4("James", 151);
		std::cout << b4;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creation of a form 'Default'\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	try
	{
		Form f0;
		std::cout << f0;
	}
		catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creation of a form with grade sign too low.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	try
	{
		Form l1("Low1", 151, 2);
		std::cout << l1;
	}
		catch (std::exception &e)
	{
		std::cout << RED << e.what() << std::endl;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creation of a form with grade execute too low.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	try
	{
		Form l2("Low2", 25, 151);
		std::cout << l2;
	}
		catch (std::exception &e)
	{
		std::cout << RED << e.what() << std::endl;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creation of a form with grade sign and execute too low.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	try
	{
		Form l3("Low3", 151, 160);
		std::cout << l3;
	}
		catch (std::exception &e)
	{
		std::cout << RED << e.what() << std::endl;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creation of a form with grade sign too high.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	try
	{
		Form h1("high1", 0, 2);
		std::cout << h1;
	}
		catch (std::exception &e)
	{
		std::cout << RED << e.what() << std::endl;
	}


	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creation of a form with grade execute too high.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	try
	{
		Form h2("high2", 15, -8);
		std::cout << h2;
	}
		catch (std::exception &e)
	{
		std::cout << RED << e.what() << std::endl;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creation of a form with grade sign and execute too high.\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	try
	{
		Form h3("high3", 0, 0);
		std::cout << h3;
	}
		catch (std::exception &e)
	{
		std::cout << RED << e.what() << std::endl;
	}


	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creation of form 'Form1' with grade to sign 2\n";
	std::cout << "and grade to execute 2..." << std::endl;
	std::cout << "Creation of Bureaucrat 'Jane' with grade 3...\n";
	std::cout << "Bureaucrat 'Jane' tries to sign form 'Form1'...\n";
	std::cout << "Bureaucrat 'Jane' can't sign form 'Form1',\n";
	std::cout << "because his grade is too low..." << std::endl;
	std::cout << "Bureaucrat 'Jane' increments his grade..." << std::endl;
	std::cout << "Bureaucrat 'Jane' signs form 'Form1'..." << std::endl;
	std::cout << "Bureaucrat 'Jane' can sign form 'Form1',\n";
	std::cout << "because his grade is high enough..." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	try
	{
		Form f1("Form1", 2, 2);
		std::cout << f1;
		Bureaucrat b5("Jane", 3);
		std::cout << b5;
		b5.signForm(f1);
		std::cout << f1;
		b5.upGrade();
		std::cout << b5;
		b5.signForm(f1);
		std::cout << f1;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << std::endl;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creation of form 'Form2' with grade to sign 100\n";
	std::cout << "and grade to execute 100..." << std::endl;
	std::cout << "Creation of Bureaucrat 'Peter' with grade 100...\n";
	std::cout << "Bureaucrat 'Peter' signs form 'Form2'..." << std::endl;
	std::cout << "Bureaucrat 'Peter' can sign form 'Form2',\n";
	std::cout << "because his grade is high enough..." << std::endl;
	std::cout << "Bureaucrat 'Peter' decrements his grade..." << std::endl;
	std::cout << "Bureaucrat 'Peter' tries to sign form 'Form2'...\n";
	std::cout << "Bureaucrat 'Peter' can't sign form 'Form2',\n";
	std::cout << "because his grade is too low..." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	try
	{
		Form f2("Form2", 100, 100);
		std::cout << f2;

		Bureaucrat b6("Peter", 100);
		std::cout << b6;

		b6.signForm(f2);
		std::cout << f2;

		b6.downGrade();
		std::cout << b6;
		b6.signForm(f2);
		std::cout << f2;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << std::endl;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "********************** END OF TEST **********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	return 0;
}
