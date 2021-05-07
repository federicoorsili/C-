/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stake.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:16:14 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 16:23:08 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Stake.hpp"

Stake::Stake() : AWeapon("Stake", 75, 5)	{}

Stake::Stake(Stake const &copy) : AWeapon(copy)	{}

Stake	&Stake::operator = (Stake const &op)
{
	AWeapon::operator=(op);
	return (*this);
}

Stake::~Stake()	{}

void			Stake::attack() const
{
	std::cout << "* ZZZZAAAACCCC *" << std::endl;
}