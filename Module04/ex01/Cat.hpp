/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:51:02 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/21 13:40:51 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
	
	Brain* Br;
	public:
		Cat();
		Cat(const Cat& object);
		Cat& operator = (const Cat& object);
		~Cat();
		void		makeSound(void) const;
}; 

# endif