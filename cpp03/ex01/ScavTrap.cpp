/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:10:18 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 13:27:15 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 50;
	this->max_energy = 50;
	this->Level = 1;
	this->name = name;
	this->m_attack = 20;
	this->r_attack = 15;
	this->armor_damage = 3;

	std::cout << "Default costructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
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

	std::cout << "Copy costructor ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap(void) 
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}

void	ScavTrap::rangedAttack(std::string &target)
{
	std::cout << "SGT4G-TP <" << this->name << "> ";
	std::cout << "attacks <" << target << "> at range,";
	std::cout << " causing <" << this->r_attack;
	std::cout << "> points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string &target)
{
	std::cout << "SGT4G-TP <" << this->name << "> ";
	std::cout << "attacks <" << target << "> in melee,";
	std::cout << " causing <" << this->m_attack;
	std::cout << "> points of damage!" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string pool_s[5] = {"Gara di ballo", "Partita di tennis", "calcetto", "basket", "rugby"};
	int			rand;

	if (this->energy_points - 25 < 0)
	{
		std::cout << "Not enought energy to challenger" << std::endl;
		return ;
	}
	this->setEnergy_points(this->getEnergy_points() - 25);
	rand = random() % 5;
	std::cout << "<" << this->getName() << "> Challenged <" << target;
	std::cout << "> at <" << pool_s[rand] << ">" << std::endl;
	return ;
}

void	ScavTrap::takeDamage(unsigned int ammount)
{
	if ((int)(ammount) < this->armor_damage)
	{
		std::cout << "SGT4G-TP <" << this->name << "> ";
		std::cout << "take <0";
		std::cout << "> points of damage!" << std::endl;
	}
	else
	{
		std::cout << "SGT4G-TP <" << this->name << "> ";
		std::cout << "take <" << ammount - this->armor_damage;
		std::cout << "> points of damage!" << std::endl;
		this->hit_points -= ammount - this->armor_damage;
	}
}

void	ScavTrap::beRepaired(unsigned int ammount)
{
	std::cout << "SGT4G-TP <" << this->name << "> ";
	std::cout << "have been cured, he earns <" << ammount;
	std::cout << "> points of healt!" << std::endl;

	if (this->hit_points + ammount >= 100)
		this->hit_points = 100;
	else
		this->hit_points += ammount;
}

ScavTrap& ScavTrap::operator = (ScavTrap const &copy)
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

int		ScavTrap::getMeleeAttack(void)
{
	return this->m_attack;
}

int		ScavTrap::getRangeAttack(void)
{
	return this->r_attack;
}

int ScavTrap::getHit_points() {
	return this->hit_points;
}
void ScavTrap::setHit_points(int hit_points) {
	this->hit_points = hit_points;
}
int ScavTrap::getMax_hit_points() {
	return this->max_hit_points;
}
void ScavTrap::setMax_hit_points(int max_hit_points) {
	this->max_hit_points = max_hit_points;
}
int ScavTrap::getEnergy_points() {
	return this->energy_points;
}
void ScavTrap::setEnergy_points(int energy_points) {
	this->energy_points = energy_points;
}
int ScavTrap::getLevel() {
	return this->Level;
}
void ScavTrap::setLevel(int Level) {
	this->Level = Level;
}
std::string ScavTrap::getName() {
	return this->name;
}
void ScavTrap::setName(std::string name) {
	this->name = name;
}
int ScavTrap::getM_attack() {
	return this->m_attack;
}
void ScavTrap::setM_attack(int m_attack) {
	this->m_attack = m_attack;
}
int ScavTrap::getR_attack() {
	return this->r_attack;
}
void ScavTrap::setR_attack(int r_attack) {
	this->r_attack = r_attack;
}
int ScavTrap::getArmor_damage() {
	return this->armor_damage;
}
void ScavTrap::setArmor_damage(int armor_damage) {
	this->armor_damage = armor_damage;
}
int ScavTrap::getMax_energy() {
	return this->max_energy;
}
void ScavTrap::setMax_energy(int max_energy) {
	this->max_energy = max_energy;
}

