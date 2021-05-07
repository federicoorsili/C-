/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:36:21 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 16:26:39 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()	{}

Character::Character(std::string const &name)
{
	this->name = name;
	this->ap = 40;
	this->weapon = NULL;
}

Character::Character(Character const &copy)
{
	this->name = copy.name;
	this->ap = copy.ap;
	this->weapon = copy.weapon;
}

Character &Character::operator = (Character const &op)
{
	this->name = op.getName();
	this->ap = op.getAp();
	this->weapon = op.getWeapon();
	return (*this);
}

Character::~Character()	{}

std::string		Character::getName() const
{
	return (this->name);
}

int				Character::getAp() const
{
	return (this->ap);
}

AWeapon			*Character::getWeapon() const
{
	return (this->weapon);
}

void			Character::recoverAP()
{
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}

void			Character::equip(AWeapon *w)
{
	this->weapon = w;
}

void			Character::attack(Enemy *e)
{
	if (!this->weapon)
		return;
	if (this->ap - this->weapon->getApcost() < 0)
		return;
	std::cout << this->name << " attacks " << e->getType() << " with a " << this->weapon->getName() << std::endl;
	this->weapon->attack();
	this->ap -= this->weapon->getApcost();
	e->takeDamage(this->weapon->getDamage());
	if (e->getHp() <= 0)
		delete e;
}

std::ostream	&operator << (std::ostream &out, Character const &c)
{
	if (c.getWeapon())
		out << c.getName() << " has " << c.getAp() << " AP and wields a " << c.getWeapon()->getName() << std::endl;
	else
		out << c.getName() << " has " << c.getAp() << " AP and is unarmed" << std::endl;
	return (out);
}