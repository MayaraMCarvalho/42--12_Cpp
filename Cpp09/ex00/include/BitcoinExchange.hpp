/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:18:20 by macarval          #+#    #+#             */
/*   Updated: 2024/05/10 12:00:39 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <algorithm>

// Color codes as global variables
const std::string RESET = "\033[0m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string YELLOW = "\033[33;1m";
const std::string BLUE = "\033[34;1m";
const std::string PURPLE = "\033[35;1m";
const std::string CYAN = "\033[36;1m";
const std::string GRAY = "\033[37;1m";

class BitcoinExchange
{
	private:
		std::map<std::string, float>	_input;

		BitcoinExchange( BitcoinExchange const &copy );
		BitcoinExchange& operator=( BitcoinExchange const &other );

	// Methods ================================================================
		void	_getInputData( std::ifstream file ) const;

	public:
	// ========================================================================
		BitcoinExchange( void );
		~BitcoinExchange( void );

	// Exceptions =============================================================
		class InputFileNotOpenException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class InputFileEmptyException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class InvalidInputException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};




	// Getters ================================================================

	// Setters ================================================================

	// Methods ================================================================
		void	readInput( std::string fileName );

};

#endif
