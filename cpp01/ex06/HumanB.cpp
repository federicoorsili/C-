/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:01:31 by forsili           #+#    #+#             */
/*   Updated: 2021/04/26 12:12:00 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string	name)
{
	this->name = name;
	this->weapon = NULL;
}

void	HumanB::setName(std::string	input)
{
	this->name = input;
}

void	HumanB::setWeapon(Weapon &input)
{
	this->weapon = &input;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}