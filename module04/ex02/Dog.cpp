/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 20:48:32 by aes-salm          #+#    #+#             */
/*   Updated: 2022/01/22 20:03:44 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog()
{
	std::cout << "Dog : Destructor called" << std::endl;
	delete this->_brain;
}
Dog::Dog(void)
{
	std::cout << "Dog : Default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}
Dog::Dog(Dog const &other)
{
	std::cout << "Dog : Copy constructor called" << std::endl;
	*this = other;
}
Dog &Dog::operator=(Dog const &other)
{
	std::cout << "Dog : Assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		this->_brain = new Brain();
		*this->_brain = *(other._brain);
	}
	return *this;
}

// Class Methods

void Dog::makeSound(void) const
{
	std::cout << "This is a Dog sound" << std::endl;
}