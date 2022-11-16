/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:45:57 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/26 19:03:47 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int main() {
    
    std::vector<char> ar;
    ar.push_back('a');
    ar.push_back('b');
    ar.push_back('c');
    
    if (easyfind(ar, 'b'))
        std::cout << "element 'b' found\n";
    if (!easyfind(ar, 'v'))
        std::cout << "element 'v' not found\n";
    
    return 0;
}