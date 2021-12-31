/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:40:27 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/31 17:59:24 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    std::cout << std::endl;
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    

    std::cout << std::endl << "----- Test WrongCat with virtual keyword ------" << std::endl;
    const WrongAnimal *w = new WrongCat();
    std::cout << w->getType() << " " << std::endl;
    w->makeSound();
    
    std::cout << std::endl << "----- Test WrongCat without virtual keyword ------" << std::endl;
    WrongCat *wc = new WrongCat();
    std::cout << wc->getType() << " " << std::endl;
    wc->makeSound();
    std::cout << std::endl;

    std::cout << std::endl;
    delete meta;
    delete j;
    delete i;
    delete w;
    delete wc;
    return 0;
}