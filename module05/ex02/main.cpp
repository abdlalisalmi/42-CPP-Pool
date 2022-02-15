/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:22:51 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/15 11:54:44 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Test ShrubberyCreationForm Class" << std::endl;
	std::cout << "----------------------------------" << std::endl;

	ShrubberyCreationForm SCF("home");
	Bureaucrat bscf("aes-salm", 137);
	std::cout << std::endl
			  << "[+] Test Execute ShrubberyCreationForm Without Sign:" << std::endl;
	try
	{
		SCF.execute(bscf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-----------------" << std::endl;

	std::cout << std::endl
			  << "[+] Test Execute ShrubberyCreationForm With Sign:" << std::endl;
	try
	{
		SCF.beSigned(bscf);
		SCF.execute(bscf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-----------------" << std::endl;

	// ******************************************************************************************

	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Test RobotomyRequestForm Class" << std::endl;
	std::cout << "----------------------------------" << std::endl;

	RobotomyRequestForm RRF("NEO");
	Bureaucrat brrf("aes-salm", 45);
	std::cout << std::endl
			  << "[+] Test Execute RobotomyRequestForm Without Sign:" << std::endl;
	try
	{
		RRF.execute(brrf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-----------------" << std::endl;

	std::cout << std::endl
			  << "[+] Test Execute RobotomyRequestForm With Sign:" << std::endl;
	try
	{
		RRF.beSigned(brrf);
		RRF.execute(brrf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-----------------" << std::endl;


	// ******************************************************************************************

	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Test PresidentialPardonForm Class" << std::endl;
	std::cout << "----------------------------------" << std::endl;

	PresidentialPardonForm PPF("NEO");
	Bureaucrat bppf("aes-salm", 5);
	std::cout << std::endl
			  << "[+] Test Execute PresidentialPardonForm Without Sign:" << std::endl;
	try
	{
		PPF.execute(bppf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-----------------" << std::endl;

	std::cout << std::endl
			  << "[+] Test Execute PresidentialPardonForm With Sign:" << std::endl;
	try
	{
		PPF.beSigned(bppf);
		PPF.execute(bppf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-----------------" << std::endl;

	return 0;
}