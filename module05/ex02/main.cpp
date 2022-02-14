/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:22:51 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/14 16:02:13 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Test ShrubberyCreationForm Class" << std::endl;
	std::cout << "----------------------------------" << std::endl;

	ShrubberyCreationForm SCF("home");

	// try
	// {
	// 	Form invaliForm("CIN_FORM", 170, 200);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	

	std::cout << "----------------------------------" << std::endl;
	return 0;
}