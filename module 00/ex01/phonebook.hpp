/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:05:44 by aes-salm          #+#    #+#             */
/*   Updated: 2021/11/24 23:59:06 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

#define TRUE 1
#define RED "\033[0;31m"
#define YELLOW "\033[0;33m"
#define RESET "\033[0m"

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest;
    std::string secret;

public:
    void set_first_name(std::string str) {
        first_name = str;
    }
    void set_last_name(std::string str) {
        last_name = str;
    }
    void set_nickname(std::string str) {
        nickname = str;
    }
    void set_phone_number(std::string str) {
        phone_number = str;
    }
    void set_darkest(std::string str) {
        darkest = str;
    }
    void set_secret(std::string str) {
        secret = str;
    }
    std::string get_first_name() {
        return first_name;
    }
    std::string get_last_name() {
        return last_name;
    }
    std::string get_nickname() {
        return nickname;
    }
    std::string get_phone_number() {
        return phone_number;
    }
    std::string get_darkest() {
        return darkest;
    }
    std::string get_secret() {
        return secret;
    }

    void print_10_chars(std::string str) {
        size_t i = -1;

        if (strlen(str.c_str()) == 10)
            std::cout << str << " | ";
        else if (strlen(str.c_str()) < 10)
        {
            std::cout << str;
            i = -1;
            while (++i < (10 - strlen(str.c_str())))
                std::cout << ' ';
            std::cout << " | ";
        } else {
            i = -1;
            while (++i < 9)
                std::cout << str[i];
            std::cout << ". | ";
        }
    }

    void print_contact() {
        print_10_chars(first_name);
        print_10_chars(last_name);
        print_10_chars(nickname);
        std::cout << '\n';
    }
};

class PhoneBook
{
public:
    int index;
    int n_contacts;
    Contact contacts[8];

    void init() {
        index = 0;
        n_contacts = 0;
    }

    void add_contact(Contact contact) {
        contacts[index] = contact;
        if (index == 8)
            index = 0;
        else
            index++;
        if (n_contacts < 8)
            n_contacts++;
    }
    void print_full_contact(int index) {
        std::cout << "First Name    : " << contacts[index].get_first_name() << '\n';
        std::cout << "Last Name     : " << contacts[index].get_last_name() << '\n';
        std::cout << "Nickname      : " << contacts[index].get_nickname() << '\n';
        std::cout << "Phone Number  : " << contacts[index].get_phone_number() << '\n';
        std::cout << "Darkest       : " << contacts[index].get_darkest() << '\n';
        std::cout << "Secret        : " << contacts[index].get_secret() << '\n';
    }
};

void create_new_contact(PhoneBook &phonebook);
void search_for_contact(PhoneBook &phonebook);

#endif