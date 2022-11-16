/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:48:31 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/22 17:37:49 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main() {
    //alocated class:
    Zombie *obj = newZombie("foo");
    obj->anounce();
    delete obj;
    //stack class:
    randomChump("bar");
}