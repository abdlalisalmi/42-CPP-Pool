/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:05:44 by aes-salm          #+#    #+#             */
/*   Updated: 2021/11/27 12:46:30 by aes-salm         ###   ########.fr       */
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
    void set_first_name( std::string str );
    void set_last_name( std::string str );
    void set_nickname( std::string str );
    void set_phone_number( std::string str );
    void set_darkest( std::string str );
    void set_secret( std::string str );

    std::string get_first_name( void );
    std::string get_last_name( void );
    std::string get_nickname( void );
    std::string get_phone_number( void );
    std::string get_darkest( void );
    std::string get_secret( void );

    void print_10_chars( std::string str );
    void print_contact( void );
};

class PhoneBook
{
private:
    int index;
    int n_contacts;
    Contact contacts[8];

public:
    PhoneBook(void);
    ~PhoneBook(void);

    Contact *get_contacts( void );
    int get_n_contacts( void );

    void add_contact(Contact contact);
    void print_full_contact(int index);
};

void create_new_contact(PhoneBook &phonebook);
void search_for_contact(PhoneBook &phonebook);

#endif
