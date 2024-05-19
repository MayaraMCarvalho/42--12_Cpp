/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:50:54 by macarval          #+#    #+#             */
/*   Updated: 2024/05/19 13:18:47 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <iomanip>
# include <cerrno>
# include <climits>

# include <list>
# include <vector>

# include <algorithm>

# define LIST "list"
# define VECTOR "vector"

# define ARG_ERR "Invalid arguments!\nUsage: ./PmergeMe <number1> <number2> ..."
# define INT_ERR "Invalid arguments!\nUse only integers!!!"
# define BOUNDS_ERR "Out of bounds!\nUse only positive integers!!!"

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
		std::list<int>		_list;
		std::vector<int>	_vector;
		double				_timeList;
		double				_timeVector;

	// Methods ================================================================
		void	validations(int argc, char const *argv[]);
		bool	isInteger( std::string const &str );
		void	getContainers(int argc, char const *argv[]);

		void	sortList( void );
		void	sortVector( void );

		void	mergeInsertionSort( std::list<int>& lst );
		void	insertionSort(std::list<int>& lst);
		void	merge(std::list<int>& lst, std::list<int>& left, std::list<int>& right);

		void	mergeInsertionSort( std::vector<int>& arr, int left, int right );
		void	merge( std::vector<int>& arr, int left, int mid, int right );

		void	printList( std::string status );
		void	printVector( std::string status );
		void	printTime( std::string type );

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


