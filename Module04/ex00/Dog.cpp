/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:37:47 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/20 18:09:39 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() {
	
	std::cout << "Dog default constructor called\n";
	type = "Dog";
}

Dog::Dog(const Dog& object):Animal(object) {

	std::cout << "Dog copy contructor called\n";
	type = object.type;
}

Dog& Dog::operator = (const Dog& object) {
	
	std::cout << "Dog copy assignment operator called\n";
	type =  object.type;
	return (*this);
}

void Dog::makeSound() const{

	std::cout << "Dogs bark\n";
}

Dog::~Dog() {

	std::cout << "Dog destructor called\n";
}