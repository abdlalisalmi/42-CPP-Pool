/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:04:48 by aes-salm          #+#    #+#             */
/*   Updated: 2021/11/24 20:44:24 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void create_new_contact(PhoneBook &phonebook)
{
    Contact contact;
    std::string input;

    std::cout << "First Name: ";
    std::getline(std::cin, input);
    contact.set_first_name(input);

    // std::cout << "Last Name: ";
    // std::getline(std::cin, input);
    // contact.set_last_name(input);

    // std::cout << "Nickname: ";
    // std::getline(std::cin, input);
    // contact.set_nickname(input);

    // std::cout << "Phone Number: ";
    // std::getline(std::cin, input);
    // contact.set_phone_number(input);

    // std::cout << "Darkest: ";
    // std::getline(std::cin, input);
    // contact.set_darkest(input);

    // std::cout << "Secret: ";
    // std::getline(std::cin, input);
    // contact.set_secret(input);

    phonebook.add_contact(contact);
}

void search_for_contact(PhoneBook &phonebook)
{
    for (int i = 0; i < phonebook.n_contacts; i++)
    {
        std::cout << i << " | ";
        phonebook.contacts[i].print_contact();
    }
}

int main()
{
    PhoneBook phonebook;
    phonebook.init();
    Contact contact;
    std::string command;

    while (TRUE)
    {
        std::getline(std::cin, command);

        if (strcmp(command.c_str(), "EXIT") == 0)
            exit(EXIT_SUCCESS);
        else if (strcmp(command.c_str(), "ADD") == 0)
            create_new_contact(phonebook);
        else if (strcmp(command.c_str(), "SEARCH") == 0)
            std::cout << "SEARCH\n";
        else
            std::cout << "Invalid Command!!\n";
        search_for_contact(phonebook);
    }
    return 0;
}
