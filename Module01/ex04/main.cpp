/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 17:18:15 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/16 16:02:19 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "replace.hpp"

int main (int ac, char** av) {
    if (ac == 4 && av[2][0]) 
        replace_file(av[1], av[2], av[3]);
    else if (ac < 4 || !av[2][0])
        std::cout << "NOT ENOUGH ARGUMENT\n";
    else
        std::cout << "TOO MANY ARGUEMENT\n";
}