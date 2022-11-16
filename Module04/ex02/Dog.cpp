/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:37:47 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/21 13:45:49 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() {
	
	std::cout << "Dog default constructor called\n";
	Br = new Brain(); 
	type = "Dog";
}

Dog::Dog(const Dog& object):Animal(object) {

	std::cout << "Dog copy contructor called\n";
	Br = new Brain();
	type = object.type;
}

Dog& Dog::operator = (const Dog& object) {
	
	std::cout << "Dog copy assignment operator called\n";
	Br = new Brain();
	type =  object.type;
	return (*this);
}

void Dog::makeSound() const{

	std::cout << "Dogs bark\n";
}

Dog::~Dog() {

	std::cout << "Dog destructor called\n";
	delete Br;
}