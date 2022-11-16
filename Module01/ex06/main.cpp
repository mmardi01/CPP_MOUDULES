/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 00:07:00 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/22 17:50:50 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int	main(int ac, char **av) {
	Harl object;
	
	if(ac == 2)
		object.complain(av[1]);
	else
		std::cout << "segmentation fault hhhh\n";
}