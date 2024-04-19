/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:57:51 by macarval          #+#    #+#             */
/*   Updated: 2024/04/19 17:05:33 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain* _brain;

	public:
		Cat( void );
		Cat( Cat const &copy );
		~Cat( void );

		Cat& operator=( Cat const &other );

		void makeSound( void ) const;
		std::string getIdea( int n ) const;
};

#endif
