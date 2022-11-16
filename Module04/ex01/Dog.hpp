/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:40:02 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/21 13:41:44 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {
	
	Brain* Br;
	public:
		Dog();
		Dog(const Dog& object);
		Dog& operator = (const Dog& object);
		~Dog();
		void	makeSound() const;
};

# endif