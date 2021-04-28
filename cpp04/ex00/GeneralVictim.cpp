/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GeneralVictim.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 23:29:17 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 23:52:00 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GeneralVictim.hpp"

GeneralVictim::GeneralVictim(std::string name)
{
	this->name = name;
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

GeneralVictim::GeneralVictim(GeneralVictim const &copy)
{
	this->name = copy.name;
}

GeneralVictim::~GeneralVictim(void)
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

GeneralVictim GeneralVictim::operator = (GeneralVictim const &copy)
{
	GeneralVictim out(copy);
	return out;
}

std::string GeneralVictim::getName(void) const
{
	return this->name;
}
