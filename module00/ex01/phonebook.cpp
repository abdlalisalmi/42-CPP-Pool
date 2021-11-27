/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:04:48 by aes-salm          #+#    #+#             */
/*   Updated: 2021/11/27 12:40:39 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook(void) {
    index = 0;
    n_contacts = 0;
}

PhoneBook::~PhoneBook(void) {
}

int PhoneBook::get_n_contacts(void)
{
    return n_contacts;
}
Contact *PhoneBook::get_contacts(void)
{
    return contacts;
}

void PhoneBook::add_contact(Contact contact) {
    contacts[index] = contact;
    if (index == 7)
        index = 0;
    else
        index++;
    if (n_contacts < 8)
        n_contacts++;
}

void PhoneBook::print_full_contact(int index) {
    std::cout << "First Name    : " << contacts[index].get_first_name() << std::endl;
    std::cout << "Last Name     : " << contacts[index].get_last_name() << std::endl;
    std::cout << "Nickname      : " << contacts[index].get_nickname() << std::endl;
    std::cout << "Phone Number  : " << contacts[index].get_phone_number() << std::endl;
    std::cout << "Darkest       : " << contacts[index].get_darkest() << std::endl;
    std::cout << "Secret        : " << contacts[index].get_secret() << std::endl;
}
