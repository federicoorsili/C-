/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 16:51:13 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 13:26:38 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap	attaccante("mario"); 
	FragTrap	difensore("lillo");
	std::string	tmp;

	tmp = difensore.getName();
	attaccante.meleeAttack(tmp);
	difensore.takeDamage(attaccante.getMeleeAttack());
	tmp = attaccante.getName();
	difensore.rangedAttack(tmp);
	attaccante.takeDamage(difensore.getRangeAttack());
	std::cout << attaccante.getName() << " has HP: " << attaccante.getHit_points() << std::endl;
	std::cout << difensore.getName() << " has HP: " << difensore.getHit_points() << std::endl;
	attaccante.takeDamage(difensore.vaulthunter_dot_exe(attaccante.getName()));
	attaccante.takeDamage(difensore.vaulthunter_dot_exe(attaccante.getName()));
	attaccante.takeDamage(difensore.vaulthunter_dot_exe(attaccante.getName()));
	attaccante.takeDamage(difensore.vaulthunter_dot_exe(attaccante.getName()));
	attaccante.takeDamage(difensore.vaulthunter_dot_exe(attaccante.getName()));
	attaccante.takeDamage(difensore.vaulthunter_dot_exe(attaccante.getName()));
	attaccante.challengeNewcomer(difensore.getName());
	attaccante.challengeNewcomer(difensore.getName());
	attaccante.challengeNewcomer(difensore.getName());
	attaccante.challengeNewcomer(difensore.getName());
}