/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 10:35:46 by forsili           #+#    #+#             */
/*   Updated: 2021/04/24 10:57:58 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class	Zombie
{
	private:

		std::string name;
		std::string	type;
	
	public:

		Zombie(void);
		//SETTER
		void	set_name(std::string input);
		void	set_type(std::string input);
		//GETTER
		std::string		get_name();
		std::string		get_type();
		void			announce(void);
};