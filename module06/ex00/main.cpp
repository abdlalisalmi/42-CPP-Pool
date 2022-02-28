/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 22:52:08 by aes-salm          #+#    #+#             */
/*   Updated: 2022/02/28 21:41:16 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

int main(int len, char **args) {

	if (len != 2) {
		std::cout << "Invalid Arguments !!" << std::endl;
		return 1;
	} else if (isPseudoLiterals(args[1])) {
		convertPseudoLiterals(args[1]);
	} else {
		convertToChar(args[1]);
		convertToInt(args[1]);
		convertToFloat(args[1]);
		convertToDouble(args[1]);
	}
	return 0;
}