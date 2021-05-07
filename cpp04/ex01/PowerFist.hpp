/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:32:54 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 16:01:00 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
public:
	PowerFist(/* args */);
	PowerFist(PowerFist const &copy);
	PowerFist &operator = (PowerFist const &op);
	virtual ~PowerFist();
	void	attack() const;
};