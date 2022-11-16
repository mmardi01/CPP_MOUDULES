/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:22:20 by mmardi            #+#    #+#             */
/*   Updated: 2022/11/04 14:47:11 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main() {
  
try
{
    /* code */
  Intern obj;
  Bureaucrat bur("mmardi", 15);
  Form *form = obj.makeForm("shrubbery creation", "SUII");
  form->beSigned(bur);
  std::cout << bur.getName();
  form->action(); 
}
catch(Form::GradeTooHighException& e)
{
   std::cerr << e.what() << '\n';
}
catch(Form::GradeTooLowException& e)
{
   std::cerr << e.what() << '\n';
}
catch(const char* str) {
  
  std::cout << str;
}
catch (Bureaucrat::GradeTooHighException e)
{
   std::cerr << e.what() << std::endl; 
}
catch (Bureaucrat::GradeTooLowException e)
{
   std::cerr << e.what() << std::endl;   
}
system("leaks bureaucrat");
}