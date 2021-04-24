/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:04:10 by forsili           #+#    #+#             */
/*   Updated: 2021/04/24 13:13:03 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main()
{
	std::string stringa = "HI THIS IS A BRAIN";
	std::string	*puntatore = &stringa;
	std::string	&reference = stringa;

	std::cout << "Stringa: " << stringa << std::endl;
	std::cout << "Puntatore: " << *puntatore << std::endl;
	std::cout << "Reference: " << reference << std::endl;
}