/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:43:15 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/21 21:44:46 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fracBits = 8;

// Default constructor
Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointValue = 0;
}
// Copy constructor
Fixed::Fixed(const Fixed &obj) {
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}
// Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &obj) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &obj) {
        this->_fixedPointValue = obj.getRawBits();
    }
    return *this;
}

std::ostream &operator<<(std::ostream &output, const Fixed &obj) {
    output << obj.toFloat();
    return output;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = value << _fracBits;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(value * (1 << _fracBits));
}

int Fixed::getRawBits(void) const {
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

void Fixed::setRawBits( int const raw) {
    // std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)(this->_fixedPointValue) / (1 << _fracBits));
}

int Fixed::toInt(void) const
{
    return ((int)(this->_fixedPointValue >> _fracBits));
}