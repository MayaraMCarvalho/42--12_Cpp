/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:45:17 by macarval          #+#    #+#             */
/*   Updated: 2024/05/08 16:51:41 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

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

class Span
{
	private:
		size_t	_N;
		

	public:
	// Exceptions =============================================================

	// ========================================================================
		Span( void );
		Span( int N );
		Span( Span const &copy );
		~Span( void );

	// Operators ==============================================================
		Span& operator=( Span const &other );

	// Getters ================================================================

	// Setters ================================================================

	// Methods ================================================================

};

#endif
