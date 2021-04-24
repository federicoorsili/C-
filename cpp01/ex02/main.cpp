/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 11:20:30 by forsili           #+#    #+#             */
/*   Updated: 2021/04/24 11:29:30 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void)
{
	std::string	input;
	std::string	resp;
	Zombie		*zombie;
	ZombieEvent zombie_factory;

	while (1)
	{
		std::cout << "Di che tipo è lo zombie?" << std::endl;
		getline(std::cin, input);
		zombie_factory.setZombieType(input);
		std::cout << "Come si chiama lo zombie?" << std::endl;
		getline(std::cin, input);
		std::cout << "Vuoi creare uno zombie random? (y/n/exit)" << std::endl;
		getline(std::cin, resp);
		if (!resp.compare("y"))
			zombie_factory.randomChump();
		else if (!resp.compare("exit"))
			exit(0);
		zombie = zombie_factory.newZombie(input);
		zombie->announce();
		delete(zombie);
	}

}