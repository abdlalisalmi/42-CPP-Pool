/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:38:06 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/15 19:29:28 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

typedef Form *(Intern::*ptrToMuFunc)(std::string target);

Intern::~Intern(void)
{
	std::cout << "Intern : Destructor Called" << std::endl;
}
Intern::Intern(void)
{
	std::cout << "Intern : Defualt Constructor Called" << std::endl;
}
Intern::Intern(Intern const &other)
{
	std::cout << "Intern : Copy Constructor Called" << std::endl;
	*this = other;
}

// Operators

Intern &Intern::operator=(Intern const &other)
{
	std::cout << "= Operator Called" << std::endl;
	if (this != &other)
	{
		*this = other;
	}
	return *this;
}


// Methods

Form *Intern::makeForm(std::string name, std::string target)
{
	ptrToMuFunc methods[3] = {&Intern::createShrubberyForm, &Intern::createRobotomyRequestForm, &Intern::createPresidentialPardonForm};
	std::string names[3] = {"shrubbery", "robotomy request", "presidential pardon"};
	for (size_t i = 0; i < 3; i++)
	{
		if (name == names[i])
		{
			return (this->*methods[i])(target);
		}
	}
	throw "No form with name [" + name + "] in the list!!\n";
}

Form *Intern::createShrubberyForm(std::string target)
{
	Form *form = new ShrubberyCreationForm(target);
	return form;
}
Form *Intern::createPresidentialPardonForm(std::string target)
{
	Form *form = new PresidentialPardonForm(target);
	return form;
}
Form *Intern::createRobotomyRequestForm(std::string target)
{
	Form *form = new RobotomyRequestForm(target);
	return form;
}