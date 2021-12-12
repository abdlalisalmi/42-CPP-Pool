/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 12:41:19 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/12 13:26:13 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
    this->_fp = 0;
}

Fixed::Fixed(const Fixed &obj) {
    std::cout << "Copy constructor called" << std::endl;
    this->_fp = obj.getRawBits();
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed &obj) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &obj) {
        this->_fp = obj.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fp;
}

void Fixed::setRawBits( int const raw) {
    std::cout << "getRawBits member function called" << std::endl;
    this->_fp = raw;
}