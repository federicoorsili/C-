/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 12:06:19 by forsili           #+#    #+#             */
/*   Updated: 2021/04/26 18:37:37 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{

	std::string	name_pool[5] = {"Mario", "Lillo", "Pippo", "Pluto", "Paolo"};
	std::string	type_pool[5] = {"Grasso", "Magro", "Zoppo", "Alto", "Gigante"};
	int			name;
	int			type;

	this->n = n;
	this->zombie = new Zombie *[n];
	srand(time(NULL));
	for (int i = 0; i < this->n; i++)
	{
		zombie[i] = new Zombie();
		name = 0 + rand() % (( 4 + 1 ) - 0);
		type = 0 + rand() % (( 4 + 1 ) - 0);
		this->zombie[i]->set_name(name_pool[name]);
		this->zombie[i]->set_type(type_pool[type]);
	}

}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->n; i++)
	{
		this->zombie[i]->announce();
	}
}

ZombieHorde::~ZombieHorde(void)
{
	for (int i = 0; i < n; i++)
	{
		delete(this->zombie[i]);
	}
	delete(this->zombie);
}

