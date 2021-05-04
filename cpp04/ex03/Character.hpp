/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:13:33 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 13:02:22 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "ICharacter.hpp"

class Character: public virtual ICharacter
{
	private:

		std::string	name;
		AMateria *inventory[4];

	public:
		Character();
		Character(std::string name);
		Character(Character const& copy);
		~Character();
		Character& operator=(Character const& copy);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};