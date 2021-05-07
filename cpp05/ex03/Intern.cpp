/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:36:15 by forsili           #+#    #+#             */
/*   Updated: 2021/05/07 15:10:36 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	names[1] = "shrubbery request";
	names[1] = "robotomy request";
	names[1] = "pardon request";

	funcptr[0] = Intern::newShrubbery;
	funcptr[1] = Intern::newRobotomy;
	funcptr[2] = Intern::newPardon;
}

Intern::Intern(const Intern& src)
{
	(void)src;
}

Intern::~Intern(void)	{}

Intern&		Intern::operator=(const Intern& src)
{
	(void)src;
	return *this;
}

Form*	Intern::newShrubbery(std::string _target)
{
	return new ShrubberyCreationForm(_target);
}

Form*	Intern::newRobotomy(std::string _target)
{
	return new RobotomyRequestForm(_target);
}

Form*	Intern::newPardon(std::string _target)
{
	return new PresidentialPardonForm(_target);
}

Form*	Intern::makeForm(std::string _form, std::string _target)
{
	for (size_t i = 0; i < 3; i++)
	{
		if (_form.find(names[i]))
		{
			std::cout << "Intern creates " << _form << " target: " << _target << std::endl;
			return this->funcptr[i](_target);
		}
	}
	throw Intern::NotFoundException();
}

Intern::NotFoundException::NotFoundException() {}

const char*	Intern::NotFoundException::what() const throw()
{
	return ("Exception: Form not found!");
}
