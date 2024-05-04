/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:16:10 by macarval          #+#    #+#             */
/*   Updated: 2024/05/04 15:16:41 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstdlib>

// Color codes as global variables
const std::string RESET = "\033[0m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string YELLOW = "\033[33;1m";
const std::string BLUE = "\033[34;1m";
const std::string PURPLE = "\033[35;1m";
const std::string CYAN = "\033[36;1m";
const std::string GRAY = "\033[37;1m";

template <typename T, typename F>
void iter(T *arr, size_t size, F func)
{
	for (size_t i = 0; i < size; ++i)
		func(arr[i]);
}

template <typename T>
void up(T &a) {
	std::string color[] = { "\033[0;31m",
							"\033[0;32m",
							"\033[0;33m",
							"\033[0;34m",
							"\033[0;35m" };

	std::cout << "\t\t\t" << color[std::rand() % 5] << a << "\033[0m " << std::endl;
}

#endif
