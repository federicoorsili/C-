/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:34:20 by forsili           #+#    #+#             */
/*   Updated: 2021/04/26 11:54:02 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class	Weapon
{
	private:

		std::string	type;

	public:

		Weapon(std::string	input);
		void	setType(std::string input);
		std::string	&getType(void);
		
};