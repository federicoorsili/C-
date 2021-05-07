/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:32:02 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 12:54:08 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AWeapon
{
protected:
	std::string	name;
	int			damage;
	int 		apcost;
	AWeapon(/* args */);
public:
	AWeapon(std::string const &n, int d, int a);
	AWeapon(AWeapon const &copy);
	AWeapon &operator = (AWeapon const &op);
	virtual ~AWeapon();
	std::string		getName() const;
	int				getDamage() const;
	int				getApcost() const;
	virtual void	attack() const = 0;
};

