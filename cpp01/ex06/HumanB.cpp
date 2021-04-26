/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:01:31 by forsili           #+#    #+#             */
/*   Updated: 2021/04/26 17:23:44 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string	name)
{
	this->name = name;
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
	if (!this->weapon)
		std::cout << this->name << " attacks with his " << "a mano" << std::endl;
	else
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}