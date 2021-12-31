/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:42:22 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/29 16:10:02 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal() {
    std::cout << "Animal : Destructor called" << std::endl;
}
Animal::Animal() {
    std::cout << "Animal : Default constructor called" << std::endl;
}
Animal::Animal(std::string type) {
    std::cout << "Animal : Parameterized constructor called" << std::endl;
    this->_type = type;
}
Animal::Animal(Animal const &other) {
    std::cout << "Animal : Copy constructor called" << std::endl;
    this->_type = other._type;
}
Animal &Animal::operator=(Animal const &other) {
    std::cout << "Animal : Assignation operator called" << std::endl;
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

// Getter and Setter Methods

void Animal::setType(std::string type) {
    this->_type = type;
}
std::string Animal::getType(void) const {
    return this->_type;
}

// Class Methods

void Animal::makeSound(void) const {}