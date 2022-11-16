/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_line.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:57:28 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/27 20:56:26 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "replace.hpp"

std::string replace_line(std::string line, std::string s1, std::string s2) {
    int index = 0;
    
    while (1) {
        index = line.find(s1, index);
        if (index == -1)
            break ;
        line.erase(index, s1.length());
        line.insert(index, s2);
        index++;
    }
    return (line);
}
