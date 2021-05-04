/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:22:07 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 18:13:51 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	name;
		bool				sign;
		int const			required_grade;
		int const			required_exec;
	public:
		
		Form();
		Form(std::string name, int required_grade, int required_exec);
		Form(Form const& copy);
		~Form();
		Form& operator=(Form const &copy);


		void	beSigned(Bureaucrat & b);
		void	execute(Bureaucrat const & executor) const;
		std::string getName() const;
		bool		getSign() const;
		int			getRequiredGrade() const;
		int			getRequiredExec() const;

		class GradeToLowException: public std::exception
		{
			public:
				GradeToLowException();
				~GradeToLowException();
				virtual const char*	what() const throw();
		};

		class GradeToHightException: public std::exception
		{
			public:
				GradeToHightException();
				~GradeToHightException();
				virtual const char*	what() const throw();
		};

};

std::ostream& operator<<(std::ostream &out, Form &form);