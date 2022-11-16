/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:47:44 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/23 17:55:08 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	
	std::cout << "Default constructor called\n";
	hitPoints = 10;
	energy = 10;
	AD = 0;
}

ClapTrap::ClapTrap(std::string _name) {
	std::cout << "Name setter constructor called\n";
	name = _name;
	hitPoints = 10;
	energy = 10;
	AD = 0;
}

ClapTrap::ClapTrap(const ClapTrap& object) {
	
	std::cout << "Copy constructor called\n";
	name = object.getName();
	hitPoints = object.hitPoints;
	energy = object.energy;
	AD = object.AD;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& object) {
	
	name = object.getName();
	hitPoints = object.hitPoints;
	energy = object.energy;
	AD = object.AD;
	return (*this);
}

ClapTrap::~ClapTrap() {
	
	std::cout << "Destructor called\n";
}

std::string ClapTrap::getName(void) const{
	
	return name;
}

void	 ClapTrap::attack(const std::string& target) {
	
	if (energy > 0 && hitPoints > 0) {
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << AD << " points of damage!\n";
		energy--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	
	if (hitPoints > 0) {
		std::cout << "ClapTrap " << name << " takes damage, " << amount << " of hit points lost\n";
		hitPoints = hitPoints >= (int)amount ? hitPoints - amount : 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	
	if (energy > 0) {
		std::cout << "ClapTrap " << name << " gets " << amount << " hit points back\n";
		hitPoints += amount;
		energy--;
	}
}