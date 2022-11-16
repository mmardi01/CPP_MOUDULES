/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:20:39 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/21 13:44:19 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain() {
	
	std::cout << "Brain default constructor called\n";
}

Brain::Brain(const Brain& object) {
	
	std::cout << "Brain copy constructor called\n";
	for (int i = 0; i < 100; i++)
		ideas[i] = object.ideas[i];
}

Brain& Brain::operator = (const Brain& object) {

	std::cout << "Brain copy assingment operator called\n";
	for (int i = 0; i < 100; i++)
		ideas[i] = object.ideas[i];
	return *this;
}

Brain::~Brain() {

	std::cout << "Brain destructor called\n";
}