/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 12:03:41 by forsili           #+#    #+#             */
/*   Updated: 2021/04/25 12:36:46 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Brain 
{
	private:

		int age;
		int qi;
		Brain		*address;

	public:

		Brain(void);
		void	set_age(int input);
		void	set_qi(int input);
		void	set_address(Brain input);

		int get_age(void);
		int	get_qi(void);
		Brain	*identify(void);


};
