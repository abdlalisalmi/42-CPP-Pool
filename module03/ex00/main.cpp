/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:24:10 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/24 11:15:46 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    std::cout << std::endl;
    ClapTrap player1("Abdelaali");
    
    std::cout << std::endl << "----------- Test attck() fnction with damage = 0 -----------" << std::endl;
    player1.attack("Amine");
    std::cout << "------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test attack() fnction with damage = 3 -----------" << std::endl;
    player1.setAttackDamage(3);
    player1.attack("Amine");
    std::cout << "------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test takeDamage() fnction -----------" << std::endl;
    player1.takeDamage(3);
    std::cout << "------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test beRepaired() fnction -----------" << std::endl;
    player1.beRepaired(2);
    std::cout << "------------------------------" << std::endl;

    return 0;
}