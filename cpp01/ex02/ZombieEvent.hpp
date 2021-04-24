/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 10:57:23 by forsili           #+#    #+#             */
/*   Updated: 2021/04/24 11:13:35 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Zombie.hpp"
#include <cstdlib>
#include <ctime>

class ZombieEvent
{
	private:

		std::string type;
	
	public:

		ZombieEvent(void);
		
		void	setZombieType(std::string input);
		Zombie	*newZombie(std::string name);
		void	randomChump(void);
};