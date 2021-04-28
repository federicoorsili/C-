/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:36:04 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 16:02:11 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

	public:

		SuperTrap(std::string name);
		SuperTrap(SuperTrap &copy);
		~SuperTrap(void);
		SuperTrap& operator = (SuperTrap &copy); //aggiungi
		

};