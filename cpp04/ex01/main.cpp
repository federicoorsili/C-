/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:36:31 by aduregon          #+#    #+#             */
/*   Updated: 2021/05/06 16:30:32 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Vampire.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Stake.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* a = new SuperMutant();
	Enemy* b = new RadScorpion();
	Enemy* c = new Vampire();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* ps = new Stake();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->equip(ps);
	me->attack(c);
	std::cout << *me;
	delete pr;
	delete ps;
	delete pf;
	delete a;
	delete b;
	delete me;
	return 0;
}