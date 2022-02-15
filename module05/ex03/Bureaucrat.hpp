/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:36:14 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/15 21:58:37 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
// #include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string name;
	int grade;

public:
	Bureaucrat(void);
	Bureaucrat(std::string, int);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &);
	Bureaucrat &operator=(Bureaucrat const &);

	class GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};

	std::string
	getName(void) const;
	int getGrade(void) const;

	void gradeIncrement(void);
	void gradeDecrement(void);

	void signForm(std::string formName, bool isSigned, std::string reason) const;
	void executeForm(Form const &form) const;
};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &obj);

#endif