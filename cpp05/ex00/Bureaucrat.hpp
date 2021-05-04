/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:36:46 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 16:16:19 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

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

std::ostream&	operator<<(std::ostream& out, Bureaucrat const &b);
