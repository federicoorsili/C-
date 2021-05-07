/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vampire.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:12:37 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 16:12:56 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Enemy.hpp"

class Vampire : public Enemy
{
private:
public:
	Vampire(/* args */);
	Vampire(Vampire const &copy);
	Vampire &operator = (Vampire const &op);
	virtual ~Vampire();
	void	takeDamage(int d);
};