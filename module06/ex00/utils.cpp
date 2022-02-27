/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:20:31 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/27 18:24:29 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"



int isChar(std::string arg) {
	if (arg.length() == 1 && !std::isdigit(arg[0])) {
		return true;
	}
	return false;
}

int isInt(std::string arg) {
	for (size_t i = 0; i < arg.length(); i++)
	{
		if (arg[0] == '-' || arg[0] == '+') continue;
		if (!std::isdigit(arg[i])) return false;
	}
	return true;
}

void convertToChar(char *arg) {
	std::cout << "char: ";
	if (isChar(arg)) {
		std::cout << arg << std::endl;
	}
	
}

void convertToInt(char *arg) {
	std::cout << "int: ";
	if (isInt(arg)) {
		int toInt = std::atoi(arg);
		// Check for MAX_INT and MIN_INT
		if (toInt == -1 && std::strcmp(arg, "-1")) {
			std::cout << "impossible" << std::endl;
		} else {
			std::cout << arg << std::endl;
		}
	} else if (isChar(arg)) {
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