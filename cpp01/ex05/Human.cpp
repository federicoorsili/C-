/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 12:20:05 by forsili           #+#    #+#             */
/*   Updated: 2021/04/26 17:14:57 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) 
{
	srand(time(NULL));
	this->age = 0 + rand() % (( 100 + 1 ) - 0);
	this->qi = 0 + rand() % (( 100 + 1 ) - 0);
}

void	Human::set_age(int input)
{
	this->age = input;
}

void	Human::set_qi(int input)
{
	this->qi = input;
}

Brain	const &Human::getBrain(void)
{
	Brain const &ref = this->brain;
	return (ref);
}

std::string	Human::identify(void)
{
	return this->brain.identify();
}