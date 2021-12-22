/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:24:10 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/22 11:59:56 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap player1("Abdelaali");
    
    std::cout << std::endl << "----------- Test ATTACK fnction with damage = 0 -----------" << std::endl;
    player1.attack("Amine");
    std::cout << "------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test ATTACK fnction with damage = 3 -----------" << std::endl;
    player1.setAttackDamage(3);
    player1.attack("Amine");
    std::cout << "------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test ATTACK fnction -----------" << std::endl;
    player1.takeDamage(3);
    std::cout << "------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test BEREPAIRED fnction -----------" << std::endl;
    player1.beRepaired(2);
    std::cout << "------------------------------" << std::endl;

    return 0;
}