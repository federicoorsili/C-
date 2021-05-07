/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:33:38 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 16:10:37 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:
public:
	SuperMutant(/* args */);
	SuperMutant(SuperMutant const &copy);
	SuperMutant &operator = (SuperMutant const &op);
	virtual ~SuperMutant();
	void	takeDamage(int d);
};

