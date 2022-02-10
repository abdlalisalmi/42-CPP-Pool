/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:36:14 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/10 19:27:59 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
		const char *what() const throw()
		{
			return "GradeTooHighException";
		}
	};

	class GradeTooLowException : public std::exception
	{
		const char *what() const throw()
		{
			return "GradeTooLowException";
		}
	};

	std::string
	getName(void) const;
	int getGrade(void) const;

	void gradeIncrement(void);
	void gradeDecrement(void);
};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &obj);

#endif