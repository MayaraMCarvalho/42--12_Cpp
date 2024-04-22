/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:54:44 by macarval          #+#    #+#             */
/*   Updated: 2024/04/22 17:22:13 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP


# include "IMateriaSource.hpp"
# include "AMateria.hpp"

# define INV_SIZE 4

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _memory[INV_SIZE];

	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const &copy );
		virtual ~MateriaSource( void );

		MateriaSource& operator=( MateriaSource const &other );

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

};

#endif
