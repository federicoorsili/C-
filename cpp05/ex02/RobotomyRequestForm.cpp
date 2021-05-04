/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:47:42 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 18:07:40 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
	this->target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy) : Form("RobotomyRequestForm", 72, 45)
{
	this->target = copy.target;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &copy)
{
	this->target = copy.target;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int random;

	Form::execute(executor);
	std::cout << "* Drilllllll....*" << std::endl;
	srand(time(NULL));
	random = rand() % 2;
	if (random == 0)
		std::cout << this->target << " has been Robotomized successfully" << std::endl;
	else
		std::cout << this->target << " can't be robotomizet" << std::endl;
}