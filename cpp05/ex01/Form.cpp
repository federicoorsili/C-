/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:32:23 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 17:05:57 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), required_grade(150), required_exec(150)
{
	this->sign = false;
}

Form::Form(std::string name, int required_grade, int required_exec) 
: name(name), required_grade(required_grade), required_exec(required_exec)
{
	if (required_grade > 150 || required_exec > 150)
		throw Form::GradeToLowException();
	else if (required_grade < 1 || required_exec < 1)
		throw Form::GradeToHightException();
	this->sign = false;
}

Form::Form(Form const& copy) : name(copy.getName()), required_grade(copy.required_grade), required_exec(copy.getRequiredExec())
{
	this->sign = copy.sign;
}

Form::~Form() {}

Form& Form::operator=(Form const &copy)
{
	this->sign = copy.sign;
	return *this;
}

void	Form::beSigned(Bureaucrat & b)
{
	if (b.getGrade() <= this->required_grade)
	{
		this->sign = true;
		b.signForm(*this);
	}
	else if (b.getGrade() > this->required_grade)
	{
		b.signForm(*this);
		throw Form::GradeToLowException();
	}	
}

std::string Form::getName() const
{
	return this->name;
}

bool		Form::getSign() const
{
	return this->sign;
}

int			Form::getRequiredGrade() const
{
	return this->required_grade;
}

int			Form::getRequiredExec() const
{
	return this->required_exec;
}

std::ostream& operator<<(std::ostream &out, Form &form)
{
	out << "Document name: " << form.getName();
	if (form.getSign())
		out << " is signed and the required grade was " << form.getRequiredGrade() << std::endl;
	else
		out << " isn't signed, required grade: " << form.getRequiredGrade() << std::endl;
	return out;
}

Form::GradeToLowException::GradeToLowException() {}

Form::GradeToLowException::~GradeToLowException() {}

const char*	Form::GradeToLowException::what() const throw()
{
	return ("Exception: To low required grade for Form");
}

Form::GradeToHightException::GradeToHightException() {}

Form::GradeToHightException::~GradeToHightException() {}

const char*	Form::GradeToHightException::what() const throw()
{
	return ("Exception: To Hight required grade for Form");
}
