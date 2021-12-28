/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:24:10 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/28 13:42:56 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main() {
    std::cout << std::endl << "#################################################################" << std::endl;
    std::cout << "#####################  DiamondTrap Class  #######################" << std::endl;
    std::cout << "#################################################################" << std::endl;

    std::cout << std::endl;
    DiamondTrap player4("Abdelaali");

    std::cout << std::endl << "----------- Test whoAmI() fnction -----------------------" << std::endl;
    player4.whoAmI();
    std::cout << "------------------------------------------------------------------------" << std::endl;
    
    std::cout << std::endl << "----------- Test Attack() fnction -----------" << std::endl;
    player4.attack("Amine");
    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test takeDamage() fnction -----------------------" << std::endl;
    player4.takeDamage(3);
    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test beRepaired() fnction -----------------------" << std::endl;
    player4.beRepaired(2);
    std::cout << "------------------------------------------------------------------------" << std::endl << std::endl;
    
    std::cout << std::endl << "----------- Test GUARDGATE fnction ------------------------" << std::endl;
    player4.guardGate();
    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test highFiveGuys() fnction ------------------------" << std::endl;
    player4.highFiveGuys();
    std::cout << "------------------------------------------------------------------------" << std::endl << std::endl;
    

    return 0;
}