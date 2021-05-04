/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:35:00 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 13:26:35 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		this->stored[i] = 0;
	}
}

MateriaSource::MateriaSource(MateriaSource const& copy)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->stored[i])
			delete(this->stored[i]);
		this->stored[i] = copy.stored[i]->clone();
	}
}

MateriaSource MateriaSource::operator=(MateriaSource const& copy)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->stored[i])
			delete(this->stored[i]);
		this->stored[i] = copy.stored[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
	while (this->stored[i])
		i++;
	if (i < 4)
		this->stored[i] = m;
	
}

MateriaSource::~MateriaSource()
{
	int i = 0;
	while (this->stored[i])
	{
		delete(this->stored[i]);
		i++;
	}	
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (this->stored[i])
	{
		if (!this->stored[i]->getType().compare(type))
		{
			AMateria *out = this->stored[i]->clone();
			return out;
		}
		i++;
	}
	return 0;
}