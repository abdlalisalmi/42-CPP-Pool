/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:21:28 by aes-salm          #+#    #+#             */
/*   Updated: 2022/03/07 23:56:38 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
void fillIntArray(T &array) {
	for (unsigned int i = 0; i < array.size(); i++)
		array[i] = i + 1;
}

int main() {
	
	std::cout << std::endl << "Create Empty INT & STRING Arrays:" << std::endl;
	Array <int> emptyIntArray;
	std::cout << "INT Array size = " << emptyIntArray.size() << std::endl;
	Array <int> emptyStrArray;
	std::cout << "STRING Array size = " << emptyStrArray.size() << std::endl;

	std::cout << std::endl << "---------------------------------" << std::endl << std::endl;
	
	std::cout << "Create a STRING Array with size=5:" << std::endl;
	Array <std::string> strArray(2);
	strArray[0] = "Hello";
	strArray[1] = "World";
	std::cout << "size = " << strArray.size() << std::endl;
	strArray.print();

	std::cout << std::endl << "---------------------------------" << std::endl << std::endl;

	std::cout << "Create an INT Array with size=5:" << std::endl;
	Array <int> intArray(5);
	fillIntArray(intArray);
	std::cout << "size = " << intArray.size() << std::endl;
	intArray.print();

	std::cout << "[+] Test read with [] operator: " << std::endl;
	std::cout << "intArray[0] = " << intArray[0] << std::endl;
	std::cout << "[+] Test Array Copy Constructor:" << std::endl;
	Array <int> copyIntArray(intArray);
	std::cout << "size = " << copyIntArray.size() << std::endl;
	copyIntArray.print();

	std::cout << "[+] Test Deep Copy:" << std::endl;
	intArray[0] = 1996;
	std::cout << "Original Array "; intArray.print();
	std::cout << "Copy Array "; copyIntArray.print();

	std::cout << "[+] Test Access to invalid index 10:" << std::endl;
	try
	{
		intArray[10];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// std::cout << "[+] Test Const Array:" << std::endl;
	// const Array<int> constIntArray(3);
	// constIntArray.print();
	// std::cout << constIntArray[0] << std::endl;
	// constIntArray[0] = 10;

	return 0;
}