/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 13:48:41 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/29 16:14:19 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::~WrongCat()
{
    std::cout << "WrongCat : Destructor called" << std::endl;
}
WrongCat::WrongCat(void)
{
    std::cout << "WrongCat : Default constructor called" << std::endl;
    this->_type = "WrongCat";
}
WrongCat::WrongCat(WrongCat const &other)
{
    std::cout << "WrongCat : Copy constructor called" << std::endl;
    this->_type = other._type;
}
WrongCat &WrongCat::operator=(WrongCat const &other)
{
    std::cout << "WrongCat : Assignation operator called" << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

// Class Methods

void WrongCat::makeSound(void) const
{
    std::cout << "This is a WrongCat sound" << std::endl;
}