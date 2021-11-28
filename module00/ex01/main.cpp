/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:54:00 by aes-salm          #+#    #+#             */
/*   Updated: 2021/11/28 20:39:44 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook phonebook;
    Contact contact;
    std::string command;

    std::cout << "\033[2J\033[1;1H"; // Clear the terminal window
    std::cout << " _____  _                      ____              _    \n|  __ \\| |                    |  _ \\            | |   \n| |__) | |__   ___  _ __   ___| |_) | ___   ___ | | __\n|  ___/| '_ \\ / _ \\| '_ \\ / _ \\  _ < / _ \\ / _ \\| |/ /\n| |    | | | | (_) | | | |  __/ |_) | (_) | (_) |   < \n|_|    |_| |_|\\___/|_| |_|\\___|____/ \\___/ \\___/|_|\\_\\\n";
    while (TRUE)
    {
        std::cout << "\nEnter your comand (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if (strcmp(command.c_str(), "EXIT") == 0)
            exit(EXIT_SUCCESS);
        else if (strcmp(command.c_str(), "ADD") == 0)
            phonebook.create_new_contact();
        else if (strcmp(command.c_str(), "SEARCH") == 0)
            phonebook.search_for_contact();
    }
    return 0;
}
