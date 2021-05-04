/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:08:46 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 19:40:12 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#define RED "\033[0;31m"
#define OFF "\033[0m"

int main (void)
{
	Bureaucrat mimmo("Super Mimmo", 1);
	Bureaucrat giggi("Giggi in novellino", 150);
	ShrubberyCreationForm		form1("ciccio");
	PresidentialPardonForm		form2("mario");
	RobotomyRequestForm			form3("nando");
	//Sign:
	try
	{
		giggi.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << form1 << std::endl;
	try
	{
		mimmo.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << form1 << std::endl;
	//execution:
	try
	{
		form1.execute(giggi);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	//std::cout << form1 << std::endl;
	try
	{
		form1.execute(mimmo);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	//std::cout << form1 << std::endl;

	//Sign:
	try
	{
		giggi.signForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << form2 << std::endl;
	try
	{
		mimmo.signForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << form2 << std::endl;
	//execution:
	try
	{
		form2.execute(giggi);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	//std::cout << form2 << std::endl;
	try
	{
		form2.execute(mimmo);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		giggi.signForm(form3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << form3 << std::endl;
	try
	{
		mimmo.signForm(form3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << form3 << std::endl;
	//execution:
	try
	{
		form3.execute(giggi);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	//std::cout << form3 << std::endl;
	try
	{
		form3.execute(mimmo);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}