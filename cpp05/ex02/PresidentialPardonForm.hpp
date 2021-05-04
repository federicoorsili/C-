/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:55:10 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 17:56:13 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class	PresidentialPardonForm: public Form
{
	private:
		std::string target;
	public:

		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & copy);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(PresidentialPardonForm const &copy);
		void	execute(Bureaucrat const & executor) const;
};