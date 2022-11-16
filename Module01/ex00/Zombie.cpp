/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:48:42 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/22 17:34:39 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void Zombie::anounce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie (std::string _name) {
    name = _name;
    std::cout << name << " zombie created!\n";
}

Zombie::~Zombie(void) {
    std::cout << name << " zombie deleted\n";
}