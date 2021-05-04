/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:47:16 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 17:50:07 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include <cstdlib>

class	RobotomyRequestForm: public Form
{
	private:
		std::string target;
	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & copy);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(RobotomyRequestForm const &copy);
		void	execute(Bureaucrat const & executor) const;
};