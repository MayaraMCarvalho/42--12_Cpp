/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:06:33 by macarval          #+#    #+#             */
/*   Updated: 2024/04/22 19:57:20 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# define HIGHGRADE	1;
# define LOWGRADE	150;

// Color codes as global variables
const std::string RESET = "\033[0m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string YELLOW = "\033[33;1m";
const std::string BLUE = "\033[34;1m";
const std::string PURPLE = "\033[35;1m";
const std::string CYAN = "\033[36;1m";
const std::string GRAY = "\033[37;1m";

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

	public:
		Bureaucrat( void );
		Bureaucrat( std::string const &name, int grade );
		Bureaucrat( Bureaucrat const &copy );
		~Bureaucrat( void );

		Bureaucrat&			operator=( Bureaucrat const &other );
		void		 		operator<<( Bureaucrat const &actual );

		std::string const	getName( void ) const;
		int					getGrade( void ) const;
		void				upGrade ( void );
		void				downGrade ( void );
};

#endif
