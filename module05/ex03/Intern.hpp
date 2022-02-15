/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:38:08 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/15 19:27:44 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef INTERN_HPP
#define INTERN_HPP

#include "iostream"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:
	/* data */
public:
	Intern(void);
	Intern(Intern const &);
	~Intern();
	Intern &operator=(Intern const &);

	Form * makeForm(std::string name, std::string target);

	Form * createShrubberyForm(std::string);
	Form * createPresidentialPardonForm(std::string);
	Form * createRobotomyRequestForm(std::string);

	
};

#endif