/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:02:42 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 16:45:13 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{

	public:

		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap &copy);
		~NinjaTrap(void);
		NinjaTrap& operator = (NinjaTrap &copy); //aggiungi
		
		void	ninjaShoebox(ClapTrap &target);
};

