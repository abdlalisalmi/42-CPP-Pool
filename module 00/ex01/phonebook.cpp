/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:04:48 by aes-salm          #+#    #+#             */
/*   Updated: 2021/11/24 16:52:56 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

char *get_user_input()
{
    std::string input;
    std::getline(std::cin, input);
    return (char *)input.c_str();
}

void create_new_contact(PhoneBook phonbook)
{
    Contact contact;
    std::cout << "First Name: ";
    std::getline(std::cin, contact.first_name);

    // std::cout << "Last Name: ";
    // std::getline(std::cin, contact.last_name);

    // std::cout << "Nickname: ";
    // std::getline(std::cin, contact.nickname);
    
    // std::cout << "Phone Number: ";
    // std::getline(std::cin, contact.phone_number);
    
    // std::cout << "Darkest: ";
    // std::getline(std::cin, contact.darkest);
    
    // std::cout << "Secret: ";
    // std::getline(std::cin, contact.secret);

    phonbook.add_contact(contact);
}

int main()
{
    PhoneBook phonebook;
    Contact contact;
    phonebook.index = 0;
    phonebook.n_contacts = 0;
    while (TRUE)
    {
        char *command;
        
        command = get_user_input();
        if (strcmp(command, "EXIT") == 0)
            exit(EXIT_SUCCESS);
        else if (strcmp(command, "ADD") == 0)
            create_new_contact(phonebook);
        else if (strcmp(command, "SEARCH") == 0)
            std::cout << "SEARCH\n";
        else
            std::cout << "Invalid Command!!\n";

        // for (int i = 0; i < phonebook.n_contacts; i++)
        //     std::cout << phonebook.contacts[i].first_name <<'\n';
    }
    return 0;
}
