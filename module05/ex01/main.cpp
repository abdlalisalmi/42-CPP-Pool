/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:22:51 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/11 12:59:20 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Create Invalid Form Object" << std::endl;
	std::cout << "----------------------------------" << std::endl;
	try
	{
		Form invaliForm("CIN_FORM", 170, 200);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Create a valid Form Object" << std::endl;
	std::cout << "----------------------------------" << std::endl;

	Form form("CIN_FORM", 50, 20);

	std::cout << std::endl;
	std::cout << "1) Check the Form Information" << std::endl;
	std::cout << form << std::endl;
	
	std::cout << std::endl;
	std::cout << "2) Test to sign the form with Invalid Bureaucrat" << std::endl;
	Bureaucrat invalidB("aes-salm", 100);
	try
	{
		form.beSigned(invalidB);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "3) Check the Form Information Again" << std::endl;
	std::cout << form << std::endl;
	
	std::cout << std::endl;
	std::cout << "4) Test to sign the form with a Valid Bureaucrat" << std::endl;
	Bureaucrat validB("aes-salm", 50);
	try
	{
		form.beSigned(validB);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "3) Check the Form Information Again" << std::endl;
	std::cout << form << std::endl;

	std::cout << "----------------------------------" << std::endl;
	return 0;
}