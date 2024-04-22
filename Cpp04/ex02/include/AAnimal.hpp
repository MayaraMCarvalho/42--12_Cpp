/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:57:51 by macarval          #+#    #+#             */
/*   Updated: 2024/04/22 09:30:35 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

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

class AAnimal
{
	protected:
		std::string	type;

	public:
		AAnimal( void );
		AAnimal( std::string type );
		AAnimal( AAnimal const &copy );
		virtual ~AAnimal( void );

		AAnimal& operator=( AAnimal const &other );

		std::string		getType( void ) const;
		virtual void	makeSound( void ) const = 0;

};

#endif
