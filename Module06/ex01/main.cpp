/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:58:38 by mmardi            #+#    #+#             */
/*   Updated: 2022/11/02 18:08:13 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Data.hpp"

int main() {
    Data d;
    d.c = 'a';
    d.t = 1;
    
    std::cout << d.c << d.t << std::endl;
    uintptr_t s =  serialize(&d);
    Data *sd = deserialize(s);
    std::cout << *sd << std::endl;
    std::cout << sd->c << sd->t << std::endl;
    
}