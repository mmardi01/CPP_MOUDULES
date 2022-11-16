/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:27:01 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/19 15:37:27 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main(void) {
	
	FragTrap object2 = FragTrap("hello");
	FragTrap object(FragTrap("suu"));
	object2.attack("mmardi");
	object.takeDamage(100);
	object2.attack("aa");
	object2.highFivesGuys();
}