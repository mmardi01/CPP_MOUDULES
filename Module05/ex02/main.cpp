/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:22:20 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/16 15:05:28 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main() {
   try
   {
      Bureaucrat br("br", 15);
      ShrubberyCreationForm sh("shrubbery");
      sh.beSigned(br);
      sh.execute(br);
   }
   catch(ShrubberyCreationForm::GradeTooHighException& e)
   {
      std::cerr << e.what() << '\n';
   }
   catch(ShrubberyCreationForm::GradeTooLowException& e)
   {
      std::cerr << e.what() << '\n';
   }
    try
   {
      Bureaucrat br("br", 15);
      RobotomyRequestForm sh("shrubbery");
      sh.beSigned(br);
      sh.execute(br);
   }
   catch(RobotomyRequestForm::GradeTooHighException& e)
   {
      std::cerr << e.what() << '\n';
   }
   catch(RobotomyRequestForm::GradeTooLowException& e)
   {
      std::cerr << e.what() << '\n';
   }

}