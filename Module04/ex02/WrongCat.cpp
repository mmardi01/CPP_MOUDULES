/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 01:33:44 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/21 02:06:33 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat() {
	
	std::cout << "WrongCat default constructor called\n";
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& object):WrongAnimal(object) {
	
	std::cout << "WrongCat copy constructor called\n";
	type = object.getType();
}

WrongCat& WrongCat::operator = (const WrongCat& object) {
	
	std::cout << "WrongCat copy assingment operator called\n";
	type = object.getType();
	return *this;
}

WrongCat::~WrongCat() {

	std::cout << "WrongCat destructor called\n";
}

void	WrongCat::makeSound(void) const{
	
	std::cout << "wrong cat sound\n";
}