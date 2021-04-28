/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:05:27 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 14:57:11 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {	

	public:

		ScavTrap(std::string name);
		ScavTrap(ScavTrap &copy);
		~ScavTrap(void);
		ScavTrap& operator = (ScavTrap &copy); //aggiungi
		
		void	challengeNewcomer(std::string const & target);

};