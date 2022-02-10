/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:54:17 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/10 19:30:45 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Create Bureaucrat valid object" << std::endl;
	std::cout << "----------------------------------" << std::endl;

	Bureaucrat b("aes-salm", 100);

	std::cout << std::endl
			  << "1) test getters for both Name and Grade attributes:" << std::endl;
	std::cout << "Name: " << b.getName() << std::endl;
	std::cout << "Grade: " << b.getGrade() << std::endl;

	std::cout << std::endl
			  << "2) test insertion («) operator:" << std::endl;
	std::cout << b << std::endl;

	std::cout << std::endl
			  << "3) test increment function:" << std::endl;
	b.gradeIncrement();
	std::cout << "Grade: " << b.getGrade() << std::endl;
	
	std::cout << std::endl
			  << "4) test decrement function:" << std::endl;
	b.gradeDecrement();
	std::cout << "Grade: " << b.getGrade() << std::endl;
	
	std::cout << std::endl
			  << "5) test create object with grade=200:" << std::endl;
	try
	{
		Bureaucrat obj1("aes-salm", 200);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl
			  << "6) test create object with grade=0:" << std::endl;
	try
	{
		Bureaucrat obj1("aes-salm", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl
			  << "7) test increment grade to 0:" << std::endl;
	try
	{
		Bureaucrat obj1("aes-salm", 1);
		obj1.gradeIncrement();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl
			  << "8) test decrement grade to 151:" << std::endl;
	try
	{
		Bureaucrat obj1("aes-salm", 150);
		obj1.gradeDecrement();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "----------------------------------" << std::endl;
	return 0;
}