/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:05:12 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 15:41:22 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
{
	setHit_points(60);
	setMax_hit_points(60);
	setEnergy_points(120);
	setMax_energy(120);
	setLevel(1);
	setName(name);
	setM_attack(60);
	setR_attack(5);
	setArmor_damage(0);

	std::cout << "Default costructor NinjaTrap called" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap &copy)
{
	setHit_points(copy.getHit_points());
	setMax_hit_points(copy.getMax_hit_points());
	setEnergy_points(copy.getEnergy_points());
	setMax_energy(copy.getMax_energy());
	setLevel(copy.getLevel());
	setName(copy.getName());
	setM_attack(copy.getM_attack());
	setR_attack(copy.getR_attack());
	setArmor_damage(copy.getArmor_damage());

	std::cout << "Copy costructor NinjaTrap called" << std::endl;
}

NinjaTrap::~NinjaTrap(void) 
{
	std::cout << "Destructor NinjaTrap called" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << target.getName() << " viene attaccato furtivamente da " << getName() << std::endl;
}

NinjaTrap& NinjaTrap::operator = (NinjaTrap &copy)
{
	setHit_points(copy.getHit_points());
	setMax_hit_points(copy.getMax_hit_points());
	setEnergy_points(copy.getEnergy_points());
	setMax_energy(copy.getMax_energy());
	setLevel(copy.getLevel());
	setName(copy.getName());
	setM_attack(copy.getM_attack());
	setR_attack(copy.getR_attack());
	setArmor_damage(copy.getArmor_damage());

	std::cout << "Equal operator called" << std::endl;
	return (*this);
}
