/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:31:33 by forsili           #+#    #+#             */
/*   Updated: 2021/05/04 13:25:26 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMaterialSource.hpp"

class MateriaSource: public virtual IMateriaSource
{
	private:

		AMateria	*stored[4];

	public:

		MateriaSource();
		MateriaSource(MateriaSource const& copy);
		~MateriaSource();
		MateriaSource operator=(MateriaSource const& copy);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};