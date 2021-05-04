/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:08:46 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 16:19:31 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#define RED "\033[0;31m"
#define OFF "\033[0m"

int main (void)
{
	std::cout << RED << "**Burocrate da 148 a 151" << OFF << std::endl;
	try
	{
		Bureaucrat b = Bureaucrat("Mario", 148);
		std::cout << b;
		b.downGrade();
		std::cout << b;
		b.downGrade();
		std::cout << b;
		b.downGrade();
		std::cout << b;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << RED << "**Burocrate da -1" << OFF << std::endl;
	try
	{
		Bureaucrat b = Bureaucrat("Mario", -1);
		std::cout << b;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << RED << "**Burocrate da 2 a 0" << OFF << std::endl;
	try
	{
		Bureaucrat b = Bureaucrat("Mario", 2);
		std::cout << b;
		b.upGrade();
		std::cout << b;
		b.upGradea();
		std::cout << b;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}