/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:57:51 by macarval          #+#    #+#             */
/*   Updated: 2024/04/22 09:24:35 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

// Color codes as global variables
const std::string WRESET = "\033[0m";
const std::string WRED = "\033[31;1m";
const std::string WGREEN = "\033[32;1m";
const std::string WYELLOW = "\033[33;1m";
const std::string WBLUE = "\033[34;1m";
const std::string WPURPLE = "\033[35;1m";
const std::string WCYAN = "\033[36;1m";
const std::string WGRAY = "\033[37;1m";

class WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( WrongAnimal const &copy );
		virtual ~WrongAnimal( void );

		WrongAnimal& operator=( WrongAnimal const &other );

		std::string		getType( void ) const;
		void			makeSound( void ) const;

};

#endif
