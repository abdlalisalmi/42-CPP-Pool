/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:04:48 by aes-salm          #+#    #+#             */
/*   Updated: 2021/11/28 20:47:47 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

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
    std::cout << "Darkest Secret: " << contacts[index].get_darkest_secret() << std::endl;
}
void PhoneBook::create_new_contact(void)
{
    Contact contact;
    std::string input;

    std::cout << "To register a new contact please fill all the fields below." << std::endl;

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

    std::cout << "Darkest Secret: ";
    std::getline(std::cin, input);
    contact.set_darkest_secret(input);

    add_contact(contact);
}

bool isNumber(const std::string& str)
{
    for (int i = 0; i < (int)str.length(); i++) {
        if (std::isdigit(str[i]) == 0) return false;
    }
    return true;
}

void PhoneBook::search_for_contact( void )
{    
    std::cout << "\n";
    std::cout << "#|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "__________________________________________" << std::endl;
    for (int i = 0; i < get_n_contacts(); i++)
    {
        std::cout << i << "|";
        get_contacts()[i].print_contact();
    }
    if (get_n_contacts() == 0)
    {
        std::cout << YELLOW << "There is no contacts in the PhoneBook.\n" << RESET;
        return;
    }
    std::string input;
    int index;
    while (TRUE) {
        std::cout << "\nPlease enter a contact index to see more info or Q to exit the search: ";
        std::getline(std::cin, input);
        if (!strcmp(input.c_str(), "Q"))
            return;
        else if (isNumber(input)) {
            index = atoi(input.c_str());
            if (index < 0 || index > get_n_contacts() - 1)
                std::cerr << RED <<"\nPlease enter a valid index.\n" << RESET ;
            else {
                std::cout << "\n";
                print_full_contact(index);
            }
        } else {
            std::cerr << RED <<"\nPlease enter a valid index.\n" << RESET ;
        }
    }
}
