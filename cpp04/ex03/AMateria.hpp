/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:44:18 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 13:01:52 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
	
		unsigned int _xp;
		std::string	type;
	
	public:
		
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const &copy);
		virtual	~AMateria();
		AMateria& operator=(AMateria const &copy);
		
		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};