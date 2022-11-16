/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:45:45 by mmardi            #+#    #+#             */
/*   Updated: 2022/08/29 20:34:02 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon *object;
    public:
        void attack();
        void setWeapon(Weapon& obj);
        HumanB(std::string _name);
};

# endif