/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:35:36 by macarval          #+#    #+#             */
/*   Updated: 2024/04/29 21:04:41 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Tests.hpp"

// Methods ================================================================
void Tests::bureaucratTest( void ) const
{
	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "******************** BUREAUCRAT TEST ********************\n";
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
		Bureaucrat bureaucrat("Mark", 2);
		std::cout << bureaucrat;
		bureaucrat.upGrade();
		std::cout << bureaucrat;
		bureaucrat.upGrade();
		std::cout << bureaucrat;
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
}

void Tests::shrubberyTest( void ) const
{
	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "********************* SHRUBBERY TEST ********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creation of a ShrubberyCreationForm Test\n";
	std::cout << "---------------------------------------------------------\n";
	std::cout << "Creation of ShrubberyCreationForm 'home' with grade to\n";
	std::cout << "sign 145 and grade to execute 137..." << std::endl;
	std::cout << "Creation of bureaucrat 'James' with grade 138...\n";
	std::cout << "The bureaucrat 'James' tries to execute the form 'home'...\n";
	std::cout << "The bureaucrat 'James' can't execute the form 'home',\n";
	std::cout << "because it's not signed..." << std::endl;
	std::cout << "The bureaucrat 'James' signs the form 'home'...\n";
	std::cout << "The bureaucrat 'James' tries to execute the form 'home'...\n";
	std::cout << "The bureaucrat 'James' can't execute the form 'home',\n";
	std::cout << "because his grade is too low..." << std::endl;
	std::cout << "The bureaucrat 'James' increments his grade..." << std::endl;
	std::cout << "The bureaucrat 'James' executes the form 'home' creating\n";
	std::cout << "a file 'home_shrubbery'..." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	try
	{
		ShrubberyCreationForm form("home");
		std::cout << form;

		Bureaucrat bureaucrat("James", 138);
		std::cout << bureaucrat;

		bureaucrat.executeForm(form);

		bureaucrat.signForm(form);
		std::cout << form;

		bureaucrat.executeForm(form);

		bureaucrat.upGrade();
		std::cout << bureaucrat;

		bureaucrat.executeForm(form);
	}
		catch (std::exception &e)
	{
		std::cout << RED << std::endl;
		std::cout << e.what() << RESET << std::endl;
	}
}

void Tests::robotomyTest( void ) const
{
	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "********************* ROBOTOMY TEST *********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Creation of a RobotomyRequestForm Test\n";
	std::cout << "---------------------------------------------------------\n";
	std::cout << "Creation of RobotomyRequestForm 'R2-D2' with grade to\n";
	std::cout << "sign 72 and grade to execute 45..." << std::endl;
	std::cout << "Creation of bureaucrat 'Luke' with grade 46...\n";
	std::cout << "The bureaucrat 'Luke' signs the form 'R2-D2'...\n";
	std::cout << "The bureaucrat 'Luke' tries to execute the form 'R2-D2',\n";
	std::cout << "The bureaucrat 'Luke' can't execute the form 'R2-D2',\n";
	std::cout << "because his grade is too low..." << std::endl;
	std::cout << "The bureaucrat 'Luke' increments his grade..." << std::endl;
	std::cout << "The bureaucrat 'Luke' executes the form 'R2-D2'\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	try
	{
		RobotomyRequestForm form("R2-D2");
		std::cout << form;

		Bureaucrat bureaucrat("Luke", 46);
		std::cout << bureaucrat;

		bureaucrat.signForm(form);
		std::cout << form;

		bureaucrat.executeForm(form);

		bureaucrat.upGrade();
		std::cout << bureaucrat;

		bureaucrat.executeForm(form);
	}
		catch (std::exception &e)
	{
		std::cout << RED << std::endl;
		std::cout << e.what() << RESET << std::endl;
	}
}

void Tests::presidentialTest( void ) const
{
	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "*************** PRESIDENTIAL PARDON TEST ****************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "---------------------------------------------------------\n";
	std::cout << "PresidentialPardonForm Test" << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << "Creation of bureaucrat 'Leila' with grade 26...\n";
	std::cout << "Creation of PresidentialPardonForm 'Billy' with grade to\n";
	std::cout << "sign 25 and grade to execute 5..." << std::endl;
	std::cout << "The bureaucrat 'Leila' tries to execute the form 'Billy'...\n";
	std::cout << "The bureaucrat 'Leila' can't execute the form 'Billy',\n";
	std::cout << "because it's not signed..." << std::endl;
	std::cout << "The bureaucrat 'Leila' tries to sign the form 'Billy'...\n";
	std::cout << "The bureaucrat 'Leila' can't sign the form 'Billy',\n";
	std::cout << "because his grade is too low..." << std::endl;
	std::cout << "The bureaucrat 'Leila' increments his grade...\n";
	std::cout << "The bureaucrat 'Leila' signs the form 'Billy'...\n";
	std::cout << "The bureaucrat 'Leila' tries to execute the form 'Billy'...\n";
	std::cout << "The bureaucrat 'Leila' can't execute the form 'Billy',\n";
	std::cout << "because his grade is too low..." << std::endl;
	std::cout << "The bureaucrat 'Leila' increments his grade 20 times...\n";
	std::cout << "The bureaucrat 'Leila' executes the form 'Billy'...\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	try
	{
		Bureaucrat bureaucrat("Leila", 26);
		std::cout << bureaucrat;

		PresidentialPardonForm form("Billy");
		std::cout << form;

		bureaucrat.executeForm(form);
		bureaucrat.signForm(form);
		std::cout << form;

		bureaucrat.upGrade();
		std::cout << bureaucrat;

		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
		for (int i = 0; i < 20; i++)
			bureaucrat.upGrade();

		std::cout << bureaucrat;
		bureaucrat.executeForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;

	}
}

void Tests::internTest( void ) const
{
	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "********************** INTERN TEST **********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "---------------------------------------------------------\n";
	std::cout << "Subject Test" << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << "Creation of bureaucrat 'Leila' with grade 26...\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";

	try
	{
		Intern someRandomIntern;
		Form* rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf;

		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;

	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << GRAY;
	std::cout << "******************** BUREAUCRAT TEST ********************\n";
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "ShrubberyCreationForm Test" << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << "Creation of bureaucrat 'Lucas' with grade 137...\n";
	std::cout << "Creation of a Intern..." << std::endl;
	std::cout << "Creation of a Form..." << std::endl;
	std::cout << "The Intern creates a form type 'shrubbery creation' with\n";
	std::cout << "target 'Amazon'..." << std::endl;
	std::cout << "Lucas signs the form 'Amazon'..." << std::endl;
	std::cout << "Lucas executes the form 'Amazon'..." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	try
	{
		Bureaucrat bureaucrat("Lucas", 137);
		std::cout << bureaucrat;
		Intern intern;
		Form *form;
		form = intern.makeForm("shrubbery creation", "Amazon");
		std::cout << *form;
		bureaucrat.signForm(*form);
		std::cout << *form;
		bureaucrat.executeForm(*form);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "PresidentialPardonForm Test" << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << "Creation of bureaucrat 'Leila' with grade 2..." << std::endl;
	std::cout << "Creation of a Intern..." << std::endl;
	std::cout << "Creation of a Form..." << std::endl;
	std::cout << "The Intern creates a form type 'presidential pardon' with\n";
	std::cout << "target 'Billy'..." << std::endl;
	std::cout << "Leila signs the form 'Billy'..." << std::endl;
	std::cout << "Leila executes the form 'Billy'..." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	try
	{
		Bureaucrat bureaucrat("Leila", 2);
		std::cout << bureaucrat;
		Intern intern;
		Form *form;
		form = intern.makeForm("presidential pardon", "Billy");
		std::cout << *form;
		bureaucrat.signForm(*form);
		std::cout << *form;
		bureaucrat.executeForm(*form);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;

	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "RobotomyRequestForm Test" << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << "Creation of bureaucrat 'Thais' with grade 40...\n";
	std::cout << "Creation of a Intern..." << std::endl;
	std::cout << "Creation of a Form..." << std::endl;
	std::cout << "The Intern creates a form type 'robotomy request' with\n";
	std::cout << "target 'Bender'..." << std::endl;
	std::cout << "Thais signs the form 'Bender'..." << std::endl;
	std::cout << "Thais executes the form 'Bender'..." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	try
	{
		Bureaucrat bureaucrat("Thais", 40);
		std::cout << bureaucrat;
		Intern intern;
		Form *form;
		form = intern.makeForm("robotomy request", "Bender");
		std::cout << *form;
		bureaucrat.signForm(*form);
		std::cout << *form;
		bureaucrat.executeForm(*form);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << BLUE << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << CYAN;
	std::cout << "Exception Test" << std::endl;
	std::cout << "---------------------------------------------------------\n";
	std::cout << "Creation of a Intern..." << std::endl;
	std::cout << "Creation of a Form..." << std::endl;
	std::cout << "The Intern creates a form type 'default' with target\n";
	std::cout << "'default'..." << std::endl;
	std::cout << "The Intern can't create the form, because the form type\n";
	std::cout << "doesn't exist..." << std::endl;
	std::cout << BLUE;
	std::cout << "---------------------------------------------------------\n";
	try
	{
		Intern intern;
		Form *form;
		form = intern.makeForm("default", "default");
		std::cout << *form;
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << YELLOW;
		std::cout << e.what() << std::endl;
		std::cout << RESET;
	}
}
