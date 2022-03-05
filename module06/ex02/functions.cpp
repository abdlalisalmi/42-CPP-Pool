/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:16:09 by aes-salm          #+#    #+#             */
/*   Updated: 2022/03/05 14:40:34 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
	std::srand(std::time(nullptr));
	int index =  0 + std::rand() % (( 2 + 1 ) - 0);
	if (index == 0) {
		std::cout << "Generate A instance." << std::endl;
		Base * ptr = new A();
		return ptr;
	} else if (index == 1) {
		std::cout << "Generate B instance." << std::endl;
		Base * ptr = new B();
		return ptr;
	} else {
		std::cout << "Generate C instance." << std::endl;
		Base * ptr = new C();
		return ptr;
	}
}

void identify(Base* p) {
	std::cout << "Identify: ";
	if (dynamic_cast <A*> (p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast <B*> (p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast <C*> (p)) {
		std::cout << "C" << std::endl;
	}
}

void identify(Base& p) {
	std::cout << "Identify: ";
	try {
		(void) dynamic_cast <A&> (p);
		std::cout << "A" << std::endl;
	} catch (const std::bad_cast) {
		try {
			(void) dynamic_cast <B&> (p);
			std::cout << "B" << std::endl;
		} catch (const std::bad_cast) {
			try {
				(void) dynamic_cast <C&> (p);
				std::cout << "C" << std::endl;
			} catch (const std::bad_cast) {
			}
		}
	}
}