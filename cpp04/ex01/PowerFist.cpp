/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:33:05 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 16:08:43 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8)	{}

PowerFist::PowerFist(PowerFist const &copy) : AWeapon(copy)	{}

PowerFist	&PowerFist::operator = (PowerFist const &op)
{
	AWeapon::operator=(op);
	return (*this);
}

PowerFist::~PowerFist()	{}

void			PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
