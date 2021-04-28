/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 22:50:54 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 23:17:04 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
	private:
		std::string name;
		std::string type;
	public:
		Sorcerer(std::string name, std::string type);
		Sorcerer(Sorcerer const &copy);
		~Sorcerer();
		Sorcerer operator = (Sorcerer const &copy);
		
		void	polymorph(Victim const &v) const;
		void	polymorph(Peon const &v) const;
		std::string	getName(void);
		std::string getType(void);

};

std::ostream& operator << (std::ostream& out,Sorcerer &s);
