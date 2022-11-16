/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:28:34 by mmardi            #+#    #+#             */
/*   Updated: 2022/08/23 10:50:14 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {
    private:
        int          index;
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        void    setInfo(
            int         _index,
            std::string _firstName,
            std::string _lastName,
            std::string _nickName,
            std::string _phoneNumber,
            std::string _darkestSecret
        );
        void showList();
        void showContactInfo();
};

# endif