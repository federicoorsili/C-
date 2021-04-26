/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 12:03:45 by forsili           #+#    #+#             */
/*   Updated: 2021/04/26 18:01:34 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include "Zombie.hpp"

class	ZombieHorde
{
	private:

		int		n;
		Zombie **zombie;

	public:

		ZombieHorde(int n);
		~ZombieHorde(void);

		void	announce(void);
};
