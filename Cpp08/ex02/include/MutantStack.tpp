/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:35:15 by macarval          #+#    #+#             */
/*   Updated: 2024/05/09 17:04:18 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

// Constructor & Destructor ===================================================
template <typename T>
MutantStack<T>::MutantStack( void ) : std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack( MutantStack const &copy ) : std::stack<T>(copy) {}

template <typename T>
MutantStack<T>::~MutantStack( void ) {}

// Operators ==================================================================
template <typename T>
MutantStack<T> &MutantStack<T>::operator=( MutantStack const &other )
{
	if (this != &other)
	{
		std::stack<T>::operator=(other);
	}
	return *this;
}

// Methods ====================================================================
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin( void )
{
	return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end( void )
{
	return std::stack<T>::c.end();
}

#endif
