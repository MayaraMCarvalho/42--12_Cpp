/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:03:26 by macarval          #+#    #+#             */
/*   Updated: 2024/04/25 17:14:27 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Constructor & Destructor ===================================================
ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
								: AForm("Shrubbery Creation", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &copy )
																: AForm(copy)
{
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
}

// Operators ==============================================================
ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm const &other )
{
	if (this != &other)
	{
		this->_target = other._target;
	}
	return *this;
}

// Methods ================================================================
static void	drawTrees(std::string fileName)
	throw(std::ios_base::failure)
{
	std::ofstream file(fileName.c_str(), std::ios_base::app);
	if (!file.is_open() || file.fail())
		throw(std::ios_base::failure("Error creating the file"));
	file << "                  ¶¶¶¶¶¶¶¶                                             ¶¶¶¶¶¶¶¶" << std::endl;
	file << "               ¶¶¶¶¶¶¶¶¶¶¶¶¶¶                                       ¶¶¶¶¶¶¶¶¶¶¶¶¶¶" << std::endl;
	file << "                 ¶¶¶¶¶¶¶¶¶¶    ¶¶¶¶¶¶¶¶¶                              ¶¶¶¶¶¶¶¶¶¶    ¶¶¶¶¶¶¶¶¶" << std::endl;
	file << "                 ¶¶¶¶¶¶¶¶¶  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶                            ¶¶¶¶¶¶¶¶¶  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶" << std::endl;
	file << "       ¶¶¶¶¶¶¶    ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶                ¶¶¶¶¶¶¶    ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶" << std::endl;
	file << "    ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶            ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶" << std::endl;
	file << "  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶          ¶¶¶         ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶          ¶¶¶" << std::endl;
	file << "¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶              ¶¶      ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶              ¶¶" << std::endl;
	file << "¶¶¶¶¶¶¶¶¶      ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶   ¶      ¶¶¶¶¶¶¶¶¶      ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶   ¶" << std::endl;
	file << "  ¶¶¶¶     ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶         ¶¶¶¶    ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶" << std::endl;
	file << "   ¶¶  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶  ¶¶¶¶¶       ¶¶¶¶¶¶¶¶¶¶¶¶¶       ¶¶  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶  ¶¶¶¶¶       ¶¶¶¶¶¶¶¶¶¶¶¶¶" << std::endl;
	file << "   ¶  ¶¶¶¶¶¶¶¶¶¶¶        ¶¶¶¶¶         ¶¶¶¶¶¶¶¶¶¶       ¶  ¶¶¶¶¶¶¶¶¶¶¶        ¶¶¶¶¶         ¶¶¶¶¶¶¶¶¶¶" << std::endl;
	file << "      ¶¶¶¶¶¶¶¶¶          ¶¶¶¶¶¶         ¶¶¶¶¶¶¶¶¶          ¶¶¶¶¶¶¶¶¶          ¶¶¶¶¶¶         ¶¶¶¶¶¶¶¶¶" << std::endl;
	file << "      ¶¶¶¶¶¶¶¶            ¶¶¶¶¶          ¶¶¶¶¶¶¶¶          ¶¶¶¶¶¶¶¶            ¶¶¶¶¶          ¶¶¶¶¶¶¶¶" << std::endl;
	file << "      ¶¶¶¶¶¶              ¶¶¶¶¶¶          ¶¶¶¶¶¶¶          ¶¶¶¶¶¶              ¶¶¶¶¶¶          ¶¶¶¶¶¶¶" << std::endl;
	file << "      ¶¶¶¶¶                ¶¶¶¶¶¶          ¶¶¶¶¶¶          ¶¶¶¶¶                ¶¶¶¶¶¶          ¶¶¶¶¶¶" << std::endl;
	file << "       ¶¶¶¶                 ¶¶¶¶¶¶          ¶¶¶¶¶           ¶¶¶¶                 ¶¶¶¶¶¶          ¶¶¶¶¶" << std::endl;
	file << "       ¶¶                  ¶¶¶¶¶¶¶         ¶¶¶¶               ¶¶                  ¶¶¶¶¶¶¶         ¶¶¶¶" << std::endl;
	file << "       ¶¶                   ¶¶¶¶¶¶¶         ¶¶               ¶¶                   ¶¶¶¶¶¶¶         ¶¶" << std::endl;
	file << "       ¶                    ¶¶¶¶¶¶¶         ¶                ¶                    ¶¶¶¶¶¶¶         ¶" << std::endl;
	file << "                             ¶¶¶¶¶¶                                                ¶¶¶¶¶¶" << std::endl;
	file << "                             ¶¶¶¶¶¶¶                                               ¶¶¶¶¶¶¶" << std::endl;
	file << "                             ¶¶¶¶¶¶¶                                               ¶¶¶¶¶¶¶" << std::endl;
	file << "                           ¶¶¶¶¶¶¶¶¶¶                                             ¶¶¶¶¶¶¶¶¶¶" << std::endl;
	file << "                        ¶¶¶111¶¶¶¶¶¶¶                                          ¶¶¶111¶¶¶¶¶¶¶" << std::endl;
	file << "                 ¶¶¶¶¶¶111111111¶¶¶¶¶¶¶                                 ¶¶¶¶¶¶111111111¶¶¶¶¶¶¶" << std::endl;
	file << "               ¶¶1111111111111111¶¶¶¶¶¶¶                              ¶¶1111111111111111¶¶¶¶¶¶¶" << std::endl;
	file << "     ¶¶¶¶¶1111111111111¶1111¶¶¶¶¶¶¶1111¶¶¶                 ¶¶¶¶¶1111111111111¶1111¶¶¶¶¶¶¶1111¶¶¶" << std::endl;
	file << "  ¶¶¶¶¶¶1111111111111111111¶¶11¶¶¶¶¶¶¶11¶¶¶¶            ¶¶¶¶¶¶1111111111111111111¶¶11¶¶¶¶¶¶¶11¶¶¶¶" << std::endl;
	file << "¶¶1111111111111111111111110n¶¶¶¶¶¶¶¶¶¶¶¶¶¶            ¶¶1111111111111111111111110n¶¶¶¶¶¶¶¶¶¶¶¶¶¶" << std::endl;
	file << "11111111111111111111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶            11111111111111111111111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶" << std::endl;

	file.close();
	std::cout << YELLOW << fileName << "🌳 created successfully!!\n\n";
	std::cout << RESET;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
	throw (FormNotSignedException, GradeTooLowException)
{
	AForm::execute(executor);
	drawTrees(_target + "_shrubbery");
}
