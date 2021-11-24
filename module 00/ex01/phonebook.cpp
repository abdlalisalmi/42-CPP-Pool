/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:04:48 by aes-salm          #+#    #+#             */
/*   Updated: 2021/11/24 23:59:21 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    PhoneBook phonebook;
    phonebook.init();
    Contact contact;
    std::string command;

    std::cout << " _____  _                      ____              _    \n|  __ \\| |                    |  _ \\            | |   \n| |__) | |__   ___  _ __   ___| |_) | ___   ___ | | __\n|  ___/| '_ \\ / _ \\| '_ \\ / _ \\  _ < / _ \\ / _ \\| |/ /\n| |    | | | | (_) | | | |  __/ |_) | (_) | (_) |   < \n|_|    |_| |_|\\___/|_| |_|\\___|____/ \\___/ \\___/|_|\\_\\\n";
    while (TRUE)
    {
        std::cout << "\nPlease enter your comand (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        
        if (strcmp(command.c_str(), "EXIT") == 0)
            exit(EXIT_SUCCESS);
        else if (strcmp(command.c_str(), "ADD") == 0)
            create_new_contact(phonebook);
        else if (strcmp(command.c_str(), "SEARCH") == 0)
            search_for_contact(phonebook);
    }
    return 0;
}
