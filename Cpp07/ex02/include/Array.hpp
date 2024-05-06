/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:53:21 by macarval          #+#    #+#             */
/*   Updated: 2024/05/06 19:43:09 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <sstream>

// Color codes as global variables
const std::string RESET = "\033[0m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string YELLOW = "\033[33;1m";
const std::string BLUE = "\033[34;1m";
const std::string PURPLE = "\033[35;1m";
const std::string CYAN = "\033[36;1m";
const std::string GRAY = "\033[37;1m";

template <typename T>
class Array
{
	private:
		unsigned int	_size;
		T				*_arr;

	public:
	// Exceptions =============================================================
	class IndexLimitsException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	// ========================================================================
		Array( void );
		Array(unsigned int size);
		Array( Array const &copy );
		~Array( void );

	// Operators ==============================================================
		Array& operator=( Array const &other );
		T& operator[]( unsigned int const index ) const;

	// Getters ================================================================
		unsigned int size() const;

	// Setters ================================================================

	// Methods ================================================================



};

# include "Array.tpp"

#endif
