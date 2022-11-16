/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:29:46 by mmardi            #+#    #+#             */
/*   Updated: 2022/08/23 11:11:34 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iostream>

class PhoneBook {
    private:
        Contact object[8];
    public:
        void creatContact( 
            int          index,
            std::string firstName,
            std::string lastName,
            std::string nickName,
            std::string phoneNumber,
            std::string darkestSecret
        );
        void getList(int index);
        void getContactInfo(int index);
};

# endif