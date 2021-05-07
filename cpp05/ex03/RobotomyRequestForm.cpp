/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:47:42 by forsili           #+#    #+#             */
/*   Updated: 2021/05/07 15:01:54 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
	this->setTarget("default");
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy) : Form("RobotomyRequestForm", 72, 45)
{
	this->setTarget(copy.getTarget());
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &copy)
{
	this->setTarget(copy.getTarget());
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int random;

	executor.executeForm(*this);
	if (executor.getGrade() > this->getRequiredExec())
		throw Form::GradeToLowException();
	std::cout << "* Drilllllll....*" << std::endl;
	srand(time(NULL));
	random = rand() % 2;
	if (random == 0)
		std::cout << this->getTarget() << " has been Robotomized successfully" << std::endl;
	else
		std::cout << this->getTarget() << " can't be robotomizet" << std::endl;
}