/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stake.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:16:18 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 16:16:39 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AWeapon.hpp"

class Stake : public AWeapon
{
private:
public:
	Stake(/* args */);
	Stake(Stake const &copy);
	Stake &operator = (Stake const &op);
	virtual ~Stake();
	void	attack() const;
};
