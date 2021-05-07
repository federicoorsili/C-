/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:32:13 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 12:57:07 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()	{}

AWeapon::AWeapon(std::string const &n, int d, int a)
{
	this->name = n;
	this->damage = d;
	this->apcost = a;
}

AWeapon::AWeapon(AWeapon const &copy)
{
	this->name = copy.name;
	this->damage = copy.damage;
	this->apcost = copy.apcost;
}

AWeapon		&AWeapon::operator = (AWeapon const &op)
{
	this->name = op.getName();
	this->damage = op.getDamage();
	this->apcost = op.getApcost();
	return (*this);
}

AWeapon::~AWeapon()	{}

std::string		AWeapon::getName() const
{
	return (this->name);
}

int				AWeapon::getDamage() const
{
	return (this->damage);
}

int				AWeapon::getApcost() const
{
	return (this->apcost);
}
