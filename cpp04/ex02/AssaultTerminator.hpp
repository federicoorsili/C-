/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:15:50 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 11:23:02 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{

	public:
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const &copy);
		~AssaultTerminator();
		AssaultTerminator& operator=(AssaultTerminator const &copy);
		ISpaceMarine*	clone() const;
		void	battleCry() const;
		void	rangedAttack() const;
		void	meleeAttack() const;

};
