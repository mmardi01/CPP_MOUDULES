/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:37:19 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/23 22:51:24 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& object) : Form("RobotomyRequestForm", 72, 45) {

    this->target = object.getTarget(); 
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form("RobotomyRequestForm", 72, 45) {

    this->target = _target;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& object) {

    this->target = object.getTarget();
    return *this;
}


std::string RobotomyRequestForm::getTarget() const{

    return target;
}

void RobotomyRequestForm::action(void) const{

    std::cout << "Some drilling noises\n";
    srand(time(0));
    if (rand() % 2)
        std::cout << target << " has been robotomized\n";
    else 
        std::cout << "the robotomy failed\n";
}

RobotomyRequestForm::~RobotomyRequestForm() {};