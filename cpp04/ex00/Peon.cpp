/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 23:32:10 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 23:55:04 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : GeneralVictim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &copy) : GeneralVictim(copy) 
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon Peon::operator = (Peon const &copy)
{
	Peon out(copy);
	return out;
}

void Peon::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

std::ostream& operator << (std::ostream& out, Peon const &copy)
{
	return out << "I'm " << copy.getName() << " and I like otters!" << std::endl;
}