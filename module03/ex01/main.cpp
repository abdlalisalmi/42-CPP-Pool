/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:24:10 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/28 13:43:48 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


int main() {
    std::cout << std::endl << "#################################################################" << std::endl;
    std::cout << "########################  ScavTrap Class  #######################" << std::endl;
    std::cout << "#################################################################" << std::endl;

    std::cout << std::endl;
    ScavTrap player2("Abdelaali");
    
    std::cout << std::endl << "----------- Test ATTACK fnction ---------------------------" << std::endl;
    player2.attack("Amine");
    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test TAKEDAMAGE fnction -----------------------" << std::endl;
    player2.takeDamage(3);
    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test GUARDGATE fnction ------------------------" << std::endl;
    player2.guardGate();
    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test BEREPAIRED fnction -----------------------" << std::endl;
    player2.beRepaired(2);
    std::cout << "------------------------------------------------------------------------" << std::endl << std::endl;
    
    return 0;
}