/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 12:03:45 by forsili           #+#    #+#             */
/*   Updated: 2021/04/24 12:47:01 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include "Zombie.hpp"

class	ZombieHorde
{
	private:

		int		n;
		std::vector <Zombie*> zombie;

	public:

		ZombieHorde(int n);
		~ZombieHorde(void);
};
