/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 12:16:47 by forsili           #+#    #+#             */
/*   Updated: 2021/04/25 12:35:28 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Brain.hpp"

class Human
{
	private:

		int age;
		int qi;
		Brain	brain;

	public:

		Human(void);

		void	set_age(int input);
		void	set_qi(int input);

		void	make_brain(void);
		Brain	getBrain(void);
		Brain	*identify(void);

};