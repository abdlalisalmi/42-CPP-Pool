/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 20:48:32 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/29 16:10:23 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::~Dog() {
    std::cout << "Dog : Destructor called" << std::endl;
}
Dog::Dog(void) {
    std::cout << "Dog : Default constructor called" << std::endl;
    this->_type = "Dog";
}
Dog::Dog(Dog const &other) {
    std::cout << "Dog : Copy constructor called" << std::endl;
    this->_type = other._type;
}
Dog &Dog::operator=(Dog const &other) {
    std::cout << "Dog : Assignation operator called" << std::endl;
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

// Class Methods

void Dog::makeSound(void) const {
    std::cout << "This is a Dog sound" << std::endl;
}