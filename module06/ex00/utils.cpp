/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:20:31 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/28 22:17:30 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

bool isChar(std::string arg) {
	if (arg.length() == 1 && !std::isdigit(arg[0])) {
		return true;
	}
	return false;
}

bool isInt(std::string arg) {
	size_t i = 0; 
	if (arg[0] == '-' || arg[0] == '+') i++;
	while (i < arg.length())
	{
		if (!std::isdigit(arg[i])) return false;
		i++;
	}
	return true;
}

bool isFloat(std::string arg) {
	if (arg.length() > 1 && arg[arg.length() - 1] == 'f' && arg.find('.') != std::string::npos) {
		arg.erase(arg.length() - 1);
		std::istringstream iss(arg);
		float dummy;
		iss >> std::noskipws >> dummy;
		return iss && iss.eof();
	}
	return false;
}

bool isDouble(std::string arg) {
	if (arg.length() > 1 && std::isdigit(arg[arg.length() - 1]) && arg.find('.') != std::string::npos) {
		arg.erase(arg.length() - 1);
		std::istringstream iss(arg);
		float dummy;
		iss >> std::noskipws >> dummy;
		return iss && iss.eof();
	}
	return false;
}

bool isPseudoLiterals(std::string arg) {
	std::string pseudoLiterals[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	for(size_t i = 0; i < 6; i++) {
		if (!std::strcmp(arg.c_str(), pseudoLiterals[i].c_str())) return true;
	}
	return false;
}

void convertPseudoLiterals(std::string arg) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (!std::strcmp(arg.c_str(), "nan") || !std::strcmp(arg.c_str(), "nanf")) {
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	} else if (!std::strcmp(arg.c_str(), "-inff") || !std::strcmp(arg.c_str(), "-inf")) {
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	} else if (!std::strcmp(arg.c_str(), "+inff") || !std::strcmp(arg.c_str(), "+inf")) {
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
}

void convertToChar(char *arg) {

	std::cout << "char: ";
	if (isChar(arg)) {
		std::cout << static_cast <char> (arg[0]) << std::endl;
	} else if (isInt(arg)) {
		int toInt = std::atoi(arg);
		// Check for MAX_INT and MIN_INT
		if ((toInt == -1 && std::strcmp(arg, "-1")) || toInt < 0 || toInt > 255) {
			std::cout << "impossible" << std::endl;
		} else {
			if (toInt >= 0 && toInt <= 31) std::cout << "Non displayable" << std::endl;
			else std::cout << "'" << static_cast <char> (toInt) << "'" << std::endl;
		}
	} else if (isFloat(arg)) {
		std::string floatStr(arg);
		std::string intPart = floatStr.substr(0, floatStr.find("."));
		int toInt = std::atoi(arg);
		// Check for MAX_INT and MIN_INT
		if ((toInt == -1 && std::strcmp(arg, "-1")) || toInt < 0 || toInt > 255) {
			std::cout << "impossible" << std::endl;
		} else {
			if (toInt >= 0 && toInt <= 31) std::cout << "Non displayable" << std::endl;
			else std::cout << "'" << static_cast <char> (toInt) << "'" << std::endl;
		}
	} else if (isDouble(arg)) {
		std::string doubleStr(arg);
		std::string intPart = doubleStr.substr(0, doubleStr.find("."));
		int toInt = std::atoi(arg);
		// Check for MAX_INT and MIN_INT
		if ((toInt == -1 && std::strcmp(doubleStr.c_str(), "-1")) || toInt < 0 || toInt > 255) {
			std::cout << "impossible" << std::endl;
		} else {
			if (toInt >= 0 && toInt <= 31) std::cout << "Non displayable" << std::endl;
			else std::cout << "'" << static_cast <char> (toInt) << "'" << std::endl;
		}
	} else {
		std::cout << "impossible" << std::endl;
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
			std::cout << static_cast <int> (toInt) << std::endl;
		}
	} else if (isChar(arg)) {
		std::cout << static_cast <int> (arg[0]) << std::endl;
	} else if (isFloat(arg)) {
		std::string floatStr(arg);
		std::string removeF = floatStr.substr(0, floatStr.length() - 1);
		float toFloat = std::atof(removeF.c_str());
		// Check for MAX_INT and MIN_INT
		if (toFloat > INT_MAX || toFloat < INT_MIN) {
			std::cout << "impossible" << std::endl;
		} else {
			std::cout << static_cast <int> (toFloat) << std::endl;
		}
	} else if (isDouble(arg)) {
		std::string doubleStr(arg);
		std::string intPart = doubleStr.substr(0, doubleStr.find("."));
		int toInt = std::atoi(arg);
		// Check for MAX_INT and MIN_INT
		if (toInt == -1 && std::strcmp(intPart.c_str(), "-1")) {
			std::cout << "impossible" << std::endl;
		} else {
			std::cout << static_cast <int> (toInt) << std::endl;
		}
	} else {
		std::cout << "impossible" << std::endl;
	}
}

void convertToFloat(char *arg) {
	std::cout << "float: ";
	if (isFloat(arg)) {
		std::cout << arg << std::endl;
	} else if (isChar(arg)) {
		std::cout << static_cast <float> (arg[0]) << ".0f" << std::endl;
	} else if (isInt(arg)) {
		float toFloat = std::atof(arg);
		if (toFloat == -1 && std::strcmp(arg, "-1")) {
			std::cout << "impossible" << std::endl;
		} else {
			std::cout << static_cast <float> (toFloat) << ".0f" << std::endl;
		}
	} else if (isDouble(arg)) {
		std::string floatStr(arg);
		float toFloat = std::atof(arg);
		if (toFloat == -1 && std::strcmp(arg, "-1")) {
			std::cout << "impossible" << std::endl;
		} else {
			std::cout << static_cast <float> (toFloat);
			if (floatStr[floatStr.length()-1] == '0') {
				if (floatStr[floatStr.length()-2] == '.') std::cout << ".0f";
				else std::cout << "0f";
			}
			std::cout << std::endl;
		}
	} else {
		std::cout << "impossible" << std::endl;
	}
}

void convertToDouble(char *arg) {
	std::cout << "double: ";
	if (isDouble(arg)) {
		std::cout << arg << std::endl;
	} else if (isChar(arg)) {
		std::cout << static_cast <double> (arg[0]) << ".0" << std::endl;
	} else if (isInt(arg)) {
		int toInt = std::atoi(arg);
		if (toInt == -1 && std::strcmp(arg, "-1")) {
			std::cout << "impossible" << std::endl;
		} else {
			std::cout << static_cast <double> (toInt) << ".0" << std::endl;
		}
	} else if (isFloat(arg)) {
		std::string floatStr(arg);
		floatStr = floatStr.substr(0, floatStr.length() - 1);
		std::cout << static_cast <double> (std::atof(floatStr.c_str()));
		if (floatStr[floatStr.length()-1] == '0') {
			if (floatStr[floatStr.length()-2] == '.') std::cout << ".0";
			else std::cout << "0";
		}
		std::cout << std::endl;
	} else {
		std::cout << "impossible" << std::endl;
	}
}