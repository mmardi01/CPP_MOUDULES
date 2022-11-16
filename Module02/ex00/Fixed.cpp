/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:56:55 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/06 19:45:42 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	fixedPoint = 0;
}

Fixed::Fixed(const Fixed& obj) {
	std::cout << "copy constructor called\n";
	fixedPoint = obj.getRawBits();
}

Fixed& Fixed::operator = (const Fixed& obj) {
	std::cout << "Copy assignment operator called\n";
	this->fixedPoint = obj.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return (fixedPoint);
}

Fixed::~Fixed () {
	std::cout << "Destructor called\n";
}
