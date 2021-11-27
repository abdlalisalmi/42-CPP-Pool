/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:14:15 by aes-salm          #+#    #+#             */
/*   Updated: 2021/11/27 21:18:50 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_first_name(std::string str)
{
    first_name = str;
}
void Contact::set_last_name(std::string str)
{
    last_name = str;
}
void Contact::set_nickname(std::string str)
{
    nickname = str;
}
void Contact::set_phone_number(std::string str)
{
    phone_number = str;
}
void Contact::set_darkest_secret(std::string str)
{
    darkest_secret = str;
}

std::string Contact::get_first_name(void) const
{
    return first_name;
}
std::string Contact::get_last_name(void) const
{
    return last_name;
}
std::string Contact::get_nickname(void) const
{
    return nickname;
}
std::string Contact::get_phone_number(void) const
{
    return phone_number;
}
std::string Contact::get_darkest_secret(void) const
{
    return darkest_secret;
}

void Contact::print_10_chars(std::string str)
{
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
    }
    else
    {
        i = -1;
        while (++i < 9)
            std::cout << str[i];
        std::cout << ". | ";
    }
}

void Contact::print_contact(void)
{
    print_10_chars(first_name);
    print_10_chars(last_name);
    print_10_chars(nickname);
    std::cout << '\n';
}