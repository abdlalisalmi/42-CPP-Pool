/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:42:22 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/29 16:13:53 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal : Destructor called" << std::endl;
}
WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal : Default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type) {
    std::cout << "WrongAnimal : Parameterized constructor called" << std::endl;
    this->_type = type;
}
WrongAnimal::WrongAnimal(WrongAnimal const &other) {
    std::cout << "WrongAnimal : Copy constructor called" << std::endl;
    this->_type = other._type;
}
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other) {
    std::cout << "WrongAnimal : Assignation operator called" << std::endl;
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

// Getter and Setter Methods

void WrongAnimal::setType(std::string type) {
    this->_type = type;
}
std::string WrongAnimal::getType(void) const {
    return this->_type;
}

// Class Methods

void WrongAnimal::makeSound(void) const {}