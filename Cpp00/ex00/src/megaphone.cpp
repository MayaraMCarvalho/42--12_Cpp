/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:11:41 by macarval          #+#    #+#             */
/*   Updated: 2024/03/19 18:28:09 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

const char *ToUpperStr(char *str)
{
	for (size_t i = 0; str[i]; i++)
		str[i] = toupper(str[i]);
	return (str);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
			std::cout << ToUpperStr(argv[i]);
		std::cout << std::endl;
	}
	return (0);
}

