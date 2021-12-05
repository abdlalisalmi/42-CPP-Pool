/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:45:06 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/04 13:37:48 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string strToUpper(std::string str) {
	std::string strUpper;
	for (size_t i = 0; i < str.length(); i++)
		strUpper += toupper(str[i]);
	return strUpper;
}

int main(int argc, char **argv) {

	if (argc != 4) {
		std::cout << "Invalid args!!" << std::endl;
		return 1;
	}
	
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty() || s2.empty()) {
		std::cout << "Invalid args!!" << std::endl;
		return 1;
	}

	std::ifstream inFile(filename);
	if (inFile) {
		std::string line;
		std::ofstream outFile;
		outFile.open(strToUpper(filename) + ".replace");
		if (outFile.good()) {
			while (std::getline(inFile, line))
			{
				while (line.find(s1) != std::string::npos)
					line = std::string(line.substr(0, line.find(s1))) + s2 + std::string(line.substr(line.find(s1) + s1.length(), line.length() - 1));
				outFile << line << std::endl;
			}
			inFile.close();
		}
		else
			std::cout << "Can't create the file " << strToUpper(filename) + ".replace" << std::endl;
		outFile.close();
	}
	else
		std::cout << "Can't open the file " << filename << std::endl;
	return 0;
}