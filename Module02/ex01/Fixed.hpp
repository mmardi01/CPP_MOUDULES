/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:42:03 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/01 17:39:33 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	int	fixedPoint;
	static const int bits = 8;
	public:
		Fixed();
		Fixed(const Fixed& obj);
		Fixed(const int integer);
		Fixed(const float flt);
		Fixed& operator = (const Fixed& obj);
		int 	getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getBits(void) const;
		~Fixed();
};

std::ostream& operator << (std::ostream& output, const Fixed &object);
int	powerOf(int	num, int pow);

# endif