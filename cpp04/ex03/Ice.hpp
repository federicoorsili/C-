/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:48:21 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 12:11:14 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
	
		Ice();
		Ice(Ice const &copy);
		~Ice();
		Ice& operator=(Ice const& copy);
		AMateria* clone() const;
		void use(ICharacter& target);

};

