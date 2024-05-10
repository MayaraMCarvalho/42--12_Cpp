/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:14:40 by macarval          #+#    #+#             */
/*   Updated: 2024/05/09 17:04:21 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

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
class MutantStack : public std::stack<T>
{
	public:
	// ========================================================================
		MutantStack( void );
		MutantStack( MutantStack const &copy );
		virtual ~MutantStack( void );

	// Operators ==============================================================
		MutantStack& operator=( MutantStack const &other );

	// Methods ================================================================
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin( void );
		iterator	end( void );

};

# include "MutantStack.tpp"

#endif
