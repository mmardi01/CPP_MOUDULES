/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:38:17 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/16 13:25:57 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : Form("PresidentialPardonForm", 25, 5) {
    
    this->target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& object) : Form("PresidentialPardonForm", 25, 5) {

    this->target = object.getTarget();
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& object) {

    this->target = object.getTarget();
    return *this;
}


PresidentialPardonForm::~PresidentialPardonForm() {}

std::string PresidentialPardonForm::getTarget() const {

    return target;
}

void PresidentialPardonForm::action(void) const {
    
    std::cout << target << " has been pardoned by Zaphod Beeblebrox\n";
}

