/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 23:19:05 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 23:55:10 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : GeneralVictim(name) {}

Victim::Victim(Victim const &copy) : GeneralVictim(copy) {}

Victim::~Victim(void) {}

Victim Victim::operator = (Victim const &copy)
{
	Victim out(copy);
	return out;
}

void Victim::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator << (std::ostream& out, Victim const &copy)
{
	return out << "I'm " << copy.getName() << " and I like otters!" << std::endl;
}