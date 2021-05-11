/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 00:01:50 by forsili           #+#    #+#             */
/*   Updated: 2021/05/11 11:44:05 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> c = Array<int>(5);

	std::cout << "INTEGER" << c.size() << "\n";
	try
	{
		c[4] = 9;
		c[6] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}

	c.print();
	std::cout << "SIZE: " << c.size() << "\n";

	Array<char> s = Array<char>(5);

	std::cout << "CHAR:\n";
	try
	{
		s[4] = 'a';
		s[6] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}

	s.print();
	std::cout << "SIZE: " << s.size() << "\n";

	return 0;
}
