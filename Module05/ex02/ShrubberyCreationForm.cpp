/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:39:44 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/11 23:48:50 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& object) : Form(object.getName(), object.getSgrade(), object.getEgrade()) {
       
       this->target = object.getTarget();
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& object) {

    this->target = object.getTarget();
    return *this;
}

std::string ShrubberyCreationForm::getTarget(void) const {

    return target;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Form("ShrubberyCreationForm", 145, 137){

    this->target = _target;
}

void    ShrubberyCreationForm::action() const{
    
    std::string fileName = target + "_shrubbery";
    std::ofstream MyFile(fileName.c_str());
    MyFile << "                                                         ." << std::endl;
    MyFile << "                                              .         ;  " << std::endl;
    MyFile << "                 .              .              ;%     ;;   " << std::endl;
    MyFile << "                   ,           ,                :;%  %;   " << std::endl;
    MyFile << "                    :         ;                   :;%;'     .,  " << std::endl;
    MyFile << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
    MyFile << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
    MyFile << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
    MyFile << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
    MyFile << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
    MyFile << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
    MyFile << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
    MyFile << "                      `@%:.  :;%.         ;@@%;' " << std::endl;
    MyFile << "                        `@%.  `;@%.      ;@@%; " << std::endl;
    MyFile << "                          `@%%. `@%%    ;@@%;" << std::endl;
    MyFile << "                            ;@%. :@%%  %@@%; " << std::endl;
    MyFile << "                              %@bd%%%bd%%:; " << std::endl;
    MyFile << "                                #@%%%%%:;;" << std::endl;
    MyFile << "                                %@@%%%::;" << std::endl;
    MyFile << "                                %@@@%(o);  . '   " << std::endl;
    MyFile << "                                %@@@o%;:(.,'   " << std::endl;
    MyFile << "                            `.. %@@@o%::;  " << std::endl;
    MyFile << "                               `)@@@o%::;   " << std::endl;
    MyFile << "                                %@@(o)::;       " << std::endl;
    MyFile << "                               .%@@@@%::;" << std::endl;
    MyFile << "                               ;%@@@@%::;." << std::endl;
    MyFile << "                              ;%@@@@%%:;;;. " << std::endl;
    MyFile << "                          ...;%@@@@@%%:;;;;,..    " << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {};