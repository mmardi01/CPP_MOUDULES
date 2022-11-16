/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:16:30 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/16 15:03:54 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): sGrade(0), eGrade(0) {}

Form::Form(std::string _name, int _sGrade, int _eGrade) : name(_name),sGrade(_sGrade),eGrade(_eGrade){

    if (_sGrade < 1 || _eGrade < 1)
        throw GradeTooHighException();
    else if (_sGrade > 150 || _eGrade > 150)
        throw GradeTooLowException();
}

Form& Form::operator = (const Form& object) {
    
    this->status = object.status;
    return *this;
}

Form::~Form() {};

const char *Form::GradeTooHighException::what() const throw() {
    
    return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw() {
    
    return "Grade too low";
}

void    Form::beSigned(Bureaucrat& object){
    
    if (object.getGrade() <= sGrade)
        this->status = true;
    else
        throw GradeTooLowException();
}

bool    Form::getStatus() const{

    return status;
}
std::string Form::getName() const{
    
    return name;
}
int     Form::getSgrade() const{

    return sGrade;
}
int     Form::getEgrade() const{

    return eGrade;
}

void Form::execute(const Bureaucrat& object) const{
    
    if (this->status && object.getGrade() <= this->eGrade)
        this->action();
    else
    {
        throw GradeTooLowException();
    }
}

void Form::action() const{}

std::ostream& operator << (std::ostream& out, const Form& obj) {
    
    out << "Form name: " << obj.getName() << std::endl;
    out << "Sign grade: " << obj.getSgrade() << std::endl;
    out << "Execute grade " << obj.getEgrade() << std::endl;
    if (obj.getStatus())
        out << "Status: signed" <<  std::endl;
    else
        out << "Status: couldn't sign" << std::endl;
    return out;
}
