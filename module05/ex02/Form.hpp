/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:23:45 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/14 15:58:41 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FORM_HPP
#define FORM_HPP

#include "iostream"
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string name;
	bool isSigned;
	const int signGrade;
	const int executeGrade;

public:
	Form(void);
	Form(std::string name, int signGrade, int executeGrade);
	Form(Form const &);
	~Form();
	Form &operator=(Form const &);

	class GradeTooHighException : public std::exception
	{
		const char *what() const throw()
		{
			return "Form::GradeTooHighException";
		}
	};

	class GradeTooLowException : public std::exception
	{
		const char *what() const throw()
		{
			return "Form::GradeTooLowException";
		}
	};
	
	class FormNotSignedException : public std::exception
	{
		const char *what() const throw()
		{
			return "Form::FormNotSignedException";
		}
	};

	std::string getFormName(void) const;
	bool getFormStatus(void) const;
	int getFormSingGrade(void) const;
	int getFormExecuteGrade(void) const;

	void beSigned(Bureaucrat const &);
	void execute(Bureaucrat const & executor) const;

};

std::ostream &operator<<(std::ostream &output, Form const &obj);

#endif