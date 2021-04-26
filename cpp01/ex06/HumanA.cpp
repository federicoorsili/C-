/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:39:12 by forsili           #+#    #+#             */
/*   Updated: 2021/04/26 12:10:29 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string	input_name, Weapon &input_weapon) : name(input_name), weapon(input_weapon) {}

void	HumanA::setName(std::string	input)
{
	this->name = input;
}

void	HumanA::setWeapon(Weapon input)
{
	Weapon &tmp = input;

	this->weapon = tmp;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
