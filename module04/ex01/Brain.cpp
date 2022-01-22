/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:46:18 by aes-salm          #+#    #+#             */
/*   Updated: 2022/01/22 19:50:51 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain : Defualt constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain : Destructor called" << std::endl;
}

Brain::Brain(Brain const &other)
{
	std::cout << "Brain : Copy constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(Brain const &other)
{
	std::cout << "Brain : Assignation operator called" << std::endl;
	if (this != &other)
		for (size_t i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	return *this;
}

void Brain::setIdea(std::string idea, size_t index)
{
	this->_ideas[index] = idea;
}

std::string Brain::getIdea(size_t index)
{
	return this->_ideas[index];
}