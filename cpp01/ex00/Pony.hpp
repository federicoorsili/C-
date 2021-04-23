/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:55:54 by forsili           #+#    #+#             */
/*   Updated: 2021/04/23 14:22:01 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <unistd.h>

class Pony {

	private:

		int			nzampe;
		std::string	colore_criniera;
		bool		montabile;
		int			position;

	public:
		//Costruttore
		Pony(void);
		//Mertodi setter
		void		set_nzampe(int input);
		void		set_colore_criniera(std::string input);
		void		set_montabile(bool input);
		//Metodi getter
		int			get_nzampe();
		std::string	get_colore_criniera();
		bool		get_monatbile();
		void		stampa(void);

		void		run(void);

};