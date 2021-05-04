/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:20:43 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 11:24:29 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "ISquad.hpp"

class Squad : public ISquad
{
	private:

		ISpaceMarine *array[100];

	public:
		
		//Canonical
		Squad();
		Squad(Squad const &copy);
		~Squad();
		Squad& operator=(Squad const & copy);

		int getCount(void) const;
		ISpaceMarine*	getUnit(int) const;
		int	push(ISpaceMarine *unit);
		
};