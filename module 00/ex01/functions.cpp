/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:57:38 by aes-salm          #+#    #+#             */
/*   Updated: 2021/11/24 23:59:00 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void create_new_contact(PhoneBook &phonebook)
{
    Contact contact;
    std::string input;

    std::cout << "To register a new contact please fill all the fields below.\n";

    std::cout << "First Name: ";
    std::getline(std::cin, input);
    contact.set_first_name(input);

    std::cout << "Last Name: ";
    std::getline(std::cin, input);
    contact.set_last_name(input);

    std::cout << "Nickname: ";
    std::getline(std::cin, input);
    contact.set_nickname(input);

    std::cout << "Phone Number: ";
    std::getline(std::cin, input);
    contact.set_phone_number(input);

    std::cout << "Darkest: ";
    std::getline(std::cin, input);
    contact.set_darkest(input);

    std::cout << "Secret: ";
    std::getline(std::cin, input);
    contact.set_secret(input);

    phonebook.add_contact(contact);
}

void search_for_contact(PhoneBook &phonebook)
{    
    std::cout << "\n";
    for (int i = 0; i < phonebook.n_contacts; i++)
    {
        std::cout << i << " | ";
        phonebook.contacts[i].print_contact();
    }
    if (phonebook.n_contacts == 0)
    {
        std::cout << YELLOW << "There is no contacts in the PhoneBook.\n" << RESET;
        return;
    }
    std::string input;
    int index;
    do
    {
        std::cout << "\nPlease enter a contact index to see more info or Q to exit: ";
        std::cin >> input;
        if (!strcmp(input.c_str(), "Q"))
            return;
        try
        {
            index = std::stoi(input);
            if (index < 0 || index > phonebook.n_contacts - 1)
                throw std::invalid_argument("");
            std::cout << "\n";
            phonebook.print_full_contact(index);
        }
        catch(const std::exception& e)
        {
            std::cerr << RED <<"\nPlease enter a valid index.\n" << RESET ;
        }
    } while (TRUE);
}
