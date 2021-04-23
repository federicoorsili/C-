/* ************************************************************************** */
/*                                                                          */
/*                                                        :::      ::::::::   */
/*   Phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:09:31 by forsili           #+#    #+#             */
/*   Updated: 2021/04/22 16:46:43 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone_Book.hpp"

Phone_Book::Phone_Book()
{
	std::string input;

	input = "";

	first_name = input;
	last_name = input;
	nickname = input;
	login = input;
	postal_address = input;
	email_address = input;
	phone_number = input;
	birthday_date = input;
	favorite_meal = input;
	underwear_color = input;
	darkest_secret = input;
};

void		Phone_Book::add_field(int id, std::string input)
{
	if (id == 0)
		first_name = input;
	else if (id == 1)
		last_name = input;
	else if (id == 2)
		nickname = input;
	else if (id == 3)
		login = input;
	else if (id == 4)
		postal_address = input;
	else if (id == 5)
		email_address = input;
	else if (id == 6)
		phone_number = input;
	else if (id == 7)
		birthday_date = input;
	else if (id == 8)
		favorite_meal = input;
	else if (id == 9)
		underwear_color = input;
	else if (id == 10)
		darkest_secret = input;
}

std::string	Phone_Book::take_field(int id)
{
	if (id == 0)
		return (first_name);
	else if (id == 1)
		return (last_name);
	else if (id == 2)
		return (nickname);
	else if (id == 3)
		return (login);
	else if (id == 4)
		return (postal_address);
	else if (id == 5)
		return (email_address);
	else if (id == 6)
		return (phone_number);
	else if (id == 7)
		return (birthday_date);
	else if (id == 8)
		return (favorite_meal);
	else if (id == 9)
		return (underwear_color);
	else if (id == 10)
		return (darkest_secret);
	return (NULL);
}