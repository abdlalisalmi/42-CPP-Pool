/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:22:01 by aes-salm          #+#    #+#             */
/*   Updated: 2022/03/05 14:05:11 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

int main() {

	std::cout << std::endl << "Call Generate Function:" << std::endl;
	Base *ptr = generate();

	std::cout << std::endl << "Call Identify * Function:" << std::endl;
	identify(ptr);
	
	std::cout << std::endl << "Call Identify & Function:" << std::endl;
	identify(ptr);

	return 0;
}