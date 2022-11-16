/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:56:55 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/10 03:06:16 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	fixedPoint = 0;
}

Fixed::Fixed(const Fixed& obj) {
	std::cout << "Copy constructor called\n";
	fixedPoint = obj.getRawBits();
}

Fixed::Fixed(const int integer) {
	std::cout << "Int constructor called\n";
	fixedPoint = roundf(integer * powerOf(2, getBits()));
}

Fixed::Fixed(const float flt) {
	std::cout << "Float constructor called\n";
	fixedPoint = roundf(flt * powerOf(2, getBits()));
}

Fixed& Fixed::operator = (const Fixed& obj) {
	std::cout << "Copy assignment operator called\n";
	this->fixedPoint = obj.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	return (fixedPoint);
}

int Fixed::getBits(void) const{
	return (bits);
}

int Fixed::toInt(void) const{
	return ((int)(fixedPoint / powerOf(2, getBits())));
}

float Fixed::toFloat(void) const{
	return ((float)fixedPoint / powerOf(2, getBits()));
}

Fixed::~Fixed () {
	std::cout << "Destructor called\n";
}

int powerOf(int num, int pow) {
	
	int result = num;
	
	while (pow - 1 > 0) {
		result *= num;
		pow--;
	}
	
	return (result);
}

std::ostream& operator << (std::ostream& output, const Fixed &object) {
	
	output << object.toFloat();
	return (output);
}