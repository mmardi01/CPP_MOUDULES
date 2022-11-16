/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 20:59:47 by mmardi            #+#    #+#             */
/*   Updated: 2022/10/17 16:13:29 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <iostream>
# include "contact.hpp"
# include "phonebook.hpp"
# include <string>

PhoneBook obj;

/ namespace us2

int addNewContact(int index) {
    std::string firsName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
    
    while (!firsName[0]) {
        std::cout << "Firstname: ";
        if (!getline(std::cin, firsName))
            return (0);
        if (!isalnum(firsName[0]))
            firsName[0] = '\0';
    }
    while (!lastName[0]) {
        std::cout << "Lastname: ";
        if (!getline(std::cin, lastName))
            return (0) ;
        if (!isalnum(lastName[0]))
            lastName[0] = '\0';
    }
    while (!nickName[0]) {
        std::cout << "Nickname: ";
        if (!getline(std::cin, nickName))
            return (0) ;
        if (!isalnum(nickName[0]))
            nickName[0] = '\0';
    }
    while (!phoneNumber[0]) {
    std::cout << "Phone Number: ";
        if (!getline(std::cin, phoneNumber))
            return (0);
        if (!isalnum(phoneNumber[0]))
            phoneNumber[0] = '\0';
    }
    while (!darkestSecret[0]) { 
        std::cout << "Dark Secret: ";
        if (!getline(std::cin, darkestSecret))
            return (0) ;
        if (!isalnum(darkestSecret[0]))
            darkestSecret[0] = '\0';
    }
    obj.creatContact(index, firsName, lastName, nickName, phoneNumber, darkestSecret);
    return (1);
}

int search (int contactsNumber) {
    int index;
    std::string str;
    if (contactsNumber == 0) {
        std::cout << "No Contacts yet :(\n";
        return (1) ;   
    }
    
    for (int i = 0; i < contactsNumber; i++) {
        obj.getList(i);
    }
    
    std::cout << "Choose a contact: ";
    if(!getline(std::cin, str))
        return (0) ; 
    index = str.length() == 1 ? str[0] - '0' : 10;
    if (index <= 0 || index >  contactsNumber) {
        std::cout << "Cant find this contact\n";
        return (1);
    }
    obj.getContactInfo(index - 1);
    return (1);
}

int main(void) {
    int contactsNumber = 0;
    int index = 0;
    std::string cmd;

    while (1) {
        std::cout << "ADD, SEARCH, EXIT: ";
        if(!getline(std::cin, cmd))
            break ;
        if (cmd == "ADD") {
            if (index == 8)
                index = 0;
            if (!addNewContact(index))
                break ;
            if (contactsNumber != 8)
                contactsNumber++;
            index++;
        }
        else if (cmd  == "SEARCH") {
            if (!search(contactsNumber))
                break ;
        }
        else if (cmd == "EXIT") 
            break;
    }
}