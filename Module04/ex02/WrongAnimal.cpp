/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 00:47:34 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/21 02:09:57 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {

	type = "wrong animal";
	std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& object) {
	
	std::cout << "WrongAnimal copy constructor called\n";
	type = object.getType();
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& object) {
	
	std::cout << "WrongAnimal copy assingment operator called\n";
	type = object.getType();
	return *this;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "WrongAnimal destructor called\n";
}

std::string	WrongAnimal::getType(void) const{

	return type;
}

void	WrongAnimal::makeSound(void) const{
	
	std::cout << "wrong animal sound\n";
}