/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 12:16:47 by forsili           #+#    #+#             */
/*   Updated: 2021/04/26 17:14:24 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Brain.hpp"

class Human
{
	private:

		int age;
		int qi;
		Brain	const brain;

	public:

		Human(void);

		void	set_age(int input);
		void	set_qi(int input);
		
		Brain	const &getBrain(void);
		std::string	identify(void);
};
