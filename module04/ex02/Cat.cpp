/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 13:48:41 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/10 21:36:33 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat()
{
    std::cout << "Cat : Destructor called" << std::endl;
	delete _brain;
}
Cat::Cat(void)
{
    std::cout << "Cat : Default constructor called" << std::endl;
    this->_type = "Cat";
	this->_brain = new Brain();
}
Cat::Cat(Cat const &other)
{
    std::cout << "Cat : Copy constructor called" << std::endl;
    *this = other;
}
Cat &Cat::operator=(Cat const &other)
{
    std::cout << "Cat : Assignation operator called" << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
		this->_brain = new Brain();
		*this->_brain = *(other._brain);
    }
    return *this;
}

// Class Methods

void Cat::makeSound(void) const
{
    std::cout << "This is a Cat sound" << std::endl;
}