/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:36:08 by mmardi            #+#    #+#             */
/*   Updated: 2022/08/23 10:49:48 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

void PhoneBook::getList(int index) {
    object[index].showList();
}

void PhoneBook::creatContact(int index, std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret) {
    object[index].setInfo(index, firstName, lastName, nickName, phoneNumber, darkestSecret);
}

void PhoneBook::getContactInfo(int index) {
    object[index].showContactInfo();
}