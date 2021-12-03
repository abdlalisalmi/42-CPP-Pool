/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 00:05:28 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/03 12:20:34 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

typedef void (Karen::*ptrToMuFunc)(void);
enum Levels {DEBUG, INFO, WARNING, ERROR, NOT_IMPORTANT};

Karen::Karen(void){
}
Karen::~Karen(){
}

void Karen::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

Levels convertStrToEnum(std::string level) {
    while (level == "DEBUG")
        return DEBUG;
    while (level == "INFO")
        return INFO;
    while (level == "WARNING")
        return WARNING;
    while (level == "ERROR")
        return ERROR;
    return  NOT_IMPORTANT;
}

void Karen::complain(std::string level) {
    ptrToMuFunc methods[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    switch (convertStrToEnum(level)) {
        case DEBUG:
            for (size_t i = 0; i < 4; i++)
                (this->*methods[i])();
            break;
        case INFO:
            for (size_t i = 1; i < 4; i++)
                (this->*methods[i])();
            break;
        case WARNING:
            for (size_t i = 2; i < 4; i++)
                (this->*methods[i])();
            break;
        case ERROR:
            (this->*methods[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}