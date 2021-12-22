/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:24:10 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/22 22:28:45 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main() {
    
    std::cout << std::endl;

    ScavTrap player1("Abdelaali");
    
    std::cout << std::endl << "----------- Test ATTACK fnction with damage = 0 -----------" << std::endl;
    player1.attack("Amine");
    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test ATTACK fnction with damage = 3 -----------" << std::endl;
    player1.setAttackDamage(3);
    player1.attack("Amine");
    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test TAKEDAMAGE fnction -----------------------" << std::endl;
    player1.takeDamage(3);
    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test GUARDGATE fnction ------------------------" << std::endl;
    player1.guardGate();
    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test BEREPAIRED fnction -----------------------" << std::endl;
    player1.beRepaired(2);
    std::cout << "------------------------------------------------------------------------" << std::endl << std::endl;
    
    

    return 0;
}