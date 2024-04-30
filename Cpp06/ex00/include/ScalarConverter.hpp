/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:39:23 by macarval          #+#    #+#             */
/*   Updated: 2024/04/30 09:51:21 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

// Color codes as global variables
const std::string RESET = "\033[0m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string YELLOW = "\033[33;1m";
const std::string BLUE = "\033[34;1m";
const std::string PURPLE = "\033[35;1m";
const std::string CYAN = "\033[36;1m";
const std::string GRAY = "\033[37;1m";

class ScalarConverter
{
	private:
	// =======================================================================
		ScalarConverter( void );
		ScalarConverter( ScalarConverter const &copy );
		~ScalarConverter( void );

	// Operators =============================================================
		ScalarConverter& operator=( ScalarConverter const &other );

	// Methods ===============================================================

	public:
	// Methods ===============================================================
		static void convert(std::string str);

};

#endif
