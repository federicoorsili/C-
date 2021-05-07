/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:22:07 by forsili           #+#    #+#             */
/*   Updated: 2021/05/07 15:07:24 by forsili          ###   ########.fr       */
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
		std::string 		target;
	public:
		
		Form();
		Form(std::string name, int required_grade, int required_exec);
		Form(Form const& copy);
		~Form();
		Form& operator=(Form const &copy);


		void	beSigned(Bureaucrat & b);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		std::string getName() const;
		bool		getSign() const;
		int			getRequiredGrade() const;
		int			getRequiredExec() const;
		std::string	getTarget() const;
		void		setTarget(std::string target);

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

std::ostream& operator<<(std::ostream &out, Form &form);