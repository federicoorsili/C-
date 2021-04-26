/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 12:06:19 by forsili           #+#    #+#             */
/*   Updated: 2021/04/26 16:29:06 by forsili          ###   ########.fr       */
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
	this->zombie = new Zombie[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		name = 0 + rand() % (( 4 + 1 ) - 0);
		type = 0 + rand() % (( 4 + 1 ) - 0);
		this->zombie[i].set_name(name_pool[name]);
		this->zombie[i].set_type(type_pool[type]);
		this->zombie[i].announce();
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete(this->zombie);
}

