/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 00:08:26 by mmardi            #+#    #+#             */
/*   Updated: 2022/09/05 00:37:18 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Harl.hpp"

void	Harl::debug(void) {
	
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {

	std::cout << "[ ERROR ]" << std::endl;
	std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) {
	int i;
	void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0; levels[i] != level; i++);
	switch (i) {
		case 0:
			for (int i = 0; i < 4; i++){
				(this->*f[i]) ();
			}
			break;
		case 1:
			for (int i = 1; i < 4; i++){
				(this->*f[i]) ();
			}
			break;
		case 2:
			for (int i = 2; i < 4; i++){
				(this->*f[i]) ();
			}
			break;
		case 3:
			for (int i = 3; i < 4; i++){
				(this->*f[i]) ();
			}
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}