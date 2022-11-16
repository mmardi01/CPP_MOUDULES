/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:28:17 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/23 16:35:17 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Data.hpp"

uintptr_t serialize(Data* ptr) {
    
     return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
    
    return reinterpret_cast<Data*>(raw);
}