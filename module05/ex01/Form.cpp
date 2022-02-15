/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:23:51 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/15 22:02:50 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Canonical Form
Form::~Form()
{
	std::cout << "Form : Destructor called";
}
Form::Form(void) : name(""), signGrade(0), executeGrade(0)
{
	std::cout << "Form : Defualt constructor called" << std::endl;
	this->isSigned = false;
}
Form::Form(std::string name, int signGrade, int executeGrade) : name(name), signGrade(signGrade), executeGrade(executeGrade)
{
	std::cout << "Form : Param Constructor called" << std::endl;
	if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
	this->isSigned = false;
}

//// Operators
Form::Form(Form const &other) : name(other.name), signGrade(other.signGrade), executeGrade(other.executeGrade)
{
	std::cout << "Form : Copy Constructor called" << std::endl;
	this->isSigned = other.isSigned;
}
Form &Form::operator=(Form const &other)
{
	std::cout << "Form : Assignation operator called";
	this->isSigned = other.isSigned;
	return *this;
}
std::ostream &operator<<(std::ostream &output, Form const &obj)
{
	output << "Form name: " << obj.getFormName()
		   << ", isSigned: " << obj.getFormStatus()
		   << ", signGrade: " << obj.getFormSingGrade()
		   << ", executeGrade: " << obj.getFormExecuteGrade();
	return output;
}

//  Accesors
std::string Form::getFormName(void) const
{
	return this->name;
}
bool Form::getFormStatus(void) const
{
	return this->isSigned;
}
int Form::getFormSingGrade(void) const
{
	return this->signGrade;
}
int Form::getFormExecuteGrade(void) const
{
	return this->executeGrade;
}

// special Method

void Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() <= this->getFormSingGrade())
	{
		this->isSigned = true;
		b.signForm(this->getFormName(), true, "");
	}
	else
	{
		b.signForm(this->getFormName(), false, "GradeTooLow!");
		throw Form::GradeTooLowException();
	}
}

// Exceptions

const char * Form::GradeTooHighException::what() const throw()
{
	return "Form::GradeTooHighException";
}
const char * Form::GradeTooLowException::what() const throw()
{
	return "Form::GradeTooLowException";
}
