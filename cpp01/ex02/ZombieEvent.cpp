/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 11:02:12 by forsili           #+#    #+#             */
/*   Updated: 2021/04/24 11:16:27 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	this->type = "";
}

void	ZombieEvent::setZombieType(std::string input)
{
	this->type = input;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie();

	zombie->set_name(name);
	zombie->set_type(this->type);

	return (zombie);
}

void	ZombieEvent::randomChump(void)
{
	Zombie 		zombie;
	std::string	name_pool[5] = {"Mario", "Lillo", "Pippo", "Pluto", "Paolo"};
	std::string	type_pool[5] = {"Grasso", "Magro", "Zoppo", "Alto", "Gigante"};
	int			name;
	int			type;

	srand(time(NULL));
	name =	0 + rand() % (( 4 + 1 ) - 0);
	type = 0 + rand() % (( 4 + 1 ) - 0);
	zombie.set_name(name_pool[name]);
	zombie.set_type(type_pool[type]);
	zombie.announce();
}