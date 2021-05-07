/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:33:17 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 15:31:28 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Enemy
{
protected:
	int			hp;
	std::string	type;
	Enemy(/* args */);
public:
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &copy);
	Enemy &operator = (Enemy const &op);
	virtual ~Enemy();
	int				getHp() const;
	std::string		getType() const;
	virtual void	takeDamage(int d);
};

