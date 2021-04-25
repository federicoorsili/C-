/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 12:20:05 by forsili           #+#    #+#             */
/*   Updated: 2021/04/25 12:37:07 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) 
{
	srand(time(NULL));
	this->age = 0 + rand() % (( 100 + 1 ) - 0);
	this->qi = 0 + rand() % (( 100 + 1 ) - 0);
	this->make_brain();
}

void	Human::set_age(int input)
{
	this->age = input;
}

void	Human::set_qi(int input)
{
	this->qi = input;
}

void	Human::make_brain(void)
{
	Brain tmp;

	tmp.set_age(this->age);
	tmp.set_qi(this->qi);
	tmp.set_address(tmp);
	this->brain = tmp;
}

Brain	Human::getBrain(void)
{
	return (this->brain);
}

Brain	*Human::identify(void)
{
	return (this->brain.identify());
}