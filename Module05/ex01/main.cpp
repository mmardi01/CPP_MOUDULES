/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:22:20 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/11 15:06:56 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

int main() {
try
{
   Form form("1stForm" ,151, 10);
}
catch(Form::GradeTooHighException& e)
{
   std::cerr << e.what() << '\n';
}
catch(Form::GradeTooLowException& e)
{
   std::cerr << e.what() << '\n';
}
try
{
   Form form("1stForm" ,0, 10);
}
catch(Form::GradeTooHighException& e)
{
   std::cerr << e.what() << '\n';
}
catch(Form::GradeTooLowException& e)
{
   std::cerr << e.what() << '\n';
}
try
{
   Bureaucrat bureaucrat("so9rat", 20);
   Form  form("form", 20, 10);
   form.beSigned(bureaucrat);
   std::cout << form;
}
catch(Form::GradeTooLowException& e)
{
   std::cerr << e.what() << std::endl;
}
}