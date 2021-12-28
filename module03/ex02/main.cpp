/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:24:10 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/28 13:43:30 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main() {

    std::cout << std::endl << "#################################################################" << std::endl;
    std::cout << "########################  FragTrap Class  #######################" << std::endl;
    std::cout << "#################################################################" << std::endl;

    std::cout << std::endl;
    FragTrap player3("Abdelaali");
    
    std::cout << std::endl << "----------- Test Attack() fnction with damage = 0 -----------" << std::endl;
    player3.attack("Amine");
    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test Attack() fnction with damage = 3 -----------" << std::endl;
    player3.setAttackDamage(3);
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
    
    

    return 0;
}