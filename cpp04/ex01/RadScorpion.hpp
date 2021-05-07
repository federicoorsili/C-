/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:35:46 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 16:10:21 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:
public:
	RadScorpion(/* args */);
	RadScorpion(RadScorpion const &copy);
	RadScorpion &operator = (RadScorpion const &op);
	virtual ~RadScorpion();
	void	takeDamage(int d);
};