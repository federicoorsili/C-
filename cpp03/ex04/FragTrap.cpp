/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 15:57:38 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 14:53:26 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	setHit_points(100);
	setMax_hit_points(100);
	setEnergy_points(100);
	setMax_energy(100);
	setLevel(1);
	setName(name);
	setM_attack(30);
	setR_attack(20);
	setArmor_damage(5);

	std::cout << "Default costructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(FragTrap &copy)
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

	std::cout << "Copy costructor FragTrap called" << std::endl;
}

FragTrap::~FragTrap(void) 
{
	std::cout << "Destructor FragTrap called" << std::endl;
}

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string pool_s[5] = {"Spadata", "Pugnalata", "Sparo", "Cannonata", "Spugna"};
	int			pool_d[5] = {10, 7, 20, 50, 1};
	int			rand;

	if (getEnergy_points() - 25 < 0)
	{
		std::cout << "Not enought energy to vaulthuder" << std::endl;
		return (0);
	}
	this->setEnergy_points(this->getEnergy_points() - 25);
	rand = random() % 5;
	std::cout << "<" << this->getName() << "> Attack <" << target;
	std::cout << "> with <" << pool_s[rand] << ">";
	std::cout << " causing <" << pool_d[rand] << "> damege" << std::endl;
	return pool_d[rand];
}

FragTrap& FragTrap::operator = (FragTrap &copy)
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

