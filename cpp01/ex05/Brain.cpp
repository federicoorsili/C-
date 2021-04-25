/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 12:03:02 by forsili           #+#    #+#             */
/*   Updated: 2021/04/25 12:36:35 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	this->address = 0;
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

void	Brain::set_address(Brain input)
{
	this->address = &input;
}

int Brain::get_age(void)
{
	return (this->age);
}

int	Brain::get_qi(void)
{
	return (this->qi);
}

Brain	*Brain::identify(void)
{
	return (this->address);
}