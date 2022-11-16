/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:31:24 by mmardi            #+#    #+#             */
/*   Updated: 2022/08/28 20:07:38 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "contact.hpp"
# include <iostream>
#include <iomanip>


std::string truncate(std::string str) {
    std::string truncated;
    unsigned long int i = 0;
    
    if (str.length() > 10) {
        for (long unsigned int i = 0; i < str.length(); i++) {
            if (i == 9)
                str[i] = '.';
            else if (i > 9)
                 str[i] = '\0';
        }
    }
    while (i < str.length()) {
        if (str[i] == '\t')
            str[i] = ' ';
        i++;
    }
    return (str);
    
}
void Contact::showList() {
    std::cout << std::setw(10) << index + 1 << "|" <<  std::setw(10) << truncate(firstName) << "|" <<  std::setw(10) << truncate(lastName)  << "|" <<  std::setw(10) << truncate(nickName) << "|" << std::endl;
}

void Contact::setInfo( int _index, std::string _firstName, std::string _lastName, std::string _nickName, std::string _phoneNumber, std::string _darkestSecret) {
    index = _index;
    firstName = _firstName;
    lastName = _lastName;
    nickName = _nickName;
    phoneNumber = _phoneNumber;
    darkestSecret = _darkestSecret;
}

void Contact::showContactInfo() {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nick Name: " << nickName << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}