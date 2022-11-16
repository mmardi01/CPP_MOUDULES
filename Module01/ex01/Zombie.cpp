/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:58:35 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/22 18:01:10 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void Zombie::anounce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string _name) {
    name = _name;
}

Zombie::~Zombie(){
    std::cout << name << " zombie deleted\n";
}

Zombie::Zombie(){
    std::cout << "Zombie created\n";
}