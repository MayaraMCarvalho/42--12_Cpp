/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:41:49 by macarval          #+#    #+#             */
/*   Updated: 2024/05/02 21:14:14 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

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

class Data
{
	private:
		int			_index;
		std::string	_name;

	public:
	// ========================================================================
		Data( void );
		Data( int index, std::string name );
		Data( Data const &copy );
		~Data( void );

	// Operators ==============================================================
		Data& operator=( Data const &other );

	// Getters ================================================================
		int			getIndex( void ) const;
		std::string	getName( void ) const;

	// Setters ================================================================
		void		setIndex( int index );
		void		setName( std::string name );
};

std::ostream &operator<<(std::ostream& out, Data const &data);

#endif
