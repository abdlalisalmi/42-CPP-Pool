/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:05:44 by aes-salm          #+#    #+#             */
/*   Updated: 2021/11/27 21:17:09 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    void set_first_name( std::string str );
    void set_last_name( std::string str );
    void set_nickname( std::string str );
    void set_phone_number( std::string str );
    void set_darkest_secret( std::string str );

    std::string get_first_name( void ) const;
    std::string get_last_name( void ) const;
    std::string get_nickname( void ) const;
    std::string get_phone_number( void ) const;
    std::string get_darkest_secret( void ) const;

    void print_10_chars( std::string str );
    void print_contact( void );
};

#endif
