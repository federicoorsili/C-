/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:51:58 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 12:56:31 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
	
		Cure();
		Cure(Cure const &copy);
		~Cure();
		Cure& operator=(Cure const& copy);
		AMateria* clone() const;
		void use(ICharacter& target);

};