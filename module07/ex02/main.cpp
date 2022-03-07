/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:21:28 by aes-salm          #+#    #+#             */
/*   Updated: 2022/03/07 19:34:04 by aes-salm         ###   ########.fr       */
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

	std::cout << "Create an INT Array with size=5:" << std::endl;
	Array <int> intArray(5);
	fillIntArray(intArray);
	std::cout << "size = " << intArray.size() << std::endl;
	intArray.print();

	std::cout << "[+] Test Array Copy Constructor:";
	Array <int> copyIntArray(intArray);
	std::cout << "size = " << copyIntArray.size() << std::endl;
	copyIntArray.print();
	

	std::cout << std::endl << "---------------------------------" << std::endl << std::endl;
	
	std::cout << "Create an STRING Array with size=5:" << std::endl;
	Array <std::string> strArray(5);
	std::cout << "size = " << strArray.size() << std::endl;
	// Array <int> array1(5);
	// try
	// {
	// 	array1[10];
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	// Array <int> array2;
	// std::cout << array1.size() << std::endl;
	// std::cout << array2.size() << std::endl;

	// array2 = array1;
	// std::cout << array2.size() << std::endl;

	return 0;
}