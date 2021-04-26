/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:36:52 by forsili           #+#    #+#             */
/*   Updated: 2021/04/26 11:54:07 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string input)
{
	this->type = input;
}

void	Weapon::setType(std::string input)
{
	this->type = input;
}

std::string	&Weapon::getType(void)
{
	std::string	&tmp = this->type;
	return (tmp);
}