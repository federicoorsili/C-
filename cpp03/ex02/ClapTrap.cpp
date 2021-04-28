/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 14:31:21 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 14:41:02 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->hit_points = 0;
	this->max_hit_points = 0;
	this->energy_points = 0;
	this->max_energy = 0;
	this->Level = 0;
	this->name = "Unanmed";
	this->m_attack = 0;
	this->r_attack = 0;
	this->armor_damage = 0;

	std::cout << "Default costructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	this->hit_points = copy.hit_points;
	this->max_hit_points = copy.max_hit_points;
	this->energy_points = copy.energy_points;
	this->max_energy = copy.max_energy;
	this->Level = copy.Level;
	this->name = copy.name;
	this->m_attack = copy.m_attack;
	this->r_attack = copy.r_attack;
	this->armor_damage = copy.armor_damage;

	std::cout << "Copy costructor ClapTrap called" << std::endl;
}

ClapTrap::~ClapTrap(void) 
{
	std::cout << "Destructor ClapTrap called" << std::endl;
}

void	ClapTrap::rangedAttack(std::string &target)
{
	std::cout << "FR4G-TP <" << this->name << "> ";
	std::cout << "attacks <" << target << "> at range,";
	std::cout << " causing <" << this->r_attack;
	std::cout << "> points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string &target)
{
	std::cout << "FR4G-TP <" << this->name << "> ";
	std::cout << "attacks <" << target << "> in melee,";
	std::cout << " causing <" << this->m_attack;
	std::cout << "> points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int ammount)
{
	if ((int)(ammount) < this->armor_damage)
	{
		std::cout << "FR4G-TP <" << this->name << "> ";
		std::cout << "take <0";
		std::cout << "> points of damage!" << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP <" << this->name << "> ";
		std::cout << "take <" << ammount - this->armor_damage;
		std::cout << "> points of damage!" << std::endl;
		this->hit_points -= ammount - this->armor_damage;
	}
}

void	ClapTrap::beRepaired(unsigned int ammount)
{
	std::cout << "FR4G-TP <" << this->name << "> ";
	std::cout << "have been cured, he earns <" << ammount;
	std::cout << "> points of healt!" << std::endl;

	if (this->hit_points + ammount >= 100)
		this->hit_points = 100;
	else
		this->hit_points += ammount;
}

ClapTrap& ClapTrap::operator = (ClapTrap const &copy)
{
	this->hit_points = copy.hit_points;
	this->max_hit_points = copy.max_hit_points;
	this->energy_points = copy.energy_points;
	this->Level = copy.Level;
	this->name = copy.name;
	this->m_attack = copy.m_attack;
	this->r_attack = copy.r_attack;
	this->armor_damage = copy.armor_damage;

	std::cout << "Equal operator called" << std::endl;
	return (*this);
}

int		ClapTrap::getMeleeAttack(void)
{
	return this->m_attack;
}

int		ClapTrap::getRangeAttack(void)
{
	return this->r_attack;
}

int ClapTrap::getHit_points() {
	return this->hit_points;
}
void ClapTrap::setHit_points(int hit_points) {
	this->hit_points = hit_points;
}
int ClapTrap::getMax_hit_points() {
	return this->max_hit_points;
}
void ClapTrap::setMax_hit_points(int max_hit_points) {
	this->max_hit_points = max_hit_points;
}
int ClapTrap::getEnergy_points() {
	return this->energy_points;
}
void ClapTrap::setEnergy_points(int energy_points) {
	this->energy_points = energy_points;
}
int ClapTrap::getLevel() {
	return this->Level;
}
void ClapTrap::setLevel(int Level) {
	this->Level = Level;
}
std::string ClapTrap::getName() {
	return this->name;
}
void ClapTrap::setName(std::string name) {
	this->name = name;
}
int ClapTrap::getM_attack() {
	return this->m_attack;
}
void ClapTrap::setM_attack(int m_attack) {
	this->m_attack = m_attack;
}
int ClapTrap::getR_attack() {
	return this->r_attack;
}
void ClapTrap::setR_attack(int r_attack) {
	this->r_attack = r_attack;
}
int ClapTrap::getArmor_damage() {
	return this->armor_damage;
}
void ClapTrap::setArmor_damage(int armor_damage) {
	this->armor_damage = armor_damage;
}
int ClapTrap::getMax_energy() {
	return this->max_energy;
}
void ClapTrap::setMax_energy(int max_energy) {
	this->max_energy = max_energy;
}