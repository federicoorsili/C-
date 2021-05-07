/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:36:46 by forsili           #+#    #+#             */
/*   Updated: 2021/05/07 15:08:04 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:

		std::string const	name;
		int					grade;
	
	public:

		Bureaucrat();
		Bureaucrat(std::string const& name, int grade);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat();
		Bureaucrat&	operator=(Bureaucrat const& copy);
		std::string getName() const;
		int			getGrade() const;
		void		upGrade();
		void		downGrade();
		void		signForm(Form& form);
		void		executeForm(Form const & form) const;

		class GradeToLowException: public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

		class GradeToHightException: public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, Bureaucrat const &b);
