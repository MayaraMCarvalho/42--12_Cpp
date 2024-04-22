/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:32:29 by macarval          #+#    #+#             */
/*   Updated: 2024/04/22 14:30:11 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

# define INV_SIZE 4

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_inventory[INV_SIZE];

	public:
		Character( void );
		Character( std::string const &name );
		Character( Character const &copy );
		virtual ~Character( void );

		Character& operator=( Character const &other );

		std::string const &	getName() const;
		virtual void		equip(AMateria* m);
		virtual void		unequip(int idx);
		virtual void		use(int idx, ICharacter& target);

};

#endif
