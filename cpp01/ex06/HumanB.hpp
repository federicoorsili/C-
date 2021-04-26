/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:00:35 by forsili           #+#    #+#             */
/*   Updated: 2021/04/26 12:11:16 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
	private:
	
		std::string name;
		Weapon	*weapon;

	public:
		
		HumanB(std::string	name);
		void	setName(std::string	input);
		void	setWeapon(Weapon &input);
		void	attack(void);

};