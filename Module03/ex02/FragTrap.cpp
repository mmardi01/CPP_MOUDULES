/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:42:42 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/19 15:58:24 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap() {
	
	std::cout << "FragTrap default construtor called\n";
	name = "";
	hitPoints = 100;
	AD = 30;
	energy = 100;
}

FragTrap::FragTrap(std::string _name) {
	
	std::cout << "FragTrap name setter construtor called\n";
	name = _name;
	hitPoints = 100;
	AD = 30;
	energy = 100;
}

void FragTrap::attack(const std::string& target) {
	
	if (energy > 0 && hitPoints > 0) {
		std::cout << "FragTrap " << name << " attacks " << target << ", causing " << AD << " points of damage!\n";
		energy--;
	}
}

FragTrap& FragTrap::operator = (const FragTrap& object) {
	
	std::cout << "FragTrap copy assignment operator called\n";
	name = object.getName();
	hitPoints = object.hitPoints;
	AD = object.AD;
	energy = object.energy;
	return *this;
}

FragTrap::FragTrap(const FragTrap& object):ClapTrap(object) {
	
	std::cout << "FragTrap copy construtor called\n";
	name = object.getName();
	hitPoints = object.hitPoints;
	AD = object.AD;
	energy = object.energy;
}

void FragTrap::highFivesGuys(void) {

	std::cout << "High fives request from FragTrap " << name << std::endl;
}

FragTrap::~FragTrap() {

	std::cout << "FragTrap destructor called\n";	
};