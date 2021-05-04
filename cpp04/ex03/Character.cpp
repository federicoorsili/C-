/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:16:38 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 13:02:47 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->name = "";
	for (size_t i = 0; i < 4; i++)
	{
		this->inventory[i] = 0;
	}
}

Character::Character(Character const& copy)
{	
	this->name = copy.name;
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete(this->inventory[i]);
		this->inventory[i] = copy.inventory[i]->clone();	
	}
}

Character::Character(std::string name)
{
	this->name = name;
	for (size_t i = 0; i < 4; i++)
	{
		this->inventory[i] = 0;
	}	
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete(this->inventory[i]);
	}
}

Character& Character::operator=(Character const& copy)
{
	this->name = copy.name;
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete(this->inventory[i]);
		this->inventory[i] = copy.inventory[i]->clone();	
	}
	return *this;
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	int i = 0;
	if (!m)
		return ;
	while (this->inventory[i])
		i++;
	if (i < 4)
		this->inventory[i] = m;
}

void Character::unequip(int idx)
{
	if (idx > 3 || !this->inventory[idx])
		return ;
	this->inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || !this->inventory[idx])
		return ;
	this->inventory[idx]->use(target);
}