/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:56:01 by forsili           #+#    #+#             */
/*   Updated: 2021/04/23 15:55:19 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
	this->nzampe = 0;
	this->colore_criniera = "";
	this->montabile = true;
	this->position = 0;
}

void	Pony::set_nzampe(int input)
{
	nzampe = input;
}

void	Pony::set_colore_criniera(std::string input)
{
	colore_criniera = input;
}

void	Pony::set_montabile(bool input)
{
	montabile = input;
}

		//Metodi getter

int		Pony::get_nzampe()
{
	return (nzampe);
}

std::string	Pony::get_colore_criniera()
{
	return (colore_criniera);
}

bool		Pony::get_monatbile()
{
	return (montabile);
}

void		Pony::stampa(void)
{
	std::cout << "NZAMPE: " << this->get_nzampe() << std::endl;
	std::cout << "CRINIERA: " << this->get_colore_criniera() << std::endl;
	std::cout << "MONTABILE: " << this->get_monatbile() << std::endl;
}

void		Pony::run(void)
{
	int i;
	int len;
	std::string	str;

	std::cout << "Quanto vuoi che corra il cavallo?" << std::endl;
	std::getline(std::cin, str);

	len = stoi(str);
	while (this->position < len)
	{
		for (i = 0; i < len; i++)
		{
			if (i == len - 1 && this->position != len - 1)
				std::cout << "\U0001F3C1";
			else if (i != this->position)
				std::cout << "_";
			else
				std::cout << "\U0001F3C2";
		}
		std::cout << std::endl;
		this->position++;
		usleep(200000);
		std::cout << "\033[A\033[2K";
	}
}
