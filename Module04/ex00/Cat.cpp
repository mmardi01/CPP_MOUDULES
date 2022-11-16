/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:01:24 by mmardi            #+#    #+#             */
/*   Updated: 2022/11/02 18:24:25 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() {

	std::cout << "Cat default constructor called\n";
	type = "Cat";
}

Cat::Cat(const Cat& object):Animal(object) {

	std::cout << "Cat copy constructor called\n";
	type = object.getType();
}

Cat& Cat::operator = (const Cat& object) {
	
	std::cout << "Cat copy assingment operator called\n";
	type = object.getType();
	return *this;
}

// void	Cat::makeSound(void) const{
	
// 	std::cout << "Meeoooow\n";
// }

Cat::~Cat() {
	
	std::cout << "Cat destructor called\n";
}
