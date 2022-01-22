/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:40:27 by aes-salm          #+#    #+#             */
/*   Updated: 2022/01/22 22:27:26 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    std::cout << std::endl;
	// Animal meta; This will be throwing an error
    const Animal *j = new Dog();
    const Animal *i = new Cat();
	
    std::cout << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    
    std::cout << std::endl;
    delete j;
    delete i;
    return 0;
}