/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:49:38 by forsili           #+#    #+#             */
/*   Updated: 2021/04/26 12:10:40 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA
{
	private:
	
		std::string name;
		Weapon	&weapon;

	public:
		
		HumanA(std::string	input_name, Weapon &input_weapon);
		void	setName(std::string	input);
		void	setWeapon(Weapon input);
		void	attack(void);

};