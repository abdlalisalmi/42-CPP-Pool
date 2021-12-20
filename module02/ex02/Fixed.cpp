/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:43:15 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/21 00:00:53 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fracBits = 8;

// Default constructor
Fixed::Fixed(void) {
    // std::cout << "Default constructor called" << std::endl;
    this->_fixedPointValue = 0;
}
// Copy constructor
Fixed::Fixed(const Fixed &obj) {
    // std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}
// Destructor
Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int value) {
    // std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = value << _fracBits;
}

Fixed::Fixed(const float value) {
    // std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(value * (1 << _fracBits));
}

int Fixed::getRawBits(void) const {
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

void Fixed::setRawBits( int const raw) {
    // std::cout << "getRawBits member function called" << std::endl;
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

Fixed &Fixed::operator=(const Fixed &obj) {
    if (this != &obj) {
        this->_fixedPointValue = obj.getRawBits();
    }
    return *this;
}

bool Fixed::operator>(const Fixed &obj) const {
    return this->toFloat() > obj.toFloat();
}

bool Fixed::operator>=(const Fixed &obj) const {
    return this->toFloat() >= obj.toFloat();
}

bool Fixed::operator<(const Fixed &obj) const {
    return this->toFloat() < obj.toFloat();
}

bool Fixed::operator<=(const Fixed &obj) const {
    return this->toFloat() <= obj.toFloat();
}

bool Fixed::operator==(const Fixed &obj) const {
    return this->toFloat() == obj.toFloat();
}

bool Fixed::operator!=(const Fixed &obj) const {
    return this->toFloat() != obj.toFloat();
}

float Fixed::operator+(const Fixed &obj) const {
    return this->toFloat() + obj.toFloat();
}

float Fixed::operator-(const Fixed &obj) const {
    return this->toFloat() - obj.toFloat();
}

float Fixed::operator*(const Fixed &obj) const {
    return this->toFloat() * obj.toFloat();
}

float Fixed::operator/(const Fixed &obj) const {
    return this->toFloat() / obj.toFloat();
}

Fixed Fixed::operator++(void) {
    this->_fixedPointValue++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed Fixed::operator--(void) {
    this->_fixedPointValue--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2) {
    return (obj1.toFloat() < obj2.toFloat()) ? obj1 : obj2;
}

Fixed const &Fixed::min(Fixed const &obj1, Fixed const &obj2) {
    return (obj1.toFloat() < obj2.toFloat()) ? obj1 : obj2;
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2) {
    return (obj1.toFloat() > obj2.toFloat()) ? obj1 : obj2;
}

Fixed const &Fixed::max(Fixed const &obj1, Fixed const &obj2) {
    return (obj1.toFloat() > obj2.toFloat()) ? obj1 : obj2;
}

std::ostream &operator<<(std::ostream &output, const Fixed &obj) {
    output << obj.toFloat();
    return output;
}