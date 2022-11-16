/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:27:01 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/19 15:59:59 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main(void) {
	
	ScavTrap object(ScavTrap("FOO"));
	ScavTrap object2 = ScavTrap("Bar");
	
	object.attack("mmardi");
	object.takeDamage(50);
	object.beRepaired(100);
	object.guardGate();
	object2.attack("mustapha");
}