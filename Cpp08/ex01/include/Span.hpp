/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:45:17 by macarval          #+#    #+#             */
/*   Updated: 2024/05/15 16:06:09 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
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

class Span
{
	private:
		size_t				_N;
		std::vector<int>	_vec;
		Span( void );

	public:
	// Exceptions =============================================================
		class FullSpanException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class NoSpanException : public std::exception
		{
			virtual const char* what() const throw();
		};

	// ========================================================================
		Span( size_t N );
		Span( Span const &copy );
		~Span( void );

	// Operators ==============================================================
		Span& operator=( Span const &other );

	// Setters ================================================================
		void	addNumber( int num );
		void	addMany( std::vector<int>::iterator begin,
					std::vector<int>::iterator end );

	// Methods ================================================================
		int		shortestSpan( void );
		int		longestSpan( void );
};

#endif
