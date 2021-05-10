/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:08:46 by forsili           #+#    #+#             */
/*   Updated: 2021/05/10 17:58:13 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#define RED "\033[0;31m"
#define OFF "\033[0m"

int main (void)
{
	Bureaucrat mimmo("Super Mimmo", 1);
	Bureaucrat giggi("Giggi in novellino", 150);
	Form	*form;
	Intern 	intern;
	//Sign:
	try 
	{
		form = intern.makeForm("robotomy request", "nando");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 0;
	}
	try
	{
		giggi.signForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << *form << std::endl;
	try
	{
		mimmo.signForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << *form << std::endl;
	//execution:
	try
	{
		form->execute(giggi);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	//std::cout << form << std::endl;
	try
	{
		form->execute(mimmo);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	//std::cout << form << std::endl;

}