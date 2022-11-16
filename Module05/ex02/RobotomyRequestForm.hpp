/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:37:22 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/11 23:14:12 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {
    std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& object);
        RobotomyRequestForm(std::string _target);
        RobotomyRequestForm& operator = (const RobotomyRequestForm& object);
        ~RobotomyRequestForm();
        std::string getTarget() const;
        void action() const;
};

# endif
