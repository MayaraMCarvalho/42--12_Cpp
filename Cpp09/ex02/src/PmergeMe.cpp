/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:51:35 by macarval          #+#    #+#             */
/*   Updated: 2024/05/19 13:26:47 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Constructor & Destructor ===================================================
PmergeMe::PmergeMe( void ) {}

PmergeMe::PmergeMe( PmergeMe const &copy )
{
	*this = copy;
}

PmergeMe::~PmergeMe( void ) {}

// Operators ==================================================================
PmergeMe& PmergeMe::operator=( PmergeMe const &other )
{
	if (this != &other)
		return *this;
	return *this;
}

// Methods ====================================================================
void PmergeMe::sort(int argc, char const *argv[])
{
	try
	{
		validations(argc, argv);
		getContainers(argc, argv);

		printList("List Before");
		sortList();
		printList("List After");
		printTime(LIST);

		// printVector("Vector Before");//
		sortVector();
		// printVector("Vector After");//
		printTime(VECTOR);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED;
		std::cerr << "Error: " << e.what();
		std::cerr << "\n" << RESET << std::endl;
	}
}

void PmergeMe::validations(int argc, char const *argv[])
{
	if (argc < 2)
		throw std::runtime_error(ARG_ERR);
	for (int i = 1; i < argc; ++i)
	{
		std::string str = argv[i];
		if (!isInteger(str))
			throw std::runtime_error(INT_ERR);
		long int number = std::strtol(str.c_str(), NULL, 10);
		if (number > INT_MAX || number <= 0)
			throw std::runtime_error(BOUNDS_ERR);
	}
}

bool PmergeMe::isInteger( std::string const &str )
{
	char* ptr;

	int value = static_cast<int>(std::strtol(str.c_str(), &ptr, 10));

	if ((errno != 0 && value == 0) || ptr == str.c_str())
		return false;
	if (*ptr == '\0')
		return true;
	return false;
}

void PmergeMe::getContainers(int argc, char const *argv[])
{
	int	value;

	for (int i = 1; i < argc; ++i)
	{
		std::string str = argv[i];
		value = static_cast<int>(std::strtol(str.c_str(), NULL, 10));
		this->_list.push_back(value);
		this->_vector.push_back(value);
	}
}

void PmergeMe::sortList( void )
{
	clock_t startTime = clock();
	mergeInsertionSort(this->_list);
	clock_t endTime = clock();
	this->_timeList = double(endTime - startTime) / CLOCKS_PER_SEC;
}

void PmergeMe::sortVector( void )
{
	clock_t startTime = clock();
	mergeInsertionSort(this->_vector, 0, this->_vector.size() - 1);
	clock_t endTime = clock();
	this->_timeVector = double(endTime - startTime) / CLOCKS_PER_SEC;
}

void PmergeMe::mergeInsertionSort(std::list<int>& lst)
{
	if (lst.size() <= 1) return;

	if (lst.size() <= 10)
		insertionSort(lst);
	else
	{
		std::list<int> left, right;
		std::list<int>::iterator it = lst.begin();
		for (size_t i = 0; i < lst.size() / 2; ++i)
			left.push_back(*it++);
		for (size_t i = lst.size() / 2; i < lst.size(); ++i)
			right.push_back(*it++);

		mergeInsertionSort(left);
		mergeInsertionSort(right);
		merge(lst, left, right);
	}
}

void PmergeMe::insertionSort(std::list<int>& lst)
{
	if (lst.empty())
		return;

	std::list<int>::iterator it = lst.begin();
	++it;
	for (; it != lst.end(); ++it)
	{
		int key = *it;
		std::list<int>::iterator j = it;
		while (--j != lst.begin() && *j > key)
		{
			std::list<int>::iterator next = j;
			++next;
			*next = *j;
		}
		if (*j > key)
		{
			std::list<int>::iterator next = j;
			++next;
			*next = *j;
			*j = key;
		}
		else
		{
			std::list<int>::iterator next = j;
			++next;
			*next = key;
		}
	}
}

void PmergeMe::merge(std::list<int>& lst, std::list<int>& left, std::list<int>& right)
{
	lst.clear();
	std::list<int>::iterator itLeft = left.begin();
	std::list<int>::iterator itRight = right.begin();

	while (itLeft != left.end() && itRight != right.end()) {
		if (*itLeft <= *itRight) {
			lst.push_back(*itLeft);
			++itLeft;
		} else {
			lst.push_back(*itRight);
			++itRight;
		}
	}

	while (itLeft != left.end()) {
		lst.push_back(*itLeft);
		++itLeft;
	}

	while (itRight != right.end()) {
		lst.push_back(*itRight);
		++itRight;
	}
}

void PmergeMe::mergeInsertionSort(std::vector<int>& arr, int left, int right )
{
	if (left < right) {
		if (right - left <= 10)
		{
			for (int i = left + 1; i <= right; ++i)
			{
				int key = arr[i];
				int j = i;
				while (--j >= left && arr[j] > key)
					arr[j + 1] = arr[j];
				arr[j + 1] = key;
			}
		}
		else
		{
			int mid = left + (right - left) / 2;
			mergeInsertionSort(arr, left, mid);
			mergeInsertionSort(arr, mid + 1, right);
			merge(arr, left, mid, right);
		}
	}
}

void PmergeMe::merge(std::vector<int>& arr, int left, int mid, int right)
{
	int n1 = mid - left + 1;
	int n2 = right - mid;
	std::vector<int> L(n1), R(n2);

	for (int i = 0; i < n1; ++i)
		L[i] = arr[left + i];
	for (int i = 0; i < n2; ++i)
		R[i] = arr[mid + 1 + i];

	int i = 0, j = 0, k = left;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			++i;
		}
		else
		{
			arr[k] = R[j];
			++j;
		}
		++k;
	}

	while (i < n1)
	{
		arr[k] = L[i];
		++i;
		++k;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		++j;
		++k;
	}
}

void PmergeMe::printTime( std::string type)
{
	double time = this->_timeList;
	size_t size = this->_list.size();

	if (type == VECTOR)
	{
		time = this->_timeVector;
		size = this->_vector.size();
	}

	std::cout << PURPLE;
	std::cout << "Time to process a range of " << GREEN << size;
	std::cout << PURPLE << " elements with std::" << type << " -> \t";
	std::cout << std::fixed << std::setprecision(6) << YELLOW;
	std::cout << time << " us" << RESET << std::endl;
}

void PmergeMe::printList( std::string status )
{
	std::cout << PURPLE << status << ": " << YELLOW;
	for (std::list<int>::iterator it = this->_list.begin();
								it != this->_list.end(); ++it)
		std::cout << *it << " ";
	std::cout << RESET << std::endl;
}

void PmergeMe::printVector( std::string status )
{
	std::cout << PURPLE << status << ": " << YELLOW;
	for (size_t i = 0; i < this->_vector.size(); ++i)
		std::cout << this->_vector[i] << " ";
	std::cout << RESET << std::endl;
}

// Exceptions =================================================================

