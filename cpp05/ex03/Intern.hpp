/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:28:12 by forsili           #+#    #+#             */
/*   Updated: 2021/05/07 15:10:26 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class ShrubberyCreationForm;

class RobotomyRequestForm;

class PresidentialPardonForm;

class Intern
{
	private:
		Form*	(*funcptr[3])(std::string _target);
		std::string					names[3];

		static	Form*	newShrubbery(std::string _target);
		static	Form*	newRobotomy(std::string _target);
		static	Form*	newPardon(std::string _target);

	public:
		Intern(void);
		Intern(const Intern& src);
		~Intern(void);
		Intern&		operator=(const Intern& src);
		Form*	makeForm(std::string _form, std::string _target);
		
		class NotFoundException: public std::exception
		{
			public:
				NotFoundException();
				virtual const char*	what() const throw();
		};
};
