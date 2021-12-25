/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:24:10 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/24 22:30:43 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main() {
    std::cout << std::endl << "#################################################################" << std::endl;
    std::cout << "########################  ClapTrap Class  #######################" << std::endl;
    std::cout << "#################################################################" << std::endl;

    std::cout << std::endl;
    ClapTrap player1("Abdelaali");
    
    std::cout << std::endl << "----------- Test attck() fnction with damage = 0 -----------" << std::endl;
    player1.attack("Amine");
    std::cout << "------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test takeDamage() fnction -----------" << std::endl;
    player1.takeDamage(3);
    std::cout << "------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test beRepaired() fnction -----------" << std::endl;
    player1.beRepaired(2);
    std::cout << "------------------------------" << std::endl;
    
    std::cout << std::endl << "#################################################################" << std::endl;
    std::cout << "########################  ScavTrap Class  #######################" << std::endl;
    std::cout << "#################################################################" << std::endl;

    std::cout << std::endl;
    ScavTrap player2("Abdelaali");
    
    std::cout << std::endl << "----------- Test ATTACK fnction -----------" << std::endl;
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

    std::cout << std::endl << "#################################################################" << std::endl;
    std::cout << "########################  FragTrap Class  #######################" << std::endl;
    std::cout << "#################################################################" << std::endl;

    std::cout << std::endl;
    FragTrap player3("Abdelaali");
    
    std::cout << std::endl << "----------- Test Attack() fnction -----------" << std::endl;
    player3.attack("Amine");
    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test takeDamage() fnction -----------------------" << std::endl;
    player3.takeDamage(3);
    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test highFiveGuys() fnction ------------------------" << std::endl;
    player3.highFiveGuys();
    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test beRepaired() fnction -----------------------" << std::endl;
    player3.beRepaired(2);
    std::cout << "------------------------------------------------------------------------" << std::endl << std::endl;
    
    std::cout << std::endl << "#################################################################" << std::endl;
    std::cout << "########################  DiamondTrap Class  #######################" << std::endl;
    std::cout << "#################################################################" << std::endl;

    std::cout << std::endl;
    DiamondTrap player4("Abdelaali");

    std::cout << std::endl << "----------- Test Attack() fnction -----------" << std::endl;
    player4.attack("Amine");
    std::cout << "------------------------------------------------------------------------" << std::endl;

    // std::cout << std::endl << "----------- Test takeDamage() fnction -----------------------" << std::endl;
    // player4.takeDamage(3);
    // std::cout << "------------------------------------------------------------------------" << std::endl;

    // std::cout << std::endl << "----------- Test GUARDGATE fnction ------------------------" << std::endl;
    // player4.guardGate();
    // std::cout << "------------------------------------------------------------------------" << std::endl;

    // std::cout << std::endl << "----------- Test highFiveGuys() fnction ------------------------" << std::endl;
    // player4.highFiveGuys();
    // std::cout << "------------------------------------------------------------------------" << std::endl;

    // std::cout << std::endl << "----------- Test beRepaired() fnction -----------------------" << std::endl;
    // player4.beRepaired(2);
    // std::cout << "------------------------------------------------------------------------" << std::endl << std::endl;
    
    std::cout << std::endl << "----------- Test whoAmI() fnction -----------------------" << std::endl;
    player4.whoAmI();
    std::cout << "------------------------------------------------------------------------" << std::endl << std::endl;

    return 0;
}