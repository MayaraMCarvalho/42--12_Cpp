/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:42:48 by macarval          #+#    #+#             */
/*   Updated: 2024/05/14 17:08:31 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

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

class RPN
{
	private:
		std::stack<int> _numbers;

	public:
	// Constructor & Destructor ===============================================
		RPN( void );
		~RPN( void );
	// Exceptions =============================================================

	// ========================================================================
		RPN( RPN const &copy );

	// Operators ==============================================================
		RPN& operator=( RPN const &other );

	// Getters ================================================================

	// Setters ================================================================

	// Methods ================================================================
	void	run( std::string argv );
};

#endif
