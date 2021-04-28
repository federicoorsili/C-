/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 23:04:39 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 23:38:53 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "GeneralVictim.hpp"

class Peon : public GeneralVictim
{
	public:
		Peon(std::string name);
		Peon(Peon const &copy);
		~Peon(void);
		Peon operator = (Peon const &copy);
		void getPolymorphed(void) const;

};

std::ostream& operator << (std::ostream& out, Peon const &copy);