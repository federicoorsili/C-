/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <aduregon@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:33:25 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/05 15:31:22 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()	{}

Enemy::Enemy(int hp, std::string const &type)
{
	this->hp = hp;
	this->type = type;
}

Enemy::Enemy(Enemy const &copy)
{
	this->hp = copy.hp;
	this->type = copy.hp;
}

Enemy	&Enemy::operator = (Enemy const &op)
{
	this->hp = op.getHp();
	this->type = op.getType();
	return (*this);
}

Enemy::~Enemy()	{}

int				Enemy::getHp() const
{
	return (this->hp);
}

std::string		Enemy::getType() const
{
	return (this->type);
}

void			Enemy::takeDamage(int d)
{
	if (d < 0)
		return ;
	this->hp -= d;
	if (this->hp < 0)
		this->hp = 0;
}