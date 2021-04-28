/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GeneralVictim.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 23:26:48 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 23:29:07 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class GeneralVictim
{
	protected:
		
		std::string name;

	public:
		GeneralVictim(std::string name);
		GeneralVictim(GeneralVictim const &copy);
		~GeneralVictim(void);
		GeneralVictim operator = (GeneralVictim const &copy);
		std::string getName(void) const;

};
