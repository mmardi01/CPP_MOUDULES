/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:39:50 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/23 16:06:02 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "conversion.hpp"

bool checkArg(std::string num) {
    
    int pNum = 0;
    
    for(unsigned int i = 0; i < num.length(); i++) {
        if (num.length() > 1 && !isnumber(num[i])) {
            if (num[i] == '.')
                pNum++;
            else if (i == 0 && (num[i] == '-' || num[i] ==  '+'));
            else if (num.length() > 1 && num[i] == 'f' && num[i + 1] == '\0');
            else
                return false;
        }
    }
    if (pNum > 1)
        return false;
    return true;
}

int main(int ac, char **av) {
    
    if (ac == 2 &&  av[1][0] &&  checkArg(av[1])){ 
       conversion(av[1], getType(av[1]));
    }
    else {
        std::cerr << "segmetation fault hhhh :(\n";  
        return (1);
    }
}