/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:58:04 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 11:34:57 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine: public virtual ISpaceMarine
{

	public:
		TacticalMarine();
		TacticalMarine(TacticalMarine const &copy);
		~TacticalMarine();
		TacticalMarine& operator=(TacticalMarine const &copy);
		ISpaceMarine*	clone() const;
		void	battleCry() const;
		void	rangedAttack() const;
		void	meleeAttack() const;

};

