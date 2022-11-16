/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:06:37 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/11 23:14:04 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class  PresidentialPardonForm : public Form {
    std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string _target);
        PresidentialPardonForm(const PresidentialPardonForm& object);
        PresidentialPardonForm& operator = (const PresidentialPardonForm& object);
        ~PresidentialPardonForm();
        std::string getTarget(void) const;
        void action() const;
};


# endif