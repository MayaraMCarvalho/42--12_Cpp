/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:09:17 by macarval          #+#    #+#             */
/*   Updated: 2024/05/02 23:37:10 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

// Destructor =================================================================
Base::~Base( void )
{
}

// Methods ====================================================================
Base	*generate(void)
{
	int i = std::rand() % 3;
	switch (i)
	{
		case 0:
			std::cout << "Class 𝓐  created!" << std::endl;
			return new A();
		case 1:
			std::cout << "Class 𝓑 created!" << std::endl;
			return new B();
		case 2:
			std::cout << "Class 𝓒 created!" << std::endl;
			return new C();
		default:
			return NULL;
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "It's an 🄰 class" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "It's an 🄱 class" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "It's an 🄲 class" << std::endl;
	else
		std::cout << RED << "Unknown class" << RESET << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "It's an 🅐 class" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "It's an 🅑 class" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "It's an 🅒 class" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Unknown class" << RESET << std::endl;
	}
}
