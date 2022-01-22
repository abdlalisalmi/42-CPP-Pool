/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 16:27:59 by aes-salm          #+#    #+#             */
/*   Updated: 2022/01/22 20:14:59 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j; // should not create a leak
	delete i;

	std::cout << "############# Create array of animals[4] half Dogs and half Cats" << std::endl;

	Animal *animals[4];
	for (size_t i = 0; i < 2; i++)
		animals[i] = new Dog();
	for (size_t i = 2; i < 4; i++)
		animals[i] = new Cat();

	std::cout << "############# Delete the Dogs and the Cats array as an animal" << std::endl;
	for (size_t i = 0; i < 4; i++)
		delete animals[i];

	std::cout << "############# Test the deep of Dog and Cat copy" << std::endl;
	Cat basic;
	{
		Cat tmp = basic;
	}
	std::cout << "######################" << std::endl;

	return 0;
}