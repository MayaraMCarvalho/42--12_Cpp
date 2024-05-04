/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:39:28 by macarval          #+#    #+#             */
/*   Updated: 2024/05/03 23:27:34 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

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

template <typename T>
void swap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T const &max(T const &a, T const &b) {
	return (a > b) ? a : b;
}

template <typename T>
T const &min(T const &a, T const &b) {
	return (a < b) ? a : b;
}

#endif
