/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:22:51 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/15 19:34:48 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Create ShrubberyCreationForm Object" << std::endl;
	std::cout << "-------------------------------------" << std::endl;

	Bureaucrat B("aes-salm", 1);
	Intern someRandomIntern;
	Form *sf;
	sf = someRandomIntern.makeForm("shrubbery", "Bender");
	sf->beSigned(B);
	sf->execute(B);
	std::cout << "-------------------------------------" << std::endl;

	// **************************************************************************
	
	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Create RobotomyRequestForm Object" << std::endl;
	std::cout << "-------------------------------------" << std::endl;

	Bureaucrat B2("aes-salm", 1);
	Intern someRandomIntern2;
	Form *rrf;
	rrf = someRandomIntern2.makeForm("robotomy request", "Bender1");
	rrf->beSigned(B2);
	rrf->execute(B2);
	std::cout << "-------------------------------------" << std::endl;

	// **************************************************************************

	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Create PresidentialPardonForm Object" << std::endl;
	std::cout << "-------------------------------------" << std::endl;

	Bureaucrat B3("aes-salm", 1);
	Intern someRandomIntern3;
	Form *ppf;
	ppf = someRandomIntern3.makeForm("presidential pardon", "Bender2");
	ppf->beSigned(B3);
	ppf->execute(B3);
	std::cout << "-------------------------------------" << std::endl;

	return 0;
}