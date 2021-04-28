/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:37:43 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 16:46:05 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(), FragTrap(name), NinjaTrap(name)
{
	FragTrap::setHit_points(100);
	FragTrap::setMax_hit_points(100);
	FragTrap::setEnergy_points(120);
	FragTrap::setMax_energy(120);
	FragTrap::setLevel(1);
	FragTrap::setName(name);
	FragTrap::setM_attack(120);
	FragTrap::setR_attack(20);
	FragTrap::setArmor_damage(5);

	std::cout << "Default costructor SuperTrap called" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap &copy) : ClapTrap(), FragTrap(copy), NinjaTrap(copy)
{
	FragTrap::setHit_points(copy.FragTrap::getHit_points());
	FragTrap::setMax_hit_points(copy.FragTrap::getMax_hit_points());
	FragTrap::setEnergy_points(copy.FragTrap::getEnergy_points());
	FragTrap::setMax_energy(copy.FragTrap::getMax_energy());
	FragTrap::setLevel(copy.FragTrap::getLevel());
	FragTrap::setName(copy.FragTrap::getName());
	FragTrap::setM_attack(copy.FragTrap::getM_attack());
	FragTrap::setR_attack(copy.FragTrap::getR_attack());
	FragTrap::setArmor_damage(copy.FragTrap::getArmor_damage());

	std::cout << "Copy costructor SuperTrap called" << std::endl;
}

SuperTrap::~SuperTrap(void) 
{
	std::cout << "Destructor SuperTrap called" << std::endl;
}

SuperTrap& SuperTrap::operator = (SuperTrap &copy)
{
	FragTrap::setHit_points(copy.FragTrap::getHit_points());
	FragTrap::setMax_hit_points(copy.FragTrap::getMax_hit_points());
	FragTrap::setEnergy_points(copy.FragTrap::getEnergy_points());
	FragTrap::setMax_energy(copy.FragTrap::getMax_energy());
	FragTrap::setLevel(copy.FragTrap::getLevel());
	FragTrap::setName(copy.FragTrap::getName());
	FragTrap::setM_attack(copy.FragTrap::getM_attack());
	FragTrap::setR_attack(copy.FragTrap::getR_attack());
	FragTrap::setArmor_damage(copy.FragTrap::getArmor_damage());

	std::cout << "Equal operator called" << std::endl;
	return (*this);
}

