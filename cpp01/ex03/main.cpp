/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 12:48:35 by forsili           #+#    #+#             */
/*   Updated: 2021/04/26 18:02:57 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
	int		n;
	std::string	input;

	std::cout << "Inserisci numero di zombie:" << std::endl;
	getline(std::cin, input);
	if (input.find_first_not_of("0123456789") == std::string::npos)
	{
		n = stoi(input);
		ZombieHorde h = ZombieHorde(n);
		h.announce();
	}
	else
		std::cout << "Not a valid number" << std::endl;
}