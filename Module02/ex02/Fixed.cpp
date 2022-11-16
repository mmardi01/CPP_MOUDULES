/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:56:55 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/11 15:32:52 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

//		Constructors:

Fixed::Fixed() { // Default constructor
	
	//std::cout << "Default constructor called\n";
	fixedPoint = 0;
}

Fixed::Fixed(const Fixed& obj) { // Copy constructor

	//std::cout << "Copy constructor called\n";
	fixedPoint = obj.getRawBits();
}

Fixed::Fixed(const int integer) { // Integer constructor
	
	//std::cout << "Int constructor called\n";
	fixedPoint = roundf(integer * powerOf(2, getBits()));
}

Fixed::Fixed(const float flt) { // Float constructor
	
	//std::cout << "Float constructor called\n";
	fixedPoint = roundf(flt * powerOf(2, getBits()));
}

//  Arithmetic operators:

Fixed& Fixed::operator = (const Fixed& obj) {
	
	//std::cout << "Copy assignment operator called\n";
	this->fixedPoint = obj.getRawBits();
	return (*this);
}

Fixed Fixed::operator + (const Fixed& object) {

	Fixed newObj(toFloat() + object.toFloat());
	
	return (newObj);
}

Fixed Fixed::operator * (const Fixed& object) {

	Fixed newObj(toFloat() * object.toFloat());
	
	return (newObj);
}

Fixed Fixed::operator - (const Fixed& object) {

	Fixed newObj(toFloat() - object.toFloat());

	return (newObj);
}

Fixed Fixed::operator / (const Fixed& object) {

	Fixed newObj(toFloat() / object.toFloat());
	
	return (newObj);
}
//		Methods:

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


//  Comparison operators:

bool	Fixed::operator < (const Fixed& object) {
	
	if (fixedPoint < object.fixedPoint)
		return true;
	return false;
}

bool	Fixed::operator > (const Fixed& object) {
	
	if (fixedPoint > object.fixedPoint)
		return true;
	return false;
}

bool	Fixed::operator <= (const Fixed& object) {
	
	if (fixedPoint <= object.fixedPoint)
		return true;
	return false;
}

bool	Fixed::operator >= (const Fixed& object) {
	
	if (fixedPoint >= object.fixedPoint)
		return true;
	return false;
}

bool	Fixed::operator == (const Fixed& object) {
	
	if (fixedPoint == object.fixedPoint)
		return true;
	return false;
}

bool	Fixed::operator != (const Fixed& object) {
	
	if (fixedPoint != object.fixedPoint)
		return true;
	return false;
}

//		Increment/Decrement operators:

Fixed&	Fixed::operator ++ () {
	
	this->fixedPoint++;
	return (*this);
}

Fixed	Fixed::operator ++ (int) {
	
	Fixed newObj = *this;
	this->fixedPoint++;
	return (newObj);
}

Fixed&	Fixed::operator -- () {
	
	this->fixedPoint--;
	return (*this);
}

Fixed	Fixed::operator -- (int) {
	
	Fixed newObj = *this;
	this->fixedPoint--;
	return (newObj);
}

//		Static members:

Fixed Fixed::max(const Fixed& object1, const Fixed& object2) {
	
	if (object1.toFloat() > object2.toFloat())
		return (object1);
	return object2;
}

Fixed Fixed::max(Fixed& object1, Fixed& object2) {
	
	if (object1.toFloat() > object2.toFloat())
		return (object1);
	return object2;
}

Fixed Fixed::min(const Fixed& object1, const Fixed& object2) {
	
	if (object1.toFloat() < object2.toFloat())
		return (object1);
	return object2;
}

Fixed Fixed::min(Fixed& object1, Fixed& object2) {
	
	if (object1.toFloat() < object2.toFloat())
		return (object1);
	return object2;
}

Fixed::~Fixed () { // Destructor

	//std::cout << "Destructor called\n";
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