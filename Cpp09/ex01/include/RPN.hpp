/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:42:48 by macarval          #+#    #+#             */
/*   Updated: 2024/05/16 09:45:33 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <algorithm>

# define REGULAR "0123456789 /*-+"

const std::string OPERATOR = "/*-+";

// Color codes as global variables
const std::string RESET = "\033[0m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string YELLOW = "\033[33;1m";
const std::string BLUE = "\033[34;1m";
const std::string PURPLE = "\033[35;1m";
const std::string CYAN = "\033[36;1m";
const std::string GRAY = "\033[37;1m";

class RPN
{
	private:
		std::stack<double>	_numbers;

	// Methods ================================================================
		void	_calc(char oper);

	public:
	// Constructor & Destructor ===============================================
		RPN( void );
		~RPN( void );
	// Exceptions =============================================================
		class TooFewOperatorsException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class InvalidCharacterException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class DivisionByZeroException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class InvalidExpressionException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class OutRangeException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	// ========================================================================
		RPN( RPN const &copy );

	// Operators ==============================================================
		RPN& operator=( RPN const &other );

	// Methods ================================================================
	float	run( std::string arg );
};

#endif
