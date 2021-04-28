/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 23:06:12 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 23:53:28 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
	std::cout << this->name << ",";
	std::cout << this->type << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &copy)
{
	this->name = copy.name;
	this->type = copy.type;
	std::cout << this->name << ",";
	std::cout << this->type << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->type << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer Sorcerer::operator = (Sorcerer const &copy)
{
	Sorcerer out(copy);
	return (out);
}

std::string	Sorcerer::getName(void)
{
	return this->name;
}

std::string Sorcerer::getType(void)
{
	return this->type;
}

std::ostream& operator << (std::ostream& out,Sorcerer &s)
{
	return out << "I am " << s.getName() << ", " << s.getType() << ", and i like ponies!" << std::endl;
}

void	Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}

void	Sorcerer::polymorph(Peon const &v) const
{
	v.getPolymorphed();
}

