/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 23:04:12 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 23:38:44 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "GeneralVictim.hpp"

class Victim : public GeneralVictim
{
	public:
		Victim(std::string name);
		Victim(Victim const &copy);
		~Victim(void);
		Victim operator = (Victim const &copy);
		void getPolymorphed(void) const;

};

std::ostream& operator << (std::ostream& out, Victim const &copy);
