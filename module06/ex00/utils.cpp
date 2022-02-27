/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:20:31 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/27 16:22:55 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

int isChar(std::string arg) {
	if (arg.length() == 1 && !std::isdigit(arg[0])) {
		return true;
	}
	return false;
}

void convertToChar(char *arg) {
	std::cout << "char: ";
	if (isChar(arg)) {
		std::cout << arg << std::endl;
	}
	
}

void convertToInt(char *arg) {
	std::cout << "int: ";
	if (isChar(arg)) {
		std::cout << static_cast <int> (arg[0]) << std::endl;
	}
}

void convertToFloat(char *arg) {
	std::cout << "float: ";
	if (isChar(arg)) {
		std::cout << static_cast <float> (arg[0]) << ".0f" << std::endl;
	}
}

void convertToDouble(char *arg) {
	std::cout << "double: ";
	if (isChar(arg)) {
		std::cout << static_cast <double> (arg[0]) << ".0" << std::endl;
	}
}