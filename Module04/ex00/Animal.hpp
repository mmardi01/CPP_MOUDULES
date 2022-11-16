/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:32:42 by mmardi            #+#    #+#             */
/*   Updated: 2022/11/02 18:24:09 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string _type);
		Animal(const Animal& object);
		Animal& operator = (const Animal& object);
		~Animal();
		virtual void		makeSound(void) const ;
		std::string	getType(void) const;
};

# endif