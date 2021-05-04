/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:58:13 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 13:21:57 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {this->type = ""; this->_xp=0;}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	this->_xp = 0;
}

AMateria::AMateria(AMateria const &copy)
{
	this->type = copy.type;
	this->_xp = copy._xp;
}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(AMateria const &copy)
{
	this->type = copy.type;
	this->_xp = copy._xp;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return this->type;
}

unsigned int AMateria::getXP() const
{
	return this->_xp;
}

void AMateria::use(ICharacter& target) 
{
	this->_xp += 10;
	(void)target;
}