/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:57:20 by mmardi            #+#    #+#             */
/*   Updated: 2022/08/21 22:25:07 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) {

    int i = 1;
    int j;

   if (ac != 1) {
        while (av[i]) {
            j = 0;
            while (av[i][j]) {
                if (av[i][j] >= 'a' && av[i][j] <= 'z') {
                    av[i][j] -= 32;
                }
                std::cout << av[i][j];
                j++;
            }
            i++;
        }   
   }
   else 
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
} 