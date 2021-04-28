/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forsili <forsili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 15:57:38 by forsili           #+#    #+#             */
/*   Updated: 2021/04/28 13:27:22 by forsili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 100;
	this->max_energy = 100;
	this->Level = 1;
	this->name = name;
	this->m_attack = 30;
	this->r_attack = 20;
	this->armor_damage = 5;

	std::cout << "Default costructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
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

	std::cout << "Copy costructor FragTrap called" << std::endl;
}

FragTrap::~FragTrap(void) 
{
	std::cout << "Destructor FragTrap called" << std::endl;
}

void	FragTrap::rangedAttack(std::string &target)
{
	std::cout << "FR4G-TP <" << this->name << "> ";
	std::cout << "attacks <" << target << "> at range,";
	std::cout << " causing <" << this->r_attack;
	std::cout << "> points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string &target)
{
	std::cout << "FR4G-TP <" << this->name << "> ";
	std::cout << "attacks <" << target << "> in melee,";
	std::cout << " causing <" << this->m_attack;
	std::cout << "> points of damage!" << std::endl;
}

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string pool_s[5] = {"Spadata", "Pugnalata", "Sparo", "Cannonata", "Spugna"};
	int			pool_d[5] = {10, 7, 20, 50, 1};
	int			rand;

	if (this->energy_points - 25 < 0)
	{
		std::cout << "Not enought energy to vaulthuder" << std::endl;
		return (0);
	}
	this->setEnergy_points(this->getEnergy_points() - 25);
	rand = random() % 5;
	std::cout << "<" << this->getName() << "> Attack <" << target;
	std::cout << "> with <" << pool_s[rand] << ">";
	std::cout << " causing <" << pool_d[rand] << "> damege" << std::endl;
	return pool_d[rand];
}

void	FragTrap::takeDamage(unsigned int ammount)
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

void	FragTrap::beRepaired(unsigned int ammount)
{
	std::cout << "FR4G-TP <" << this->name << "> ";
	std::cout << "have been cured, he earns <" << ammount;
	std::cout << "> points of healt!" << std::endl;

	if (this->hit_points + ammount >= 100)
		this->hit_points = 100;
	else
		this->hit_points += ammount;
}

FragTrap& FragTrap::operator = (FragTrap const &copy)
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

int		FragTrap::getMeleeAttack(void)
{
	return this->m_attack;
}

int		FragTrap::getRangeAttack(void)
{
	return this->r_attack;
}

int FragTrap::getHit_points() {
	return this->hit_points;
}
void FragTrap::setHit_points(int hit_points) {
	this->hit_points = hit_points;
}
int FragTrap::getMax_hit_points() {
	return this->max_hit_points;
}
void FragTrap::setMax_hit_points(int max_hit_points) {
	this->max_hit_points = max_hit_points;
}
int FragTrap::getEnergy_points() {
	return this->energy_points;
}
void FragTrap::setEnergy_points(int energy_points) {
	this->energy_points = energy_points;
}
int FragTrap::getLevel() {
	return this->Level;
}
void FragTrap::setLevel(int Level) {
	this->Level = Level;
}
std::string FragTrap::getName() {
	return this->name;
}
void FragTrap::setName(std::string name) {
	this->name = name;
}
int FragTrap::getM_attack() {
	return this->m_attack;
}
void FragTrap::setM_attack(int m_attack) {
	this->m_attack = m_attack;
}
int FragTrap::getR_attack() {
	return this->r_attack;
}
void FragTrap::setR_attack(int r_attack) {
	this->r_attack = r_attack;
}
int FragTrap::getArmor_damage() {
	return this->armor_damage;
}
void FragTrap::setArmor_damage(int armor_damage) {
	this->armor_damage = armor_damage;
}
int FragTrap::getMax_energy() {
	return this->max_energy;
}
void FragTrap::setMax_energy(int max_energy) {
	this->max_energy = max_energy;
}

