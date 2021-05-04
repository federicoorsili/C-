/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:10:16 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 13:17:19 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
	this->_xp = 0;
}

Ice::Ice(Ice const &copy)
{
	this->type = copy.getType();
	this->_xp = copy.getXP();
}

Ice::~Ice() {}

Ice& Ice::operator=(Ice const& copy)
{
	this->type = copy.getType();
	this->_xp = copy.getXP();
	return *this;
}

AMateria* Ice::clone() const
{
	AMateria *out = new Ice;
	return out;
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at "<< target.getName() <<" *" << std::endl;
}