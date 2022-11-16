/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:42:03 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/10 01:18:04 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	int	fixedPoint;
	static const int bits = 8;
	public:
		Fixed();
		Fixed(const Fixed& obj);
		~Fixed();
		Fixed& operator = (const Fixed& obj);
		int getRawBits(void) const;
};


# endif