/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:22:20 by mmardi            #+#    #+#             */
/*   Updated: 2022/11/04 14:30:34 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main() {
try
{
   Bureaucrat a("mmardi", 170);
   std::cout << a;
}
catch (std::exception& e)
{
   std::cerr << e.what() << std::endl; 
}
try
{
   Bureaucrat a("mmardi", 149);
   a.decrementGrade();
   std::cout << a;
}
catch (std::exception& e)
{
   std::cerr << e.what() << std::endl; 
}
}