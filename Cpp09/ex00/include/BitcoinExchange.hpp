/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:18:20 by macarval          #+#    #+#             */
/*   Updated: 2024/05/10 21:29:37 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <iomanip>

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

# define INPUT 1
# define RATES 2

class BitcoinExchange
{
	private:
		std::map<std::string, float>	_rates;

		BitcoinExchange( BitcoinExchange const &copy );
		BitcoinExchange& operator=( BitcoinExchange const &other );

	// Methods ================================================================
		void	_getInputData( std::ifstream& file );
		void	_trim( std::string& str );
		void	_verifyHeader( std::string& header, int type );
		void	_verifyLine( std::string& line, std::string& date,
								float& value, int type );
		float	_getValue( std::string &str );
		bool	_verifyDate( std::string& date );
		bool	_verifyDateFormat( std::string& date );
		void	_getDate( std::string& date, int& year, int &month, int& day );
		bool	_verifyYear( int& year );
		bool	_verifyMonth( int& month );
		bool	_verifyDay( int& day, int& month, int& year );
		bool	_verifyValueRange( float& value );





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

		class BadInputException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class BadDateException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class BadValueException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};


	// Methods ================================================================
		void	readInput( std::string fileName );

};

#endif
