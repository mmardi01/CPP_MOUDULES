/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:17:18 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/22 17:20:11 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

const std::string& Weapon::getType() {
    return (type);
}

void Weapon::setType(std::string _type) {
    type = _type;
}

Weapon::Weapon(std::string _type) {
    type = _type;
}