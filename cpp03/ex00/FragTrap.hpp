/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 15:34:11 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 13:08:52 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class FragTrap {

	private:

		int hit_points;
		int max_hit_points;
		int energy_points;
		int max_energy;
		int Level;
		std::string name;
		int m_attack;
		int r_attack;
		int armor_damage;

	public:

		FragTrap(std::string name);
		FragTrap(FragTrap const &copy);
		~FragTrap(void);
		FragTrap& operator = (FragTrap const &copy); //aggiungi
		
		void	rangedAttack(std::string &target);
		void	meleeAttack(std::string &target);
		unsigned int	vaulthunter_dot_exe(std::string const & target);
		void	takeDamage(unsigned int ammount);
		void	beRepaired(unsigned int ammount);
		int		getMeleeAttack(void);
		int		getRangeAttack(void);
		int		getHit_points();
		void	setHit_points(int hit_points);
		int		getMax_hit_points();
		void	setMax_hit_points(int max_hit_points);
		int		getEnergy_points();
		void	setEnergy_points(int energy_points);
		int		getLevel();
		void	setLevel(int Level);
		std::string		getName();
		void	setName(std::string name);
		int		getM_attack();
		void	setM_attack(int m_attack);
		int		getR_attack();
		void	setR_attack(int r_attack);
		int		getArmor_damage();
		void	setArmor_damage(int armor_damage);
		int		getMax_energy();
		void	setMax_energy(int max_energy);



};