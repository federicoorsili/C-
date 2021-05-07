/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vampire.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:12:32 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 16:29:36 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vampire.hpp"

Vampire::Vampire() : Enemy(75, "Vampire")
{
	std::cout << "I need blooood...!" << std::endl;
}

Vampire::Vampire(Vampire const &copy) : Enemy(copy) {}

Vampire	&Vampire::operator = (Vampire const &op)
{
	Enemy::operator=(op);
	return (*this);
}

Vampire::~Vampire()
{
	std::cout << "AAAAHHHH!!! My heart..." << std::endl;
}

void		Vampire::takeDamage(int d)
{
	Enemy::takeDamage(d);
}