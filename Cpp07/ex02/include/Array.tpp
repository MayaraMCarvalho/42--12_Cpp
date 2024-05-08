/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:09:28 by macarval          #+#    #+#             */
/*   Updated: 2024/05/08 09:43:07 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

// Constructor & Destructor ===================================================
template <typename T>
Array<T>::Array( void ) : _size(0), _arr(new T[0]) {}

template <typename T>
Array<T>::Array( unsigned int size ) : _size(size), _arr(new T[size])
{
	for (unsigned int i = 0; i < _size; ++i)
		_arr[i] = T();
}

template <typename T>
Array<T>::Array( Array const &copy ):  _size(copy._size), _arr(new T[copy._size])
{
	for (unsigned int i = 0; i < this->_size; ++i)
		this->_arr[i] = copy._arr[i];
}

template <typename T>
Array<T>::~Array( void ) {	delete [] this->_arr; }

// Operators ==================================================================
template <typename T>
Array<T> &Array<T>::operator=( Array const &other )
{
	if (this != &other)
	{
		if (this)
			delete [] this->_arr;
		this->_size = other._size;
		this->_arr = new T[other._size];
		for (unsigned int i = 0; i < this->_size; ++i)
			this->_arr[i] = other._arr[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[]( unsigned int const index ) const
{
	if (index < 0 || index >= this->_size)
		throw IndexLimitsException();

	return (this->_arr[index]);
}

// Getters ====================================================================
template <typename T>
unsigned int Array<T>::size( void ) const
{
	return this->_size;
}

// Exceptions =================================================================
template <typename T>
const char *Array<T>::IndexLimitsException::what() const throw()
{
	return "Error: Index out of bounds!!!";
}

#endif
