/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:54:17 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/08 20:41:29 by aes-salm         ###   ########.fr       */
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
	std::cout << "----------------------------------" << std::endl;
	// try
	// {
	// }
	// catch (std::exception &e)
	// {
	// }
	return 0;
}