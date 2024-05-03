/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:39:23 by macarval          #+#    #+#             */
/*   Updated: 2024/05/02 21:22:54 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

# include "Data.hpp"

class Serializer
{
	private:
	// ========================================================================
		Serializer( void );
		Serializer( Serializer const &copy );
		~Serializer( void );

	// Operators ==============================================================
		Serializer& operator=( Serializer const &other );

	// Methods ================================================================

	public:
	// Methods ================================================================
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif
