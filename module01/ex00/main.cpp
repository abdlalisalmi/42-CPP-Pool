/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 23:09:32 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/01 13:14:40 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

int main() {
    
    std::cout << std::endl << "------- Testing newZombie function -------" << std::endl;
    Zombie *z = newZombie("Zombie_1");
    z->announce();
    delete(z);
    
    std::cout << std::endl << "------- Testing randomChump function -------" << std::endl;
    randomChump("Zombie_2");
    return 0;
}