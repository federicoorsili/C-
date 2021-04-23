/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:56:04 by forsili           #+#    #+#             */
/*   Updated: 2021/04/23 14:16:03 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony *pony = new Pony();

	pony->set_nzampe(5);
	pony->set_colore_criniera("mora");
	pony->set_montabile(false);
	pony->stampa();
	pony->run();
	delete pony;

}

void	ponyOnTheStack(void)
{
	Pony pony;

	pony.set_nzampe(4);
	pony.set_colore_criniera("bionda");
	pony.set_montabile(true);
	pony.stampa();
	pony.run();
}

int		main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
}