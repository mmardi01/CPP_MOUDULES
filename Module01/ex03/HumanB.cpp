/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:41:18 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/21 19:09:39 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack () {
    if (object)
        std::cout << name << " attacks with their " << object->getType() << std::endl;
    else {
        std::cout << "ther is no weopen\n";
    }
}

HumanB::HumanB(std::string _name) {
    object = NULL;
    name = _name;
}

void HumanB::setWeapon(Weapon& obj) {
    object = &obj;
}