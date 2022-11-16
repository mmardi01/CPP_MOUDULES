/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:40:02 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/20 18:03:45 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal {
	
	public:
		Dog();
		Dog(const Dog& object);
		Dog& operator = (const Dog& object);
		~Dog();
		void	makeSound() const;
};

# endif