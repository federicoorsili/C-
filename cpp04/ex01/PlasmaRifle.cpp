/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:32:39 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 16:08:34 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("PlasmaRifle", 21, 5)	{}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy) : AWeapon(copy)	{}

PlasmaRifle	&PlasmaRifle::operator = (PlasmaRifle const &op)
{
	AWeapon::operator=(op);
	return (*this);
}

PlasmaRifle::~PlasmaRifle()	{}

void			PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}