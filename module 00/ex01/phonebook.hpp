/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:05:44 by aes-salm          #+#    #+#             */
/*   Updated: 2021/11/24 16:42:32 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

#define TRUE 1

class Contact
{
public:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest;
    std::string secret;
};

class PhoneBook
{
public:
    int index;
    int n_contacts;
    Contact contacts[8];

    void add_contact(Contact contact)
    {
        contacts[index] = contact;
        if (index == 8)
            index = 0;
        if (n_contacts < 8)
            n_contacts++;
    }
};

char *get_user_input();

#endif