/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:10:18 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 14:57:58 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	setHit_points(100);
	setMax_hit_points(100);
	setEnergy_points(50);
	setMax_energy(50);
	setLevel(1);
	setName(name);
	setM_attack(20);
	setR_attack(15);
	setArmor_damage(3);

	std::cout << "Default costructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy)
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

	std::cout << "Copy costructor ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap(void) 
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string pool_s[5] = {"Gara di ballo", "Partita di tennis", "calcetto", "basket", "rugby"};
	int			rand;

	if (getEnergy_points() - 25 < 0)
	{
		std::cout << "Not enought energy to challenger" << std::endl;
		return ;
	}
	this->setEnergy_points(this->getEnergy_points() - 25);
	rand = random() % 5;
	std::cout << "<" << this->getName() << "> Challenged <" << target;
	std::cout << "> at <" << pool_s[rand] << ">" << std::endl;
	return ;
}

ScavTrap& ScavTrap::operator = (ScavTrap &copy)
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