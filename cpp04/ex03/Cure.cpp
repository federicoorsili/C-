/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:04:37 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 13:17:44 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
	this->_xp = 0;
}

Cure::Cure(Cure const &copy)
{
	this->type = copy.getType();
	this->_xp = copy.getXP();
}

Cure::~Cure() {}

Cure& Cure::operator=(Cure const& copy)
{
	this->type = copy.getType();
	this->_xp = copy.getXP();
	return *this;
}

AMateria* Cure::clone() const
{
	AMateria *out = new Cure;
	return out;
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals "<< target.getName() <<"’s wounds *" << std::endl;
}