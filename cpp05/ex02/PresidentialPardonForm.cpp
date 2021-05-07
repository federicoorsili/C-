/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:56:25 by forsili           #+#    #+#             */
/*   Updated: 2021/05/07 15:01:41 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
	this->setTarget("default");
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy) : Form("PresidentialPardonForm", 25, 5)
{
	this->setTarget(copy.getTarget());
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &copy)
{
	this->setTarget(copy.getTarget());
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	executor.executeForm(*this);
	if (executor.getGrade() > this->getRequiredExec())
		throw Form::GradeToLowException();
	std::cout << this->getTarget() <<" has been pardoned by Zafod Beeblebrox" << std::endl;
}