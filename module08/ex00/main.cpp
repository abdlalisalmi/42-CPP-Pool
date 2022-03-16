/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:31:30 by aes-salm          #+#    #+#             */
/*   Updated: 2022/03/16 14:32:02 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	
	{
		std::cout << std::endl << "------------ Test Vector ------------" << std::endl;
		int occurrence = 5;
		std::vector<int> vec;
		for (int i = 1; i < 6; i++)
			vec.push_back(i);
		try {
			int possiton = easyFind(vec, occurrence);
			std::cout << "Element " << occurrence << " found at position : " << possiton << std::endl;
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << "------------ Test Array ------------" << std::endl;
		int occurrence = 3;
		std::array<int, 5> arr = {1, 2, 3, 4, 5};
		try {
			int possiton = easyFind(arr, occurrence);
			std::cout << "Element " << occurrence << " found at position : " << possiton << std::endl;
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << "------------ Test Stack ------------" << std::endl;
		int occurrence = 3;
		std::stack<int> stack;
		stack.push(1);
		stack.push(2);
		stack.push(3);
		stack.push(4);
		stack.push(5);
		try {
			int possiton = easyFind(stack, occurrence);
			std::cout << "Element " << occurrence << " found at position : " << possiton << std::endl;
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << "------------ Test Queue ------------" << std::endl;
		int occurrence = 3;
		std::queue<int> queue;
		queue.push(1);
		queue.push(2);
		queue.push(3);
		queue.push(4);
		queue.push(5);
		try {
			int possiton = easyFind(queue, occurrence);
			std::cout << "Element " << occurrence << " found at position : " << possiton << std::endl;
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}



	return 0;
}