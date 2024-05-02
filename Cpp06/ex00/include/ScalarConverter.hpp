/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:39:23 by macarval          #+#    #+#             */
/*   Updated: 2024/05/02 15:22:20 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <limits.h>
# include <cstdlib>
# include <string>
# include <cmath>
# include <cctype>
# include <cerrno>
# include <iomanip>
#include <cstdio>//

// Color codes as global variables
const std::string RESET = "\033[0m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string YELLOW = "\033[33;1m";
const std::string BLUE = "\033[34;1m";
const std::string PURPLE = "\033[35;1m";
const std::string CYAN = "\033[36;1m";
const std::string GRAY = "\033[37;1m";

enum allTypes {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PFLOAT,
	PSEUDO,
	INVALID
};

typedef bool (*types)( const std::string str );

class ScalarConverter
{
	private:
	// ========================================================================
		ScalarConverter( void );
		ScalarConverter( ScalarConverter const &copy );
		~ScalarConverter( void );

	// Operators ==============================================================
		ScalarConverter& operator=( ScalarConverter const &other );

	// Methods ================================================================
		static bool	isChar( const std::string str );
		static bool	isInt( const std::string str );
		static bool	isFloat( const std::string str );
		static bool	isDouble( const std::string str );
		static bool	isPseudo( const std::string str );
		static int	getType( std::string str );
		static void	fromChar( std::string str);
		static void	fromInt( std::string str);
		static void	fromFloat( std::string str);
		static void	fromDouble( std::string str);
		static void	fromPseudo( std::string str);
		static void	printTypes( char c, int i, float f, double d, int error );

	public:
	// Methods ================================================================
		static void convert( std::string str );

};

#endif
