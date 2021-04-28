/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 15:34:11 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 14:53:41 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:

		FragTrap(std::string name);
		FragTrap(FragTrap &copy);
		~FragTrap(void);
		FragTrap& operator = (FragTrap &copy); //aggiungi
		
		unsigned int	vaulthunter_dot_exe(std::string const & target);

};