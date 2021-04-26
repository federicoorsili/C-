/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 12:03:02 by forsili           #+#    #+#             */
/*   Updated: 2021/04/26 17:13:31 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	this->age = 0;
	this->qi = 0;
}

void	Brain::set_age(int input)
{
	this->age = input;
}

void	Brain::set_qi(int input)
{
	this->qi = input;
}

int Brain::get_age(void)
{
	return (this->age);
}

int	Brain::get_qi(void)
{
	return (this->qi);
}

std::string	Brain::identify(void) const
{
	std::ostringstream s;
	s << this;
	return (s.str());
}