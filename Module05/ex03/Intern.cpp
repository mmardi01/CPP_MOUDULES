/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:52:59 by mmardi            #+#    #+#             */
/*   Updated: 2022/11/04 14:47:59 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& obj) {
    (void)obj;
}

Intern& Intern::operator = (const Intern& object) {
    (void)object;
    return *this;
}

Form* Intern::makeForm(std::string formName, std::string target) {
    
    int i = 0;
    std::string names[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    Form *arr[3];
    arr[0] = new RobotomyRequestForm(target);
    arr[1] = new PresidentialPardonForm(target);
    arr[2] = new ShrubberyCreationForm(target);
    for (; formName != names[i] && i < 3; i++);
    for(int u = 0; u < 3; u++) {
        if (u != i)
           delete arr[u];
    }
    if (i == 3) 
        throw ("ther is no form with this name\n");
    return arr[i];
}

Intern::~Intern() {}