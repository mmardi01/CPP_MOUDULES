/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:27:01 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/17 20:54:59 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main(void) {
	
	ClapTrap object("mmardi");
	ClapTrap object2(object);
	object.attack("mfagri");
	object.takeDamage(10);
	object.attack("suuuu");
	object.beRepaired(10);
	object.attack("suuuu");
}