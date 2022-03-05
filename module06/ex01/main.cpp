/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:07:56 by aes-salm          #+#    #+#             */
/*   Updated: 2022/03/05 12:04:03 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr) {
	uintptr_t raw = reinterpret_cast <uintptr_t> (ptr);
	return raw;
}

Data* deserialize(uintptr_t raw) {
	Data *ptr = reinterpret_cast <Data*> (raw);
	return ptr;
}

int main() {
	std::cout << std::endl << "Create Data object for test: " << std::endl;
	Data *data = new Data(10, "aes-salm");
	std::cout << "Number: " << data->getNumber() << std::endl;
	std::cout << "Str: " << data->getStr() << std::endl;

	std::cout << std::endl << "Serialize the object to uintptr_t type: " << std::endl;
	uintptr_t ptr = serialize(data);
	std::cout << ptr << std::endl;
	
	std::cout << std::endl << "Deserialize the object to uintptr_t type: " << std::endl;
	Data *dt = deserialize(ptr);
	std::cout << "Number: " << dt->getNumber() << std::endl;
	std::cout << "Str: " << dt->getStr() << std::endl;

	std::cout << std::endl;
	if (data == dt) {
		std::cout << "Compares equal to the original pointer." << std::endl;
	} else {
		std::cout << "Compares not equal to the original pointer." << std::endl;
	}
	return (0);
}