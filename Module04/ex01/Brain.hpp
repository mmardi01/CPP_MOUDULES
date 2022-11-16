/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:13:01 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/21 13:39:54 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain {
	std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& object);
		Brain& operator = (const Brain& object);
		~Brain();
};

# endif