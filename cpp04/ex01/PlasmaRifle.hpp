/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:32:30 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 16:01:09 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
public:
	PlasmaRifle(/* args */);
	PlasmaRifle(PlasmaRifle const &copy);
	PlasmaRifle &operator = (PlasmaRifle const &op);
	virtual ~PlasmaRifle();
	void	attack() const;
};

