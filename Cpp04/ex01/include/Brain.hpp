/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:22:10 by macarval          #+#    #+#             */
/*   Updated: 2024/04/19 16:28:29 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
#include <cmath>

#include "Animal.hpp"

class Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain( void );
		Brain( Brain const &copy );
		~Brain( void );

		Brain& operator=( Brain const &other );

		std::string getIdea( int n ) const;
};

#endif
