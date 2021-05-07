/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:36:12 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 16:17:07 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string		name;
	int				ap;
	AWeapon			*weapon;
	Character(/* args */);
public:
	Character(std::string const &name);
	Character(Character const &copy);
	Character &operator = (Character const &op);
	~Character();
	std::string	getName() const;
	int			getAp() const;
	AWeapon		*getWeapon() const;
	void		recoverAP();
	void		equip(AWeapon *w);
	void		attack(Enemy *e);
};

std::ostream	&operator << (std::ostream &out, Character const &c);

