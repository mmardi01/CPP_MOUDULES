/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:10:46 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/11 23:14:20 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form {
    std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm& object);
    ShrubberyCreationForm(std::string _target);
    ShrubberyCreationForm& operator = (const ShrubberyCreationForm& object);
    ~ShrubberyCreationForm();
    std::string getTarget(void) const;
    void action() const;
};

# endif