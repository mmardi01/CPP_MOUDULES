/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:23:21 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/21 19:09:01 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

void HumanA::attack () {
    std::cout << name << " attacks with their " << object->getType() << std::endl;
}

HumanA::HumanA(std::string _name, Weapon& obj) {
    object = &obj;
    name = _name;
}