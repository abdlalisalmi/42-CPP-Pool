/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 22:52:08 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/24 23:22:34 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

int main(int len, char **args) {

	if (len != 2) {
		std::cout << "Invalid Arguments !!" << std::endl;
		return 1;
	}

	std::string arg = args[1];
	
	if (arg.length() == 1 && isalpha(arg[0])){
		std::cout << "Char: " << arg << std::endl;
		std::cout << "Int: " << (int)arg[0] << std::endl;
		std::cout << "float: " << (float)arg[0] << std::endl;
		std::cout << "double: " << (double)arg[0] << std::endl;
	}

	return 0;
}