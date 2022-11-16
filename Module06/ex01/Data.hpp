/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:14:11 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/23 16:30:09 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DATA_HPP
#define DATA_HPP

# include <iostream>

struct Data
{
    char c;
    int t;
};

Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);

#endif