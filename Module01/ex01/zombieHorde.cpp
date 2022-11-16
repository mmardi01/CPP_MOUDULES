/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:58:41 by mmardi            #+#    #+#             */
/*   Updated: 2022/08/24 15:37:30 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    Zombie* obj = new Zombie[N];
    for (int i = 0; i < N; i++)
        obj[i].setName(name);
    return obj;
}