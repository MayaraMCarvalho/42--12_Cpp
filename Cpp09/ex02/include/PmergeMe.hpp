/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:50:54 by macarval          #+#    #+#             */
/*   Updated: 2024/05/17 16:25:09 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <iomanip>

# include <list>
# include <vector>

# include <algorithm>

# define LIST "list"
# define VECTOR "vector"

// Color codes as global variables
const std::string RESET = "\033[0m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string YELLOW = "\033[33;1m";
const std::string BLUE = "\033[34;1m";
const std::string PURPLE = "\033[35;1m";
const std::string CYAN = "\033[36;1m";
const std::string GRAY = "\033[37;1m";

class PmergeMe
{
	private:
		std::list<int> _list;
		std::vector<int> _vector;

	// Methods ================================================================
		void	validations(int argc, char const *argv[]);
		void	getContainers(int argc, char const *argv[]);

		void	sortList();
		void	sortVector();

		void	printList( std::string status );
		void	printVector( std::string status );
		void	printTime( std::string type, double time,  size_t size );


		template<typename T>
		void	printContainer(T &cont, std::string status)
		{
			std::cout << PURPLE << status << ":\t" << YELLOW;
			for (typename T::iterator it = cont.begin(); it != cont.end(); it++)
				std::cout << *it << " ";
			std::cout << RESET << std::endl;
		}

	public:
	// Constructor & Destructor ===============================================
		PmergeMe( void );
		~PmergeMe( void );
	// Exceptions =============================================================

	// ========================================================================
		PmergeMe( PmergeMe const &copy );

	// Operators ==============================================================
		PmergeMe& operator=( PmergeMe const &other );

	// Methods ================================================================
	void	sort(int argc, char const *argv[]);


};

#endif


