/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:41:08 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/21 22:58:05 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal(){
	
	std::cout << "Animal default constructor\n";
	type = "Cow";
}

Animal::Animal(const Animal& object) {
	
	std::cout << "Animal copy constructor called\n";
	type = object.type;
}

Animal& Animal::operator = (const Animal& object) {

	std::cout << "Animal copy assignment overloading operator called\n";
	type = object.type;
	return (*this);
}

Animal::~Animal() {

	std::cout << "Destructor called\n";
}

void Animal::makeSound(void) const{

	std::cout << "Mooo\n";
}

std::string Animal::getType(void) const{

	return type;
}