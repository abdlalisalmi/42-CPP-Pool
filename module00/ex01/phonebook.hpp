/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:05:44 by aes-salm          #+#    #+#             */
/*   Updated: 2021/11/27 21:22:20 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

#define TRUE 1
#define RED "\033[0;31m"
#define YELLOW "\033[0;33m"
#define RESET "\033[0m"

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
    void create_new_contact( void );
    void search_for_contact( void );
};


#endif
