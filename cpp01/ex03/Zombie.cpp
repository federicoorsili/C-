/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 10:52:12 by forsili           #+#    #+#             */
/*   Updated: 2021/04/26 18:00:51 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "";
	this->type = "";
};
//SETTER
void	Zombie::set_name(std::string input)
{
	this->name = input;
}

void	Zombie::set_type(std::string input)
{
	this->type = input;
}
//GETTER
std::string		Zombie::get_name()
{
	return(this->name);
}

std::string		Zombie::get_type()
{
	return (this->type);
}

void			Zombie::announce(void)
{
	std::cout << "<" << this->name << "(" << this->type << ")>";
	std::cout << "Braiiiiinssssss..." << std::endl;
}
