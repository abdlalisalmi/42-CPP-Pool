/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:24:10 by aes-salm          #+#    #+#             */
/*   Updated: 2021/12/21 22:44:58 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    std::cout << std::endl << "----------- Test ATTACK fnction -----------" << std::endl;
    ClapTrap player1("Abdelaali");
    player1.attack("Amine");
    std::cout << "------------------------------" << std::endl;

    std::cout << std::endl << "----------- Test ATTACK fnction -----------" << std::endl;
    player1.takeDamage(3);
    std::cout << "------------------------------" << std::endl;

    return 0;
}