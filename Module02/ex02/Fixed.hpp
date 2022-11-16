/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:42:03 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/21 21:42:18 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	
	int	fixedPoint;
	static const int bits = 0;
	
	public:
	
		//		Constructors:
		Fixed(); // Default constructor
		Fixed(const Fixed& obj); // Copy constructor
		Fixed(const int integer);  // Integer constructor
		Fixed(const float flt); // Float constructor
		
		//  Arithmetic operators:
		Fixed&	operator = (const Fixed& obj); // Copy assignment operator overload
		Fixed	operator + (const Fixed& object); // Addition operator overload
		Fixed	operator * (const Fixed& object); // Multiplication operator overload
		Fixed	operator - (const Fixed& object); // Subtraction operator overload
		Fixed	operator / (const Fixed& object); // Division operator overload
		
		//		Methods:
		int 	getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getBits(void) const;

		//  	Comparison operators:
		bool	operator < (const Fixed& object);
		bool	operator > (const Fixed& object);
		bool	operator <= (const Fixed& object);
		bool	operator >= (const Fixed& object);
		bool	operator == (const Fixed& object);
		bool	operator != (const Fixed& object);

		//		Increment/Decrement operators:
		Fixed&	operator ++ ();
		Fixed	operator ++ (int);
		Fixed&	operator -- ();
		Fixed	operator -- (int);

		//		Static members:
		static 	Fixed min(Fixed& object1, Fixed& object2);
		static 	Fixed min(const Fixed& object1, const Fixed& object2);
		static 	Fixed max(Fixed& object1, Fixed& object2);
		static 	Fixed max(const Fixed& object1, const Fixed& object2);
		
		~Fixed(); // Destructor
};

std::ostream& operator << (std::ostream& output, const Fixed &object);

int	powerOf(int	num, int pow);

# endif