/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:22:13 by mmardi            #+#    #+#             */
/*   Updated: 2022/11/04 14:40:26 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "Bureaucrat default constructor called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)  : name(obj.name){
    
    *this = obj;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& obj){
    
    grade = obj.getGrade();
    return (*this);
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name){

    if (_grade < 1)
        throw (GradeTooHighException());
    else if (_grade > 150)
        throw (GradeTooLowException());
    grade = _grade;
};

std::string Bureaucrat::getName(void) const{
    return name;
}

int Bureaucrat::getGrade(void) const{
    
    return grade;
}


void    Bureaucrat::incrementGrade(void) {
    
    if (grade == 1) {
        throw (GradeTooHighException()); 
    }
    grade--;
}
void    Bureaucrat::decrementGrade(void) {
    
    if (grade == 150) {
        throw (GradeTooLowException()); 
    }
    grade++;
}

Bureaucrat::~Bureaucrat() {}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    
    return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    
    return "Grade too low";
}

std::ostream& operator << (std::ostream& out, const Bureaucrat& object){
    
    out << object.getName() << " bureaucrat grade " << object.getGrade() << std::endl;
    return out; 
}