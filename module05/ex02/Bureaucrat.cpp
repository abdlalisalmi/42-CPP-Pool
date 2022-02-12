/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:37:55 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/11 12:37:53 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat : Destractor Called" << std::endl;
}

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Bureaucrat : Defualt Constractor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	std::cout << "Bureaucrat : Constractor Called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	std::cout << "Animal : Copy constructor called" << std::endl;
	this->grade = other.grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	std::cout << "Animal : Assignation operator called" << std::endl;
	if (this != &other)
	{
		this->grade = other.grade;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &output, const Bureaucrat &obj)
{
	output << obj.getName() << " bureaucrat grade " << obj.getGrade() << ".";
	return output;
}

// exercice methods

std::string Bureaucrat::getName(void) const
{
	return this->name;
}

int Bureaucrat::getGrade(void) const
{
	return this->grade;
}

void Bureaucrat::gradeIncrement(void)
{
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::gradeDecrement(void)
{
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

// Special Method
void Bureaucrat::signForm(std::string formName, bool isSigned, std::string reason) const {
	if (isSigned){
		std::cout << this->getName() << " signed " << formName << std::endl;
	} else {
		std::cout << this->getName() << " couldn't sign " << formName 
					<< " because " << reason << std::endl;
	}
}