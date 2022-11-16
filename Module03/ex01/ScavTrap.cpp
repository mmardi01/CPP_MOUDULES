/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:57:26 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/19 15:59:23 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructer called\n";
	hitPoints = 100;
	energy = 50;
	AD = 20;
	name = "";
}

ScavTrap::ScavTrap(std::string _name) {
	std::cout << "ScavTrap name constructer called\n";
	hitPoints = 100;
	energy = 50;
	AD = 20;
	name = _name;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& object) {

	std::cout << "ScavTrap copy assingment operator called\n";
	name = object.getName();
	hitPoints = object.hitPoints;
	AD = object.AD;
	energy = object.energy;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called\n";
}

void	ScavTrap::attack(const std::string& target) {

	if (energy > 0 && hitPoints > 0) {
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << AD << " points of damage!\n";
		energy--;
	}
}

void	ScavTrap::guardGate(void) {
	
	std::cout << "ScavTrap is now in Gate keeper mode\n";
}