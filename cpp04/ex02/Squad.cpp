/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:39:31 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 11:41:04 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	for(int i = 0; i < 100;  i++)
	{
		this->array[i] = 0;
	}
}

Squad::~Squad()
{
	for (size_t i = 0; i < 100; i++)
	{
		if (this->array[i])
			delete(this->array[i]);
	}
	
}

Squad& Squad::operator=(Squad const & copy)
{

	for(int i = 0; i < 100; i++)
	{
		if (this->array[i])
			delete(this->array[i]);
		if (copy.array[i])
			this->array[i] = copy.array[i]->clone(); 
		else
			this->array[i] = 0;
	}
	return (*this);
}

Squad::Squad(Squad const &copy)
{
	Squad::operator=(copy);
}

int Squad::getCount(void) const
{
	int i = 0;
	while (this->array[i])
		i++;
	return i;
}

ISpaceMarine*	Squad::getUnit(int i) const
{
	if (this->array[i])
		return this->array[i];
	else
		return 0;
}

int	Squad::push(ISpaceMarine *unit)
{
	int i = 0;
	while (this->array[i] && this->array[i] != unit)
		i++;
	if (this->array[i] != unit)
		this->array[i] = unit;
	return i;
}