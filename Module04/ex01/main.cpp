/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:57:14 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/03 16:07:28 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int	main () {

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	j->makeSound();
	i->makeSound();

	delete j;//should not create a leak
	delete i;

	Animal* k[10];

	for(int l = 0; l < 10; l++) {
		if (l < 5)
			k[l] = new Cat();
		else
			k[l] = new Dog();
	}
	for(int l = 0; l < 10; l++)	
		k[l]->makeSound();
	for(int l = 0; l < 10; l++)	
		delete k[l];
	return 0;
}