/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:43:55 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/14 17:08:15 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm : Destructor Called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm : Defualt Constructor Called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm : Params Constructor Called" << std::endl;
	this->target = target;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "= Operator Called" << std::endl;
	*this = other;
}

// Operators
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	std::cout << "= Operator Called" << std::endl;
	this->target = other.target;
	return *this;
}

void ShrubberyCreationForm::createShrubberyASCIITreesFile(void) const {
	std::ofstream outFile;
	outFile.open(this->target + "_shrubbery");
}