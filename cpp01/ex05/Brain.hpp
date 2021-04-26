/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 12:03:41 by forsili           #+#    #+#             */
/*   Updated: 2021/04/26 16:02:17 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <sstream>
#include <iostream>

class Brain 
{
	private:

		int age;
		int qi;

	public:

		Brain(void);
		void	set_age(int input);
		void	set_qi(int input);

		int get_age(void);
		int	get_qi(void);
		std::string identify(void);


};
